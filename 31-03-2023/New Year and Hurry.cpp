#include<iostream>
using namespace std;
int main()
{
    int x,y,z,i,j=0;
    cin>>x>>y;
    for(i=1; i<=x; i++)
    {
        j=j+(5*i);
        if((j+y)>240)
        {
            cout<<i-1;
            return 0;
        }


        }

    cout<<x;
    return 0;


}
