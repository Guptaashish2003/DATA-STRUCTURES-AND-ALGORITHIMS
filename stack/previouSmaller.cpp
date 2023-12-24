#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevSmaller(vector<int>&v){
    stack<int>st;
    vector<int> ans(v.size());
    st.push(-1);
    for (int i = 0; i < v.size(); i++)
    {
        int curr = v[i];
        while (st.top()>=curr)
        {
            st.pop();
        }
        ans[i]= st.top();
        st.push(curr);      
    }
    return ans;
    
}


int main() {
    vector<int>v = {2,1,4,3};//{-1,-1,1,1}
    vector<int> result = prevSmaller(v);
    for (int i = 0; i < 4; i++)
    {
        cout<<result[i]<<" ";
    }
    
    return 0;
}