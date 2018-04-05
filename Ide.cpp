#include <iostream>
#include<string.h>
using namespace std;
int check(int n)
{  int p=10,i,f=0,a[100];
    
    for(i=0;n/p>0;i++)
{a[i]=n%p;
p=p*10;
}
p=i;
for(i=0;i<p;i++)
{if(a[i]<=p)
{continue;}
else
{f=1;
break;
}}
if(f==1)
{return 0;}
else
{return 1;}
}




int main()
{  string s;
    int a,i,j,k=1,y=0,z=0,u=1,p=1;
	cin>>s;
	a=strlen(&s[0]);
	int c[a],d[a],e[a];
	for(i=0;i<a;i++)
	{  c[i]=int(s[i]);
     }
     
     for(i=1;i<26;i++)
     { for(j=0;j<a;j++)
       {if(c[j]==i)
           {d[j]=k;
           k++;}
       }}
       
        for(i=0;i<a;i++)
     {e[i]=i+1;
     }
       
    
    
      for(i=a-1;i>=0;i--)
      {y=y+d[i]*p;
      z=z+e[i]*p;
      p=p*10;
     }
     for(i=z;i>0;i++)
     {if(check(i)==1)
     {if(i!=y)
        {u++;}
       else
       {u++;
           break;}
     }
     }
 cout<<u;  
     }
     
     
     
     
     
     
     
     
     
     
     
    
    