#include<iostream>
using namespace std;





void generatepattern1(int n){


   cout<<"1."<<endl;
     int x=0;
    for(int i=0;i<n+2;i++){
        cout<<"@";
    }
    cout<<"\n";
      
      for(int i=0;i<=(n/2);i++){
    for(int j=0;j<=(n/2-i);j++){
        cout<<" ";
    }
    for(int j=0;j<(2*i+1);j++){
        cout<<"*";
    }
    cout<<"\n";
      }
    for(int i=0;i<(n/2);i++){
    for(int j=0;j<(n/2+i-1);j++){
         cout<<" ";
    }
    for(int j=0;j<((n/2)+2-x);j++){
        cout<<"*";
    }
    x+=2;
    cout<<endl;
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<(n/2+1);j++){
            cout<<" ";
        }
      cout<<"@";
      cout<<endl;
      }
     cout<<endl;
      }



     void  generatepattern2(int n){
        

        cout<<"2."<<endl;
         int x=0;

         for(int i=0;i<n;i++){
        for(int j=0;j<(n/2+1);j++){
            cout<<" ";
        }
        cout<<"@";
        cout<<endl;
       }
        for(int i=0;i<=(n/2);i++){
    for(int j=0;j<=(n/2-i);j++){
        cout<<" ";
    }
    for(int j=0;j<(2*i+1);j++){
        cout<<"*";
    }
    cout<<"\n";
      }
    for(int i=0;i<(n/2);i++){
    for(int j=0;j<(n/2+i-1);j++){
         cout<<" ";
    }
    for(int j=0;j<((n/2)+2-x);j++){
        cout<<"*";
    }
    x+=2;
    cout<<endl;
      }
     for(int i=0;i<n+2;i++){
        cout<<"@";
    }
     
         for(int i=0;i<2;i++){
         cout<<endl;
         }

     }
    

     void generatepattern3(int n){
        
        cout<<"3.";
        int x=0;
        cout<<endl;
        for(int i=0;i<(n/2+1);i++){
              cout<<"e"<<endl;
        }
        for(int i=0;i<(n/2);i++){
            cout<<"e";
        
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(n/2+2-x);j++){
                cout<<"*";
        }
        x+=2;
        cout<<endl;
        }
        for(int i=0;i<(n/2-1);i++){
        cout<<"e"<<endl;
         }  

        cout<<endl;
     }
     void generatepattern4(int n){
         
         cout<<"4."<<endl;
         for(int i=0;i<n;i++){
            cout<<"@";
         }
         cout<<endl;
         
         for(int i=0;i<=(n/2);i++){//for(int i=0;i<(n/2+1);i++){
         for(int j=0;j<(n/2);j++){
            cout<<" ";
         }
         for(int j=0;j<(i+1);j++){
            cout<<"*";
         }
         cout<<endl;
     }
     for(int i=0;i<(n/2);i++){
        for(int j=0;j<(n/2);j++){
            cout<<" ";
         }
         for(int j=0;j<(n/2-i);j++){
            cout<<"*";
         }
         cout<<endl;
     }
      for(int j=0;j<(n/2);j++){
            cout<<" ";
         }
          for(int i=0;i<n;i++){
            cout<<"@";
         } 
       cout<<endl;
     }


void generatepattern5(int n){
    cout<<"5."<<endl;
      for(int i=0;i<n;i++){
            cout<<"@";
         }
    cout<<endl;
     for(int i=0;i<(n/2+1);i++){
      for(int j=0;j<(n-1);j++){
        cout<<" ";
      }
        for(int j=0;j<(i+1);j++){
            cout<<"*";
        }
        cout<<endl;
      }
      for(int i=0;i<(n/2);i++){
         for(int j=0;j<(n-1);j++){
        cout<<" ";
      }
        for(int j=0;j<(n/2-i);j++){
            cout<<"*";
        }
        cout<<endl;
      }
      for(int j=0;j<(n/2);j++){
        cout<<" ";
      }
       for(int i=0;i<n;i++){
            cout<<"@";
         }
    cout<<endl;
}

void generatepattern6(int n1){

    cout<<"6."<<endl;
    for(int i=0;i<=(n1-2);i++){//for(int i=0;i<(n1-2)+1;i++)
        
        for(int j=0;j<=(n1-2)-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(i+1);j++){
            cout<<"@";
        }
        for(int j=0;j<(n1+2);j++){
            cout<<" ";
        }
         for(int j=0;j<(i+1);j++){
            cout<<"@";
        }
        cout<<endl;
    }
    for(int i=0;i<n1;i++){
        cout<<"@";
    }
    for(int j=0;j<(n1+2);j++){
            cout<<"*";
    }
    for(int i=0;i<n1;i++){
        cout<<"@";
    }
     cout<<endl;//control jao thodha aram karo
}

void generatepattern7(int n1){

   int n=n1;
  cout<<"7."<<endl;
  for(int i=0;i<n;i++){

    for(int j=0;j<(n-i-1);j++){
      cout<<" "; 
    }
    for(int j=0;j<(i+1);j++){
     cout<<"@";
    }
    for(int j=0;j<(n+2);j++){

      if(i==0){
        cout<<"*";
      }
      else{
        cout<<" ";
      }}
      for(int j=0;j<(i+1);j++){
     cout<<"@";
    }
    cout<<endl;
  }
}
  

int main(){

  int n,n1;
  cout<<"enter value of n and n1\n";
  cin>>n>>n1;
  if(n%2!=0){
    generatepattern1(n);
    generatepattern2(n);
    generatepattern3(n);
    generatepattern4(n);
    generatepattern5(n);
    generatepattern6(n1);
    generatepattern7(n1);
  }
  return 0;
}
