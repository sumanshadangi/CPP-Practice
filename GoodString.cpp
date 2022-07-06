#include<bits/stdc++.h>
using namespace std;
vector<string> goodString(vector<string> s,int n){
vector<string> ans;
for(int i=0;i<n;i++){
    string a,b;
    a=s[i].substr(0,s[i].length()/2);
    s[i].length()%2==0?b=s[i].substr(s[i].length()/2,s[i].length()/2):b=s[i].substr(s[i].length()/2+1,s[i].length()/2);
    map<char, int> occur1;
     for(int j=0;j<a.length();j++)
     {
      occur1[a[j]]++;
     }
     map<char, int> occur2;
     for(int k=0;k<b.length();k++)
     {
       occur2[b[k]]++;
     }    
     if(occur1 == occur2)
        ans.push_back("YES");
     else
        ans.push_back("NO");
}
return ans;
}
int main(){
    int n;
    cin>>n;
    vector<string> v;
    vector<string> ans;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    ans=goodString(v,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}