#include <bits/stdc++.h>
using namespace std;

string conversion(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
         s[i] = (char) tolower(s[i]);
    }
    return s;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    s1=conversion(s1);
    s2=conversion(s2);
    
    int comp = s1.compare(s2);
    cout<<comp<<endl;
    return 0;
}