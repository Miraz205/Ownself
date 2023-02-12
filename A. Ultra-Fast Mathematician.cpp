#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, m;
    int i, n, p, j=0;
    cin>>s;
    cin>>m;
    p=s.size();
    for(i=0; i<p; i++)
    {
        if(s[i]==m[i])
        {
            s[j]='0';
            j++;
        }
        else
        {
           s[j]='1';
           j++;
        }
    }
    for(i=0; i<p; i++)
    {
    cout<<s[i];
    }
    return 0;

}
