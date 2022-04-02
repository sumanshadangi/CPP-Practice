#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int r){
    int size1=mid-l+1;
    int size2=r-mid;
    int arr1[size1];
    int arr2[size2];
    for(int i=0;i<size1;i++){
        arr1[i]=arr[l+i];
    }
    for(int j=0;j<size2;j++){
        arr2[j]=arr[mid+1+j];
    }
    int index1=0;
    int index2=0;
    int mergedIndex=l;
    while(index1<size1&&index2<size2){
       if(arr1[index1]<=arr2[index2]){
           arr[mergedIndex]=arr1[index1];
           index1++;
       }
       else{
           arr[mergedIndex]=arr2[index2];
           index2++;
       }
       mergedIndex++;
    }
    while(index1<size1){
        arr[mergedIndex]=arr1[index1];
        index1++;
        mergedIndex++;
    }
    while(index2<size2){
        arr[mergedIndex]=arr2[index2];
        index2++;
        mergedIndex++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(l>=r){
     return;
    }
    else{
    int mid=l+(r-l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={12, 11, 13, 5, 6, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"before:";
    printArr(arr,n);
    mergeSort(arr,0,n-1);
    cout<<"after:";
    printArr(arr,n);
    return 0;
}