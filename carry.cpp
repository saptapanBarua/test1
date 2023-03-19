#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long unsigned int x, y;
    cin >> x >> y;

    if((x==0)||(y==0))
    {
        return 0;
    }

    int carry = 0, bits = 0;

    while ((x != 0) && (y != 0))
    {
        bits = (x % 10) + (y % 10);
        if ((bits/10) > 0)
        {
            carry++;
        }
        x /= 10;
        y /= 10;
    }

    if (carry == 1)
    {
        cout << carry << " carry operation.";
    }
    else if (carry > 1)
    {
        cout << carry << " carry operations.";
    }
    else
    {
        cout << "No carry operation.";
    }

    return 0;
}

// ----------রিমন-------------- //
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n1, n2;
    cin>>n1>>n2;
    
    while(n1!=0 && n2 != 0)
    {
        int count = 0;
        
        while(n1!= 0 || n2 != 0)
        {
            int rem1, rem2;
            rem1 = n1%10;
            n1/=10;
            
            rem2 = n2%10;
            n2/=10;
            
            int result = rem1 + rem2;
            
            if(result>9)
            {
                count++;
            }
        }

        
        if(count == 1)
        {
            cout<<count <<" carry operation."<<endl;
        }
        else if(count >1)
        {
            cout<<count <<" carry operations."<<endl;
        }
        else
        {
            cout<<"No carry operation."<<endl;
        }
        cin>>n1>>n2;
    }
    
    return 0;
}

