#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
vector<string> ans;
map<int,string> mp;
int count=0;
int helper(string &dig,int start,string &temp){
    

    
    if(start==dig.size()){
        count++;
        ans.push_back(temp);
      
    }
   
    for(auto x:mp[(dig[start]-'0')]){
        
        temp.push_back(x);
       
        helper(dig,start+1,temp);
       
        temp.pop_back();
          
    }
   return count;
}

vector<string> letterCombinations(string dig){
    if(dig=="") return ans;
    
        mp[2]="abc";
        mp[3]="def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        
       string temp;
      
       int Combinationscount=helper(dig,0,temp);
       cout<<"The total No of Combinations are:"<<Combinationscount<<endl;
       return ans;
}
 };

 int main(){
    
    string dig;
    cout<<"Enter a numeric string"<<endl;
    cin>>dig;
    Solution s;
    vector<string> result=s.letterCombinations(dig);
    cout<<"Letter Combinations are:"<<endl;
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
 }