#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int nums[n]={0};
    int a, b=0;
    for(int i=0; i<n-1; i++)
    {
        cin>>a;
        nums[a]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(nums[i]==0)
        {
            b=i;
            break;
        }
    }
    cout<<b<<endl;

    return 0;
}