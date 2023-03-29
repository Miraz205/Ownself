#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x,y,z,m,n,o,i, j=0;
    int a[1000], b[1000];
    cin>>x;
    cin>>y;
    for(i=0; i<y; i++)
    {
        cin>>a[i];
    }
    cin>>z;
    for(i=y; i<y+z; i++)
    {
        cin>>a[i];
    }
    sort(a, a + (y+z));
    for(i=0; i<y+z; i++)
    {
        if(a[i]!=a[i+1])
        {
           j++;
        }
    }
    if(j==x)

    {
     cout<<"I become the guy.";

    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
return 0;
}
