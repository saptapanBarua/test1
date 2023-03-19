#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n + 1; i <= 9999; i++)
    {
        int isUnique = 1;
        int nums[10] = {0};
        int j = i, k = 0;

        while (j != 0)
        {
            nums[j % 10]++;
            j /= 10;
            k++;
        }

        for (int j = 0; j < 10; j++)
        {
            if (nums[j] > 1)
            {
                isUnique = 0;
            }
        }

        if (isUnique)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
