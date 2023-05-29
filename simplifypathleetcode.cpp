
#include<sstream>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string>
using namespace std;


class Solution{

public:
    string createcanonicalpath(string path){

        vector<string> vec;

        istringstream s(path);
        string st,res;
        while(getline(s,st,'/')){
            if(st==""||st==".") continue;

            if(st!="..") vec.push_back(st);

            else if(!vec.empty()) vec.pop_back();
        }
        for(auto i:vec){
            res+="/"+i;
        }
        return vec.empty()?"/":res;
    }
};
int main(){

    string s;
    Solution obj;
    cout<<"enter the directory path in unix file system like /file1_name/file2-name/./../file3_name/"<<endl;
    getline(cin,s);
    cout<<"CANONICAL PATH IN UNIX FILE SYSTEM IS:"<<obj.createcanonicalpath(s);
    return 0;
}