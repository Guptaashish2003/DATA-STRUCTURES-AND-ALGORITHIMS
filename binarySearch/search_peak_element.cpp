#include<vector>
#include<iostream>
using namespace std;
int searchMountain(vector<int>v){
    int lo=0;
    int hi=v.size()-1;
    int ans=-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(mid==0){
            if (v[mid]>v[mid+1]){
                return mid;
            }else return 1;

        }
        else if (mid==hi)
        {
            if(v[mid]>v[mid+1]){
                return hi;
            }else return hi-1;       
        }
        else{
            if(v[mid]>v[mid+1]&& v[mid]>v[mid-1]){
                return mid;
            }else if(v[mid]>v[mid+1]){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        
    }
    return ans;
    
}
int main(){
    vector<int>arr={3,4,5,1,9,10,2,6,8,2};
    cout<<searchMountain(arr)<<"\n";
    
}