#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x, y;
    cin >> x >> y;
    int z = x, isPrime;
 
    for (int i = x; i <= y; i++)
    {
        isPrime = 1;
        for (int j = 2; j <= i; j++)
        {
            if ((i % j == 0) && (i != j))
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime != 0 && x != i)
        {
            z = i;
            break;
        }
    }
    if (z == y)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}