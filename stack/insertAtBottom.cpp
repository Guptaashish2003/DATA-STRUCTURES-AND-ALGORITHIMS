#include<iostream>
#include<stack>
using namespace std;

void putAtBottom(stack<int>&st,int &target){
    if(st.empty()){
        st.push(target);
        return;
    }
    int topEle= st.top();
    st.pop();
    putAtBottom(st,target);
    st.push(topEle);
}
void insertAtBottom(stack<int>&st ){
     if(st.empty()){

        cout<<"no element present in stack ig stack underflow"<<endl;
        return;
    }
    int target = st.top();
    putAtBottom(st,target);

}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    insertAtBottom(st);

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    
    return 0;
}