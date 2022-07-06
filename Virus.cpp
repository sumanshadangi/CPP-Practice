#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> arr;
    for(auto& x : arr)
    if(!(std::cin>>x))
      throw std::runtime_error("failed");
    vector<string> arr2;
    int count=n;
    vector<string> temp;
    for(int i=0;i<n-1;i++){
        
        for(int k=0;k<n;k++){
        if(arr[i]!=arr2[k]){
            temp.push_back(arr[i]+arr2[k]);
            count++;
        }
        }

    }
    cout<<temp[10];
    return 0;
}