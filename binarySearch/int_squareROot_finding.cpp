#include<iostream>
using namespace std;
int squareRoot(int num){//num =16
    int lo=1; //2 
    int hi  = num; //16 -> 6
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;//7  --> 3 --> 4
        if(mid*mid<=num){           //49<=16  ---> 9<=16  -->16<=16
            ans=mid;  // 9
            lo=mid+1;        //2  
        }
        else{
            hi=mid-1; //hi=6
        }
    }
    return ans;             // finally ans = 4
}
int main(){
    int num;
    cout<<"enter the valur that you need to integer squareroot value = ";
    cin>>num;
    cout<<squareRoot(num)<<"\n";
}

//output is 4