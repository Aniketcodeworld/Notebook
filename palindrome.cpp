#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1]){
            cout<<"not palindrome";
            return 0;
        }
    }
    cout<<"palindrome";
    return 0;
}