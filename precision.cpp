
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double num1 {123456789.987654321};
    double num2 {1234.5678};
    double num3 {1234.0};
    
    //using default setteings
    cout<<"--Defaults--------------------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    
    //Note how since we can't display in precision 2 scientific notation is unsigned
    cout<<setprecision(2);
    cout<<"--Precision---------------------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    
    cout<<setprecision(5);
    cout<<"--Precision---------------------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    
    cout<<setprecision(9)<<fixed;
    cout<<"--Precision---------------------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    
    cout<<setprecision(3)<<fixed;
    cout<<"--Precision---------------------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    
    cout<<setprecision(3)<<fixed<<scientific;
    cout<<"--Precision---------------------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    
    cout<<setprecision(3)<<fixed<<scientific<<uppercase;
    cout<<"--Precision---------------------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    
    cout<<setprecision(3)<<fixed<<scientific<<nouppercase;
    cout<<"--Precision---------------------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    
    //Back to normal
    
    //cout<<unsetf(ios::scientific|ios::fixed);
    cout<<setprecision(16)<<fixed;
    // cout<<resetiosflags(ios::showpoint);
    // cout<<resetiosflags(ios::showpos);
    
    cout<<"--Back to defaults--------------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    
    cout<<"Encoding of Message is Done Here"<<endl;
    int num4 {1234};
    double num5{1234.5678};
    string hello {"Hello"};
    
    cout<<"Original Message is:"<<endl;
     cout<<"12345678901234567890123456789012345678901234567890"<<endl;
    cout<<"message forms after encoding are:"<<endl;
    cout<<setw(50)<<right<<setfill('*')<<num4<<endl;
  
    cout<<setw(50)<<right<<setfill('*')<<num5<<endl;
   
    cout<<setw(50)<<left<<setfill('$')<<num4<<endl;
    
    cout<<setw(50)<<left<<setfill('#')<<num5<<endl;
    
    cout<<setw(50)<<left<<setfill('^')<<hello<<endl;
    
    cout<<setw(50)<<left<<setfill('&')<<hello<<endl;
    return 0;
}
