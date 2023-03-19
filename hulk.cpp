#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    int n=1;
    while (x>=n)
    {
        if((x==n)&&(n%2==0))
        {
            cout<<"I love it";
        }
        else if((x==n)&&(n%2!=0))
        {
            cout<<"I hate it";
        }
        else if(n%2==0)
        {
            cout<<"I love that ";
        }
        else if(n%2!=0)
        {
            cout<<"I hate that ";
        }
        n++;
    }
    return 0;
}