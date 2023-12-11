#include<iostream>
#include<vector>
using namespace std;
int findMinimumINArray(vector<int>v){
    if(v.size()==1) return v[0];
    int lo=0,hi=v.size()-1;
    if(v[lo]<v[hi]) return v[0];
    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]>v[mid+1]) return mid+1;
        if(v[mid]<v[mid-1]) return mid;
        if (v[lo] > v[mid])
        {
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }

    }
}
int main(){
    vector<int>v={7,6,5,4,1,2,3};
    cout<<findMinimumINArray(v)<<"\n";
    // cout<mid<<"\n";
    

}