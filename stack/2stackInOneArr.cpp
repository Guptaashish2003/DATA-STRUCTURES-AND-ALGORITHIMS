#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if(top2 - top1 == 1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]= data;
        }

    }
    void pop1()
    {
        if(top1==-1){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top1--;
        }

    }
    void push2(int data){
        if(top2 - top1 == 1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]=data;

        }

    }
    void pop2(){
        if(top2==size){
            cout<<"Stack Underflow"<<endl;
        }
        else{

        top2++;
        }
    }

};

int main() {
    Stack st(29);
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(210);
    st.push1(220);
    st.push1(230);
    st.push1(240);
    st.push1(250);
    st.push1(260);
    st.push1(40);
    st.push1(210);
    st.push1(220);
    st.push1(230);
    st.push2(340);
    st.push2(350);
    st.push2(360);
    st.push1(50);
    st.push1(10);
    st.push2(120);
    st.push2(130);
    st.push2(140);
    st.push2(150);
    st.push2(160);
    st.push2(110);
    st.push2(120);
    st.push2(130);
    st.push2(140);
    st.push2(150);
    st.push2(160);
    
    
    return 0;
}