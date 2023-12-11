#include<iostream>
#include<vector>
using namespace std;
// 7,6,5,1,2,3,4
int targetSortedRotatedArray(vector<int>v,int target){
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==target) return mid;
        if(v[lo]<=v[mid]){
            if(v[mid]>=target && v[lo]>=target){
                hi=mid-1;
            }
            else lo=mid+1;
        }
        else{
            if(v[mid]<=target && target<v[hi]){
                lo=mid+1;
            }
            else hi=mid-1;
        }

    }
    return -1;
}
int main(){
    vector<int>v={5,6,7,1,2,3,4};
    int target=7;
    cout<<"enter target ";
    cin>>target;
    cout<<targetSortedRotatedArray(v,target)<<"\n";
}