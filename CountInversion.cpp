#include<bits/stdc++.h>
using namespace std;
int inv=0;
void merge(int arr[],int l,int r,int mid){
    
 int n1=mid-l+1;
 int n2=r-mid;
 int arr1[n1];
 int arr2[n2];
 for(int i=0;i<n1;i++){
     arr1[i]=arr[l+i];
 }
 for(int i=0;i<n2;i++){
     arr2[i]=arr[mid+i+1];
 }
 int i1=0,i2=0,k=l;
 while(i1<n1&&i2<n2){
     if(arr1[i1]<=arr2[i2]){
         arr[k]=arr1[i1];
         i1++;
     }
     else if(arr1[i1]>arr2[i2]){
         arr[k]=arr2[i2];
         i2++;
         inv=inv+n1-i1;
         cout<<inv;
     }
     k++;
 }
 while(i1<n1){
     arr[k]=arr1[i1];
     i1++;
     k++;
 }
 while(i2<n2){
    arr[k]=arr1[i2];
     i2++;
     k++;
 }
 
}
void mergeSort(int arr[],int l,int r){
   
if(l<r){
    int mid=l+(r-l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,r,mid);
}
}
int InversionCount(int arr[],int l,int r){
   mergeSort(arr,l,r);
   return inv;
}
int main(){
    int arr[] = {1,20,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=InversionCount(arr,0,n-1);
    cout<<"Inversion Count: "<<ans;
    return 0;
}