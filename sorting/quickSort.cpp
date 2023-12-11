#include<iostream>
using namespace std;
int piviot(int arr[],int l , int r){          //{   6     5      4      3      2       1   }
    int pivp=arr[l];
    int i=l;
    int j=r;
    while(i<j)
    {
        while(arr[i]<=pivp) i++;
        while(arr[j]>pivp) j--;
        if(i<j){
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[j],arr[l]);
    return j;
}
void quickSort(int arr[],int l,int r){
    if(l<r){
    int pv=piviot(arr,l,r);
    quickSort(arr,l,pv-1);
    quickSort(arr,pv+1,r);
    }

}
int main(){
    int arr[]={5,4,7,2,9,23};
    int r=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,r-1);
    for(int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }
}