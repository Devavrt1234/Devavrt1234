#include<iostream>
#include<vector>
#include<string>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strvec) {

        int min=10000;
        int n=strvec.size();

        if(n==0){
            return "";
        }
        if(n==1){
            return strvec[0];
        }

        for(int i=0;i<n;i++){
            int size=strvec[i].size();
            if(size<min){
                min=size;
            }
        }
         string res="";
        for(int i=0;i<min;i++){
            char c=strvec[0][i];
            for(int j=1;j<n;j++){

                if(c!=strvec[j][i]){
                      return res;
                }
            }
            res+=c;
        }
        return res;
    }
       
};




int main(){
    
    Solution obj;
    int n;
    cout<<"enter the size of vector"<<endl;
    cin>>n;
    vector<string> strvec(n);
    string str;
    cout<<"enter the strings one by one in the vector"<<endl;
    for(int i=0;i<strvec.size();i++){
      cin>>str;
      strvec[i]=str;
    }
    // for(auto i:strvec){
    //     cout<<i<<endl;
    // }
    string res=obj.longestCommonPrefix(strvec);
    cout<<"longest common prefix is:"<<res<<endl;
    return 0;
    

}

