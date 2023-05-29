//stack implementation using singly linked list in C++

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
  public:
     int data;
     Node* link;
     
     Node(int n){
         this->data=n;
         this->link=NULL;
     }
};
class Stack{
  Node *top;
  public:
  Stack(){
      top=NULL;
  }
  void push(int data){
      Node* temp=new Node(data);
      if(!temp){
          cout<<"\nStack Overflow";
          exit(1);
      }
      else{
          temp->data=data;
          temp->link=top;
          top=temp;
      }
  }
  
  bool isEmpty(){
      return top==NULL;//RETURNS 0 IF top!=NULL 
      //RETURNS 1 IF top==NULL
  }
  int peek(){
      
      if(!isEmpty()){
          return top->data;
      }
      else{
          exit(1);
      }
  }
  void pop(){
      Node *temp;
      if(top==NULL){
          cout<<"\nStack is in Underflow/empty"<<endl;
          exit(1);
      }
      else{
          temp=top;
          top=top->link;
          free(temp);
      }
  }
  void display(){
      Node *temp;
      if(top==NULL){
          cout<<"\nStack is in Underflow/empty"<<endl;
          exit(1);
      }
      else{
          cout<<"\nThe Current Stack of SINGLEY LINKED LIST is:\n"<<endl;
          temp=top;
          while(temp!=NULL){
              cout<<"["<<temp->data<<"]";
              temp=temp->link;
              if(temp!=NULL){
                  cout<<"->";
              }
          }
        }
  }
};                
int main(){
    Stack st;
    
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.display();
    
    cout<<"\nTop Element is:\n"<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.display();
    st.pop();
    st.display();
    cout<<"\nAfter removing Top Elements current Top Elemnt is:\n"<<st.peek()<<endl;
    return 0;
}