#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin>>name;
    cout<<name;

    for(int i=0; name[i]!=0; i++){
        for(int j=i+1; name[j]!=0;){
            if(name[i]==name[j]){
                for(int k=j; k<name.length(); k++){
                    name[k]=name[k+1];
                }
            }
            else{
                j++;
            }
        }
    }
    // int len=name.length();
    // (len%2==0)?printf("CHAT WITH HER!"):printf("IGNORE HIM!");
    cout<<name;

    return 0;
}
