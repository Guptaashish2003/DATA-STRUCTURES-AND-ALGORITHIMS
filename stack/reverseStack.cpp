#include<iostream>
#include<stack>
using namespace std;
void putAtBottom(stack<int>&st,int &target){
    int size = st.size();
    cout<<target<<endl;
    // cout<<st.top()<<" * ";
   

    if(st.empty()) {
        st.push(target);
        return;
    }
    int topEle = st.top();
    st.pop();
    putAtBottom(st,target);
    st.push(topEle);

}

void reverseStack(stack<int>& st){
    if(st.empty()){
        return;
    }
    int target = st.top();
    st.pop();
    reverseStack(st);
    int size = st.size();
    putAtBottom(st,target);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    // st.push(40);
    // st.push(50);
    // st.push(60);
    int top = st.top();
    reverseStack(st);
    while (!st.empty())
    {
        cout<<st.top()<<" #  ";
        st.pop();
    }
    
    return 0;


}