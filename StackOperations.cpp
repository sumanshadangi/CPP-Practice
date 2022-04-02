#include<bits/stdc++.h>
using namespace std;

class stacknode{
    public:
    int data;
    stacknode* next;
};

stacknode* createnode(int data){
    stacknode* node= new stacknode();
    node->data=data;
    node->next=NULL;
    return node;
}
void push(stacknode** root,int data){
    stacknode* node=createnode(data);
    node->next=*root;
    *root=node;
    cout<<data<<" was pushed\n";
}
int isEmpty(stacknode** root){
    return !(*root);
}
int pop(stacknode** root){
    stacknode* temp=*root;
    *root=(*root)->next;
    int popped=temp->data;
    free(temp);
    return popped;
}
int peek(stacknode** root){
    return (*root)->data;
}
int main(){
    stacknode* root = NULL;
 
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
 
    cout << pop(&root) << " popped from stack\n";
 
    cout << "Top element is " << peek(&root) << endl;
     
    cout<<"Elements present in stack : ";
     //print all elements in stack :
    while(!isEmpty(&root))
    {
        // print top element in stack
        cout<<peek(&root)<<" ";
        // remove top element in stack
        pop(&root);
    }
 
    return 0;
}