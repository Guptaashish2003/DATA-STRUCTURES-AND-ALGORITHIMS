#include<vector>
#include<iostream>
using namespace std;
int mountainArr(vector<int>v){
    int lo=0;
    int hi=v.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]>v[mid-1]){
            ans=mid;
            lo=mid+1;
            
        }
        else{
            hi=mid-1;
        }
    }
        return ans;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,3,2,0};
    cout<<mountainArr(arr);
}