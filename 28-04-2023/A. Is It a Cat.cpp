#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,m,i,j,k;
    string s, p;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        for(j=0; j<m; j++)
        {
            cin>>s[j];
        }
        for(j=0; j<m; j++)
        {
            s[j]=tolower(s[j]);
        }
        if(s[m-1]!='w')
        {
            p[i]=0;
        }
        else if (s[m-1]=='w')
        {
            p[i]=1;
        }

    }
    for(i=0; i<n; i++)
    {
        if(p[i]==1)
            cout<<"Yes";
        else
            cout<<"NO";
    }
}
