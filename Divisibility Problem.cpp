#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,i;
    int m[1000];
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>b>>c;
        if(c>b)
        {
            m[i]=(c-b);
        }
        else
        {
        d=b%c;
        if(d==0)
        {
            m[i]=d;
        }
        else{
        m[i]=c-d;
        }
    }
    }
    for(i=0; i<a; i++)
    {
        cout<<m[i]<<endl;
    }
    return 0;

}
