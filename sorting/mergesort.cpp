#include<iostream>
using namespace std;
void mergeArr(int arr[],int l,int mid,int r){
    int len1=mid-l+1;
    int len2=r-mid;
    int arr1[len1],arr2[len2];
    for(int i=0;i<len1;i++){
        arr1[i]=arr[l+i];
    }
    for(int i=0;i<len2;i++){
        arr2[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<len1 && j<len2){
        if(arr1[i]>arr2[j]){
        arr[l++]=arr2[j++];
        }
        else{
            arr[l++]=arr1[i++];
        }

    }
    while(i<len1){
        arr[l++]=arr1[i++];

    }
    while(j<len2){
        arr[l++]=arr2[j++];

    }
}
void mergeSort(int arr[],int l,int r){
    if(l>=r) return;
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    mergeArr(arr,l,mid,r);
}
int main(){
    int arr[]={6,5,4,3,2,1};
    int r=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,r-1);
    for(int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}