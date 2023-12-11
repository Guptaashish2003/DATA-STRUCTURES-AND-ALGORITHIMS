#include<iostream>
using namespace std;
void countSort(int arr[],int s,int pos){
    int tempArr[10]={0};
    for(int i=0;i<s;i++){
        tempArr[(arr[i]/pos)%10]++;
    }
    for(int i=1 ;i<10;i++){
        tempArr[i]+=tempArr[i-1];

    }
    int ans[s];
    for(int i=s-1;i>=0;i--){
        ans[--tempArr[(arr[i]/pos)%10]]=arr[i];
    }
    for(int i=0;i<s;i++){
        arr[i]=ans[i];
    }

}
int maxInArr(int arr[],int s){
   int maxx=0;
    for(int i=0;i<5;i++){
        if(maxx<arr[i]){
            maxx=arr[i];
        }
    }
    return maxx;
}
void radixSort(int arr[], int s){
    int maxx= maxInArr(arr,s);
    for(int pos=1;maxx/pos>0;pos*=10){
        countSort(arr,s,pos);
    }
}
int main(){
    int arr[]={170,45,90,902,4};
    int s=sizeof(arr)/sizeof(arr[0]);
    radixSort(arr, s);
    for (int  i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }
}