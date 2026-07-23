//largest element in an array 
#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>&arr){
    int Largest = INT_MIN;
    int n = arr.size();
    for(int i=0;i<n;i++){
         if(arr[i]>largest){
            Largest = max(Largest,arr[i]);
         }
    }
    return Largest;
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Largest(arr);
    return 0;
}