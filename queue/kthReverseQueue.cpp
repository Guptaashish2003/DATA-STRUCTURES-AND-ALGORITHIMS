#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseKth(queue<int>&q,int k){
    if(k<=0) return;
    stack<int> st;
    int n = q.size();
    int count = 0;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        st.push(temp);
        count++;
        if(count==k) break;
    }
    count = 0;
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        q.push(temp);
        count ++;
    }
    count = 0;
    while(!q.empty() && n-k!=0){
        int temp = q.front();
        q.pop();
        q.push(temp);

        count++;
        if(count == n-k) break;
    }
    
}

int main() {
    queue<int>q;   
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverseKth(q,0);
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;    
    return 0;
}