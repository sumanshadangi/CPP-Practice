#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
int top;
int size;
int *arr;
Stack(int size){
    top=-1;
    this->size=size;
    arr=new int[size];
}
void push(int element){
    if(size-1-top>0){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
}
void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}
bool isEmpty(){
    if(top==-1){
        return true;
    }
    else return false;
}
int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"stack is empty"<<endl;
        return -1;
    }
}
};
int main(){
    Stack st(6);
    st.push(3);
    st.push(6);
    st.push(4);
    st.push(1);
    st.push(5);
    st.push(10);
    cout<<"top element is-->"<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<"top element is-->"<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"empty hai stack"<<endl;
    }
    else{
        cout<<"empty nahi hai stack"<<endl;
    }
    return 0;
}