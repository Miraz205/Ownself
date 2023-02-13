#include<iostream>
#include<string>
using namespace std;
int main()
{

    long long int a, b, c, d, m=0;
    cin>>a>>b>>c>>d;
    if(a==b || a==c || a==d)
    {
        m++;
    }
    if(b==c || b==d)
    {
        m++;
    }
    if(c==d)
    {
        m++;
    }
    cout<<m;
    return 0;
}


