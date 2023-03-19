#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int nums[4];
    for(int i=0; i<4; i++)
    {
        cin>>nums[i];
    }

    int mx=nums[0];
    for(int i=0; i<4; i++)
    {
        if(mx<nums[i])
        {
            mx=nums[i];
        }
    }

    for(int i=3; i>=0; i--)
    {
        if(mx-nums[i]!=0)
        {
            printf("%d ", mx-nums[i]);
        }
    }
    return 0;
}