#include<bits/stdc++.h>
using namespace std;
void unique(vector<int>&arr){
    int n = arr.size();
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    for(int k=0;k<=i;k++){
        cout<<arr[k];
    }
}
int main(){
    vector<int>arr={1,1,1,2,2,2,2,3,3,4,5,5};
    unique(arr);
    return 0;
}