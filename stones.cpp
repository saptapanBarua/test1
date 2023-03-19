#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    char beads[n];
    cin>>beads;

    int count=0;
    for(int i=1; i<n; i++)
    {
        if(beads[i]==beads[i-1])
        {
            count++;
        }
    }

    cout<<count;
    return 0;
}