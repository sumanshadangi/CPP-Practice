#include<bits/stdc++.h>
using namespace std;
void printUnion(int arr1[],int n,int arr2[],int m){
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    set<int>::iterator itr=s.begin();
    for(itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";
    }
}
void printIntersection(int arr1[],int n,int arr2[],int m){
    
}
int main(){
    int arr1[]={1,2,6,23,5};
    int arr2[]={2,56,24,23};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    printUnion(arr1,n,arr2,m);
}