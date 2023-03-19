#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    cin>>x;
    
    int isLucky=1;
    int nums[10]={0};
    
    while(x!=0)
    {
        int tmp=x%10;
        nums[tmp-1]++;
        if((tmp!=4)&&(tmp!=7))
        {
            isLucky=0;
        }
        x/=10;
    }
    
    for(int i=0; i<10; i++)
    {
        cout<<i<<"->"<<nums[i]<<endl;
    }

    // if((isLucky==1)&&(nums[3]>0)&&(nums[6]>0))
    // {
    //     cout<<"YES";
    // }
    // else
    // {
    //     cout<<"NO";
    // }
    
    return 0;
}