#include<bits/stdc++.h>
using namespace std;
int sec_largest(vector<int>&arr){
    int L = INT_MIN;
    int SL = INT_MIN;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>L){
            SL=L;
            L=arr[i];
        }
        else if(arr[i]>SL && arr[i]!=L){
            SL=arr[i];
        }
    }
    return SL;
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sec_largest(arr);
    return 0;
}