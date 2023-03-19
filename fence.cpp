#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, h;
    cin>>n>>h;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int x=0, y=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=h)
        {
            x++;
        }
        else
        {
            y+=2;
        }
    }

    cout<<x+y<<endl;
    return 0;
}