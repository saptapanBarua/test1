// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int m, n;
//     cin>>m>>n;

//     char arr[m][n];
//     for(int i=0; i<m; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     bool isTrue=false;
//     for(int i=0; i<m; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if(arr[i][j]=='w'||arr[i][j]=='b'||arr[i][j]=='W'||arr[i][j]=='B')
//             {
//                 isTrue=true;
//             }
//             else
//             {
//                 isTrue=false;
//                 break;
//             }
//         }
//     }
//     if(isTrue)
//     {
//         cout<<"#Black&White";
//     }
//     else
//     {
//         cout<<"#Color";
//     }

//     return 0;
// }
/*
1 3
W G B
expected->'#Black&White', found->'#Color'
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int m, n;
    cin>>m>>n;

    char arr[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    bool isTrue=false;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]=='w'||arr[i][j]=='b'||arr[i][j]=='W'||arr[i][j]=='B')
            {
                isTrue=true;
            }
            else
            {
                // Check the next element in the array
                continue;
            }
        }
    }

    // Check if the entire array is made up of the characters 'w', 'b', 'W', or 'B'
    if(isTrue)
    {
        cout<<"#Black&White";
    }
    else
    {
        cout<<"#Color";
    }

    return 0;
}