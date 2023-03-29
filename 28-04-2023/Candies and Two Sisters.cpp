#include<iostream>
#include<string>
using namespace std;
int main()
{
 long long int m,n,o,p;
 long long int i, a[10000];
 cin>>n;
 for(i=0; i<n;i++)
 {
     cin>>m;
     if(m==0 || m==1 || m==2)
     {
         a[i]=0;
     }
     else if(m%2==0)
     {
         a[i]=(m/2)-1;
     }
     else if(m%2!=0)
     {
         a[i]=(m/2);
     }
 }
 for(i=0; i<n;i++)
 {
     cout<<a[i]<<endl;

 }
 return 0;




}
