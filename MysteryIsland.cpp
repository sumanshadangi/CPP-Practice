#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
    cin>>n;
    string s;
    cin>>s;
    char ans[n],input[n];
    
    for(int k=0;k<n;k++){
        input[k]=s[k];
        ans[k]='a';
    }
    int i=(n-1)/2;
    ans[i]=input[0];
    for(int j=1;j<n;j++){
       if(n%2==0){
           if(j%2==0){
               ans[i-j]=input[j];
               i=i-j;
           }
           else{
               ans[i+j]=input[j];
               i=i+j;
           }
       }
       else{
           if(j%2==0){
               ans[i+j]=input[j];
               i=i+j;
           }
           else{
               ans[i-j]=input[j];
               i=i-j;
           }
       }
    }
    for(int k=0;k<n;k++){
        cout<<ans[k];
    }
    return 0;
}