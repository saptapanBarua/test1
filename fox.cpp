#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x, y;
    cin>>x>>y;

    for(int i=1; i<=x; i++)
    {
        if(i%4==0)
        {
            cout<<"#";
            for(int j=0; j<y-1; j++)
            {
                cout<<".";
            }
        }
        else if(i%2==0)
        {
            for(int j=0; j<y-1; j++)
            {
                cout<<".";
            }
            cout<<"#";
        }
        else
        {
            for(int j=0; j<y; j++)
            {
                cout<<"#";
            }
        }
        cout<<"\n";
    }
    return 0;
}