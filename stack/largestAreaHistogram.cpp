#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
    vector<int>ans = {2,1,5,6,2,3};
    int res=0;
    for(int i = 0 ; i<6;i++){
    int curr=0;
        for (int j = 0; j < 6; j++)
        {
            if(ans[i]>=ans[j]){
                curr +=2*ans[i];

            }

        }
        res = max(curr,res);
        
    }
    cout<<res<<" "<<endl;
    
    return 0;
}