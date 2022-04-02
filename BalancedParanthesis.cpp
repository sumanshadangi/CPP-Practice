#include<bits/stdc++.h>
using namespace std;
bool checkSameBracket(char c1,char c2){
    if(c1=='{'&&c2=='}')
    return true;
    else if(c1=='['&&c2==']')
    return true;
    else if(c1=='('&&c2==')')
    return true;
    else return false;
}
bool checkBalancedParanthesis(string expr){
    stack<char> s;
    for(int i=0;i<expr.length();i++){
        if(expr[i]=='{'||expr[i]=='('||expr[i]=='['){
            s.push(expr[i]);
        }
        else if(expr[i]=='}'||expr[i]==')'||expr[i]==']'){
            if(!s.empty()&&checkSameBracket(s.top(),expr[i])){
                s.pop();
                continue;
            }
            else{
                return false;
                break;
            }
        }
    }
   if(s.empty()){
       return true;
   }
   else{
       return false;
   }
}
int main(){
    string expr = "{({]})}[]";
    if(checkBalancedParanthesis(expr)){
        cout<<"Balanced";
    }
    else
       cout<<"Not Balanced";
}