#include<iostream>
using namespace std;
int main()
{
    int a, n, i;
    float b=0, ava=0;
    cin>>a;
    for(i=0; i<a; i++)
    {
       cin>>n;
       b=b+n;
    }
    ava=b/a;
    cout<<ava;
    return 0;
}
