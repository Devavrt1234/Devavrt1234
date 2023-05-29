
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<string>
using namespace std;

//user-defined exception classes
// class DivideByZeroException{
    
// };
// class NegativeValueException{
    
// };
// double calculate_mpg(int miles,int gallons){
//     if(gallons ==0){
//         throw 26489;
//      // throw  DivideByZeroException();
//     }
    
//     if(miles<0||gallons<0){
//        throw string{"Negative value error"};
//      // throw NegativeValueException();
//     }
//     return static_cast<double>(miles)/gallons;
// }
// int main()
// {
//     cout<<"Welcome to Exception Handling Coding ,Happy Coding "<<endl;
//     int miles;
//     int gallons;
//     double miles_per_gallons;
    
//     cout<<"enter the miles"<<endl;
//     cin>>miles;
//     cout<<"enter the gallons"<<endl;
//     cin>>gallons;
//     try{
//         miles_per_gallons=calculate_mpg(miles,gallons);
//         cout<<"Result: "<<miles_per_gallons<<endl;
//     }
    // catch(int &exp){
    //     cout<<"Tried to divide by zero"<<endl;
    // }
    // catch(const DivideByZeroException &ex ){
    //     cout<<"user-defined exception class helped to handle exception"<<endl;
    //     cout<<"Sorry,you can't divide by zero"<<endl;
    // }
    
    // catch(string &exp1){
    //     cout<<exp1<<endl;
    // }
    // catch(const NegativeValueException &ex){
    //     cout<<"user-defined exception class helped to handle exception"<<endl;
    //     cout<<"Sorry,one of your parameter is negative"<<endl;
    // }
    
    // cout<<"Bye Devavrat Singh,exception is handled successfully"<<endl;
    
    
     void func_a();
  void func_b();
  void func_c();
    void func_a(){
        cout<<"Starting func_a"<<endl;
        func_b();
        throw 200;
        cout<<"Ending func_a"<<endl;
    }
    void func_b(){
        cout<<"Starting func_b"<<endl;
        try{
            func_c();
        }
        catch(int &exp1){
            cout<<"Caught error in func_b"<<endl;
        }
        cout<<"Ending func_b"<<endl;
    }
    void func_c(){
        cout<<"Starting func_c"<<endl;
        throw 100;
        cout<<"Ending func_c"<<endl;
    }
    int main(){
        cout<<"Welcome to Exception Handling+Stack Unwinding Coding ,Happy Coding "<<endl;
        cout<<"Starting main"<<endl;
        try{
            func_a();
        }
        catch(int &exp){
             cout<<"Caught error in main"<<endl;
        }
    
        return 0;
    }
    

