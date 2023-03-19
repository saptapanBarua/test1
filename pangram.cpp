#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    string str;
    cin>>str;

    int alphabets[26]={0};

    for(int i=0; i<n; i++)
    {
        alphabets[tolower(str[i])-'a']++;
    }

    int isTrue=1;
    for(int i=0; i<26; i++)
    {
        if(alphabets[i]==0)
        {
            isTrue=0;
            break;
        }
    }

    if(isTrue==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}