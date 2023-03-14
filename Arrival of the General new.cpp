#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,n,max,mini,i, z;
    int m[101];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m[i];
    }
    max=m[0];
    mini=m[0];
    for(i=1; i<n; i++)
    {
        if(max>m[i])
        {
            max=max;
        }
        else
        {
            max=m[i];
        }
    }
    for(i=1; i<n; i++)
    {
        if(mini<m[i])
        {
            mini=mini;
        }
        else
        {
            mini=m[i];
        }
    }

    for(i=0; i<n; i++)
    {
        if(max==m[i])
        {
            e=i;
            break;
        }

    }
    for(i=0; i<n; i++)
    {
        if(mini==m[i])
        {
            z=i;
            f=(n-1)-i;
        }

    }
    if(e>z)
    {
    cout<<(e+f)-1;
    }
    else
    {

    cout<<(e+f);
    }
    return 0;
}
