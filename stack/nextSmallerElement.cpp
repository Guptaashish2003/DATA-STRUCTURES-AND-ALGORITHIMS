#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmaller(vector<int> &v){
    vector<int>ans(v.size());
    stack<int> st;
    st.push(-1);
    for (int  i = v.size()-1; i >= 0; i--)    
    {
        int curr = v[i];
        while (st.top()>= curr)
        {
            st.pop();
        }
        
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

int main() {
    vector<int>v = {2,1,4,3};//{1,-1,}
    vector<int> result = nextSmaller(v);
    
    
    return 0;
}