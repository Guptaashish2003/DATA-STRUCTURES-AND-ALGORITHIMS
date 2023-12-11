#include<iostream>
#include<vector>
using namespace std;
int firstOccurrence(vector<int>input,int target){
    int lo=0;
    int ans=-1;
    int hi=input.size()-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(target==input[mid]){
            ans=mid;
            hi=mid-1;
        }
        else if (input[mid]>target)
        {
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;    
}
int main(){
    int input[]={2,4,4,6,6,6,6,9,9,9,9,10,10,19};
    int target=9;
    int lo=0;
    int ans=-1;
    int hi=13-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(target==input[mid]){
            ans=mid;
            hi=mid-1;
        }
        else if (input[mid]>target)
        {
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}