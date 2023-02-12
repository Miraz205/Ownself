#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int m, n=0, i;
    cin>>s;
    m=s.size();
    for(i=0; i<m; i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
        n++;
        break;
    }
    }
    if(n>0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
    }


