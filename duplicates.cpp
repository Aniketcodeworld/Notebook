#include<bits/stdc++.h>
using namespace std;
void duplicates(vector<int>&arr){
     vector<int>nums;
     int n=arr.size();
     unordered_map<int,int>freq;
     for(int i: arr){
         freq[i]++;
     }
     
     for(auto i:freq){
         if(i.second>1){
             nums.push_back(i.first);
         }
     }
     for(int i=0;i<nums.size();i++){
         cout<<nums[i];
     }
 }

int main(){
    vector<int>arr={1,3,4,2,2};
    duplicates(arr);
    return 0;
}