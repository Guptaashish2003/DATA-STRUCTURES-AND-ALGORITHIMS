#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;
    //add
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    //remove
    // st.pop();
    //check element on top
    cout<< "elment on top "<< st.top()<<endl;
    if(st.empty()){
        cout<<"stack is not empty size of stack "<<st.size()<<endl;
    }        
    else{
        cout<<"stack is empty"<<endl;
    }
    while (st.size()!=0)
    {
        cout<< st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    
    return 0;
}