#include<iostream>
using namespace std;
int main(){
int arr[]={5,4,3,2,3,2};    
    int maxx=0;
    for(int i=0;i<5;i++){
        if(maxx<arr[i]){
            maxx=arr[i];
        }
    }
    cout<<maxx<<" \n";
}