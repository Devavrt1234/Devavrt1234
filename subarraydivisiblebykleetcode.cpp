#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


class Solution{


   public:
      int countsubarraysdivisiblebyk(vector<int>&nums,int n,int k){
          int sum=0;
          int rem=0;
          int count=0;
     
          unordered_map<int,int> ump;
          
          ump.insert({0,1});
           
           
          for(int i=0;i<n;i++){
          
           sum=sum+nums[i];
           rem=sum%k;

           if(rem<0){
            rem+=k;
           }
            
            if(ump.find(rem)!=ump.end()){
                count=count+ump[rem];
                ump[rem]++;
            }
            else{
                ump.insert({rem,1});
            }
          }
          return count;
      }
};
int main(){
     
    Solution obj;
    int n,k;
    cout<<"enter the size of vector and a positive number as divisor"<<endl;
    cin>>n;
    cin>>k;
    vector<int> nums(n);
    int val;
    cout<<"enter the elements of vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>val;
        nums[i]=val; 
    }
    int count=obj.countsubarraysdivisiblebyk(nums,n,k);
    cout<<"Number of Subarrays divisible by k is:"<<count<<endl;
    return 0;
}