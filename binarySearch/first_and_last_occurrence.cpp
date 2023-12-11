#include<iostream>
#include<vector>
using namespace std;
int upperBound(vector<int>v,int target){
    int lo=0;
    int hi=v.size()-1;
    int temp=-1;
    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]<=target){
            lo=mid+1;
            if(v[mid]==target){
            temp=mid;
            }
        }
        else{
           hi=mid-1;
        }
    }
    return temp;
}
int lowerBound(vector<int>v,int target){
    int lo=0;
    int hi=v.size()-1;
    int temp=-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        // if(target==v[mid]){
        //     temp=mid;
        //     hi=mid-1;
        // }
        if (v[mid]>=target)
        {
            hi=mid-1;
            if(target==v[mid]){
                temp=mid;
            }
        }
        else{
            lo=mid+1;
        }
    }
    return temp;
}
int main(){
    vector<int>v={2,4,4,5,6,6,6,6,9,9,9,9,10,10,19};
    int lo=0;
    int target=9;
    int ans[]={lowerBound(v,target),upperBound(v,target)};
    cout<<ans[0]<<" "<<ans[1]<<"\n";
    
}