//Listen and Silent are anagram of each other.

#include<bits/stdc++.h>
using namespace std;

void anagram(vector<char>&arr1,vector<char>&arr2){
    if(arr1.size()!=arr2.size()){
        cout<<"notanagram";
    }
    vector<int>freq(26,0);
    
    for(char i : arr1){
        freq[i-'a']++;
    }
    for(char j : arr2){
        freq[j-'a']--;
    }
    for(int i : freq){
        if(i!=0){
            cout<<"notanagram";
        }
    }
    cout<<"ANAGRAM";
}
int main(){
    string s1 ="listen";
    string s2 ="silent";
    vector<char>arr1;
    vector<char>arr2;
    for(char i: s1){
        arr1.push_back(i);
    }
    for(char i: s2){
        arr2.push_back(i);
    }
    anagram(arr1,arr2);
    return 0;
}