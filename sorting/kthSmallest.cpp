#include<iostream>
using namespace std;
// 5,4,7,2,9,23
int piviot(int arr[],int l,int r){
    int pp=arr[l];
    int i=l;
    int j=r;
    while(i<j){
        while(arr[i]<=pp) i++;
        while(arr[j]>pp) j--;
        if(i<j){
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[j],arr[l]);
    return j;
}
int kthSmallest(int arr[],int l,int r,int k){
    if(k>0 && k<=r-l+1){
        int pos= piviot(arr,l,r);
        if (pos-l==k-1){
            return arr[pos];
        }
        else if(pos-l<k-1){
            return kthSmallest(arr,l,pos-1,k);
        }
        else{
            return kthSmallest(arr,pos,r,k-l+pos-1);
        }

    }

}
int main(){
    int arr[]={5,4,7,2,9,23};
    int k;
    cout<<"enter the kth element = " ;
    cin>>k;
    int r=sizeof(arr)/sizeof(arr[0]);
    int l=0;
    cout<<"your kth smallest number is =  "<<kthSmallest(arr,l,r-1,k)<<"\n";   
  

    
}