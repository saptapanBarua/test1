#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ln;
    cin>>n;

    string words[n];
    for(int i=0; i<n; i++)
    {
        cin>>words[i];
        transform(words[i].begin(), words[i].end(), words[i].begin(), ::tolower);
    }

    return 0;
}
