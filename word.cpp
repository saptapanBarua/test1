#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int len=str.length();
    int lower=0, upper=0;
    char ch;
    for(int i=0; i<len; i++){
        ch=str[i];
        if(isupper(ch)){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(lower>=upper){
        for(int i=0; i<len; i++){
            str[i]=tolower(str[i]);
        }
        cout<<str;
    }
    else{
        for(int i=0; i<len; i++){
            str[i]=toupper(str[i]);
        }
        cout<<str;
    }
    return 0;
}
