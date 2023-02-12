#include<iostream>
using namespace std;
int main()
{
    long long int n, b, c, a;

    cin>>n>>a;
    if(n%2!=0)
    {
        c=(n/2)+1;
    }
    else
    {
        c=n/2;
    }
    if(a<=c)
    {
        b=(a*2)-1;
    }
    else
    {
        a=a-c;
        b=(a*2);
    }
    cout<<b;
    return 0;
}
