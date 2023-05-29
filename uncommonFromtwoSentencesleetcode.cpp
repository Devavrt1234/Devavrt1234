#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class Solution{

  public:
     vector<string> uncommonFromSentences(string s1,string s2){
        unordered_map<string,int> common;
        vector<string> result;
        countwordsfrequency(common,s1);
        countwordsfrequency(common,s2);

        for(auto i:common){

            if(i.second==1){
             
             result.push_back(i.first);
                
            }
        }
       return result;
     }

     void countwordsfrequency(unordered_map<string,int>&common,string str){
          
          string word="";

          for(int i=0;i<str.size();i++){//traversing the received string
              
              if(str[i]==' '){
                common[word]++;
                word="";//emptying the word string to avoid concatenation with new word
              }
              else{
                word=word+str[i];
              }
          }
          common[word]++;
     }
};
int main(){

    string s1,s2;
    Solution obj;
    cout<<"Enter two sentences having some common and uncommon words"<<endl;
    cout<<"enter the first sentence"<<endl;
    getline(cin,s1);
    cout<<"enter the second sentence"<<endl;
    getline(cin,s2);
    vector<string> ans=obj.uncommonFromSentences(s1,s2);
    cout<<"uncommon words are:"<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;

}

