#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    int x;
    cin >> x;
    if(x<0)
    {
        return 0;
    }
    int y = (x * (x + 1) / 2)+1;
    cout << y;
    return 0;
}