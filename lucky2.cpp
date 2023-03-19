#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    if ((1 <= t) && (t <= 1000))
    {
        for (int i = 0; i < t; i++)
        {
            long long int x;
            cin >> x;
            int sum=0;
            for (int j = 0; j < 6; j++)
            {
                // cout<<x%10<<" ";
                // x/=10;
                if (j < 3)
                {
                    sum += x % 10;
                    x /= 10;
                }
                else
                {
                    sum -= x % 10;
                    x /= 10;
                }
            }
            if(sum==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}