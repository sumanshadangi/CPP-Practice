#include <bits/stdc++.h>
using namespace std;
vector<int> calculateStock(int prices[],int n){
vector<int> ans;
stack<pair<int,int>> s;
for(int i=0;i<n;i++){
    int data=1;
    while(!s.empty()&&s.top().first<=prices[i]){
        data+=s.top().second;
        s.pop();
    }
    s.push({prices[i],data});
    ans.push_back(data);
}
return ans;
}
int main(){
    int prices[] = { 10, 4, 5, 90, 120, 80 };
    int n=sizeof(prices)/sizeof(prices[0]);
    vector<int> s=calculateStock(prices,n);
    for(auto i:s){
        cout<<i<<" ";
    }
}