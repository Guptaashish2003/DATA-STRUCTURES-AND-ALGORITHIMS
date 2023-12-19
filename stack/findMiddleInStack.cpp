#include<iostream>
#include<stack>
using namespace std;

void printMidStack(stack<int>&st, int &stackSize){
    if(st.size()==0){

        cout<<"no element present in stack ig stack underflow"<<endl;
    }
    if(stackSize/2+1 == st.size()){
        cout<<"your middle stack is "<<st.top()<<endl;
        return;
    }
    int temp = st.top();
    st.pop();

    printMidStack(st,stackSize);
    st.push(temp);
}

int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(140);
    st.push(1140);
    st.push(11140);
    st.push(5110);
    st.push(601);
    int stackSize = st.size();
    printMidStack(st,stackSize);
    
    return 0;
}