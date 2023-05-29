#include<iostream>
#include<string>
#include<vector>
using namespace std;



class Solution{

 public:

     bool ispalindrome(string s){
        int i=0, j=s.size()-1;

        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
     }

     bool validpalindrome(string str){
        int i=0, j=str.size()-1;

        
            if(ispalindrome(str)==true){
                return true;
            }
            
            while(i<=j){

                if(str[i]==str[j]){
                    i++;
                    j--;
                }
                else{

                    return ispalindrome(str.substr(i,j-i))||ispalindrome(str.substr(i+1,j-i));
                }
            }

          return false;  
        
     }
};
int main(){

    string str;
    Solution obj;
    cout<<"enter any string to check whether it becomes a palindrome after ignoring one of its character or already a palindrome one"<<endl;
    cin>>str;
    bool truth=obj.validpalindrome(str);
    if(truth){
        string infavourres="true";
         cout<<"the given string can become or is palindrome is:"<<infavourres<<endl;
    }
    else{
        string againstfavourres="false";
        cout<<"the given string can become or is palindrome is:"<<againstfavourres<<endl;
    }
    return 0;
}

