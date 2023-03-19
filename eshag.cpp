#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        sort(arr, arr+n);
        int mini=arr[0];
        int counter=0;
        for(int j=1; j<n; j++)
        {
            if(mini<arr[j])
            {
                arr[j]=arr[j+1];
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
