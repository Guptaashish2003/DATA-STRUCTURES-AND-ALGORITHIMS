#include<iostream>
#include<stack>
using namespace std;


void insertSortStack(stack<int> &st, int target){
    int size = st.size();//add for debug not necassary here
    int topEl = st.top();//add for debug not necassary here
    if(st.empty()){
        st.push(target);
        return;
    }
    if(st.top()>= target){
        st.push(target);
        return;
    }
    int topEle = st.top();
    st.pop();
    insertSortStack(st, target);
    st.push(topEle);
}
void sortStack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int target = st.top();
    st.pop();
    sortStack(st);
    insertSortStack(st,target);

}
int main() {
    stack<int>st;
    st.push(249);
    st.push(29);
    st.push(219);
    // st.push(2912);
    // st.push(2932);
    // sortStack(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
    return 0;
}