#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int x,y,z;
    string m, n, o, p;
    cin>>m>>n>>o;
    p=m+n;
    sort(p.begin(), p.end());
    sort(o.begin(), o.end());
if(p==o)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}


return 0;
}
