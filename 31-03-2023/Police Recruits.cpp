#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x, y, i;
    int p=0, c=0;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>y;
        if(y>0)
        {
            p=p+y;
        }
        else
        {
            if(p>0)
            {
                p=p+y;
            }
            else
            {
                c++;
            }
        }
    }
    cout<<c;





}
