#include<iostream>
using namespace std;
int maxInArr(int arr[],int l){
    int maxx=0;
    for(int i=0;i<5;i++){
        if(maxx<arr[i]){
            maxx=arr[i];
        }
    }
    return maxx;
}
void countSort(int arr[],int l){
    // 2,   3,  1,  5,  6,  1,  7
    int maxx= maxInArr(arr,l);
    int tempArr[maxx+1]={0};
    for(int i=0;i<l;i++){
        tempArr[arr[i]]++;
    }
    for(int i =1;i<=maxx;i++){
        tempArr[i]+=tempArr[i-1];
    }
    int ans[l];
    for(int i=l-1;i>=0;i--){
        ans[--tempArr[arr[i]]]=arr[i];
    }
    for(int j=0;j<l;j++){
        arr[j]=ans[j];
    }

}
int main(){
    int arr[]={5,4,3,2,3,2};
    int l =sizeof(arr)/sizeof(arr[0]);
    countSort(arr,l);
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}