#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
};
node* createNode(int data){
    node* n= new node();
   n->data=data;
   n->next=NULL;
   return n;
}
void push(node** root,int data){
node* n=createNode(data);
n->next=*root;
*root=n;
cout<<n->data<<" was pushed"<<endl;
}
void pop(node** root){
node* temp=*root;
*root=(*root)->next;
cout<<temp->data<<" was popped"<<endl;
free(temp);
}
int peek(node** root){
    if((*root)!=NULL){
        return (*root)->data;
    }
    else return -1;
}
bool isEmpty(node** root){
    return !(*root);
}
int main(){
   node* root=NULL;
   push(&root,30);
   push(&root,10);
   push(&root,50);
   push(&root,90);
   pop(&root);
   pop(&root);
   if(isEmpty(&root)){
       cout<<"Empty"<<endl;
   }
   else cout<<"Not Empty"<<endl;
   cout<<"Top Element-->"<<peek(&root)<<endl;
    return 0;
}