#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int mn = arr[0], mx = arr[n-1];
        // for (int j = 1; j < n; j++)
        // {
        //     if (arr[j] < mn)
        //     {
        //         mn = arr[j];
        //     }
        // }

        mx = arr[n - 1];
        if(mx != mn)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
