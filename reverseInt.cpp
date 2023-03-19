#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int x, y = 1;
        cin >> x;

        while (x != 0)
        {
            if (y != 1)
            {
                y = (y * 10) + (x % 10);
            }
            else
            {
                y *= x % 10;
            }
            x /= 10;
        }
        cout << "Case " << i << ": " << y << endl;
    }
    return 0;
}

// -----------রিমন---------------- //
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    
    for(int test = 1; test<=T; test++)
    {
        signed int n;
        cin>>n;
        
        int rem, reverse = 0;
        while(n!=0)
        {
            rem = n%10;
            reverse = reverse*10 + rem;
            n/=10;
        }
        cout<<"Case "<<test<<": "<<reverse<<endl;
    }

    return 0;
}