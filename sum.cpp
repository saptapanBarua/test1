#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int arr[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                int mx = arr[0];
                int tmp = 0;
                if (arr[j] < arr[k])
                {
                    tmp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = tmp;
                }
            }
        }
        int x = arr[0] + arr[1];
        if (x == arr[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}