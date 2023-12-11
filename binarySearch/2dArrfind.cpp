#include<iostream>
#include<vector>
using namespace std;
int targetInMatrix(vector<vector<int>>v,int target){
    int n=v.size(), m=v[0].size() , lo=0 , hi=n*m-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        int x=mid/m,y=mid%m;
        if(v[x][y]==target){

            return true;
        }else if (v[x][y]<target)
        {
            lo=mid+1;
        }else{
            hi=mid-1;
        }
        
    }
    return false;
    
}
int main(){
    vector<vector<int>>arr={{1,4,6},{7,8,10},{11,15,18}};
    int target;
    cout<<"enter the target value = ";
    cin>>target;
    cout<<targetInMatrix(arr,target)<<"\n";

}