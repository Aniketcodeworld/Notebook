// 1 1 2 2 2 3 
#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>&arr){
    int n = arr.size();
    int count =  0;
    int candidate = 0;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate = arr[i];
            count = 1;
        }else if(arr[i]==candidate){
            count++;
        }else{
            count--;
        }
    }
    return candidate;
}
int main(){
    vactor<int>arr={1,1,2,2,2,3};
    cout<<majorityElement(arr);
}