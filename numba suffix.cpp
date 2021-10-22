#include<bits/stdc++.h>
using namespace std;
int i,j,k,x=33,a,b,c;
string add="Mi",e;
bool first=false,mi=false,second=false;
int main(){
	freopen("Final.OUT","w",stdout);
	string preffix[10]={"","U","D","T","Qd","Qn","Sx","Sp","Oc","No"};
	string suffix1[10]={"","De","Vt","Tg","qg","Qg","sg","Sg","Og","Ng"};
	string suffix2[10]={"","Ce","Du","Tr","Qa","Qi","Si","Se","Ot","Ni"};
	cout<<"K = 10^3"<<endl;
	cout<<"M = 10^6"<<endl;
	cout<<"B = 10^9"<<endl;
	cout<<"T = 10^12"<<endl;
	cout<<"Qd = 10^15"<<endl;
	cout<<"Qn = 10^18"<<endl;
	cout<<"Sx = 10^21"<<endl;
	cout<<"Sp = 10^24"<<endl;
	cout<<"Oc = 10^27"<<endl;
	cout<<"No = 10^30"<<endl;
	for(a=0;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				for(i=0;i<10;i++)
				{
					for(j=0;j<10;j++)
					{
						for(k=0;k<10;k++)
						{
							if(first==false)
							{
								j=1;
								first=true;
							}
							if(mi==true)
							{
								e=preffix[c]+suffix1[b]+suffix2[a]+"Mi"+preffix[k]+suffix1[j]+suffix2[i];
							}
							else e=preffix[k]+suffix1[j]+suffix2[i];
							cout<<e<<" = 10^"<<x<<" | ";
							x+=3;
						}
					}
					cout<<endl;
				}
				mi=true;
				if(second==false)
				{
					c--;
					second=true;
				}
			}
		}
	}
}
