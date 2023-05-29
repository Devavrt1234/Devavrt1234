#include<string>
#include<iostream>
#include<vector>
using namespace std;

class Solution{

public:

    void findallparenthesis(string curr,int openparnum,int closeparnum,vector<string>&result,int n){

      if(curr.size()==2*n){
        result.push_back(curr);
        return;
      }
      if(openparnum<n){
        findallparenthesis(curr+"(",openparnum+1,closeparnum,result,n);
      }
      if(closeparnum<openparnum){
        findallparenthesis(curr+")",openparnum,closeparnum+1,result,n);
      }
    }
    vector<string> generateparenthesis(int n){
     vector<string> result;
     findallparenthesis("",0,0,result,n);
     return result;
    }
    
};

int main(){

    int n;
    cout<<"enter any number to generate a combination of balanced parenthesis having 2*n number of parenthesis"<<endl;
    cin>>n;
    Solution obj;
    vector<string>res= obj.generateparenthesis(n);
    cout<<"Combination of balanced parenthesis is:"<<endl;
    cout<<"[";
    for(auto i:res){
    cout<<i<<" ";
    }
    cout<<"]"<<endl;
    return 0;

}