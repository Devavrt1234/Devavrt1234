#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    for(int i=0;i<=(n/2);i++){
        
        for(int j=0;j<(n/2+n-i);j++){
            cout<<" ";
        }
        
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    

for(int i=0;i<n-2;i++){
    
    for(int j=0;j<n;j++){
        cout<<" ";
    }
    for(int j=0;j<=(n+i-1);j++){
        if(j==0||j==n-1){
            cout<<"@";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
int x=0;
for(int i=n/2;i>=0;i--){
    for(int j=0;j<(n/2-i);j++){
        cout<<" ";
    }
    for(int j=2*i+1;j>0;j--){
        cout<<"*";
    }
for(int j=0;j<n+x;j++){
    if((j==0 ||j==n-1)&&i==(n/2)){
        cout<<"@";
    }
    else{
        cout<<" ";
    }
}
x+=2;
for(int j=2*i+1;j>0;j--){
    cout<<"*";
}
    cout<<"\n";
}

return 0;
}


