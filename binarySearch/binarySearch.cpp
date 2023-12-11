#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>input,int target,int lo, int hi){
   
    while (lo<=hi)
    {        
        int mid=(hi-lo)/2;
        if(target==input[mid]){
            return mid;
        }
        else if(target>input[mid]){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return -1;
}
int binarySearchRecursive(vector<int>input,int target,int lo,int hi){
    if(lo>hi) return -1;
    int mid=(hi+lo)/2;
    if(target==input[mid]) return mid;
    if(target>input[mid]) return binarySearchRecursive(input,target,mid+1,hi);
    else return binarySearchRecursive(input,target,lo,mid-1);  
}
int main(){
    int size,target;
    cout<<"enter the size of the array = ";
    cin>>size;
    vector<int>input;
    for(int i =0; i<size;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<"enter the target";
    cin>>target;
    int hi=input.size()-1;
    int lo=0;
    cout<<binarySearch(input,target,lo, hi)<<"\n";
    cout<<binarySearchRecursive(input,target,lo,hi)<<"\n";

}