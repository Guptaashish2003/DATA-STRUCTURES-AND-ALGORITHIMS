#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    Queue(int size){// getting ready a vector to perform valid tasks
        this->size = size;
        arr = new int[size];
        rear = 0;
        front = 0;
    }
    void push(int data){
        if(front == size){
            cout<<"queue if full "<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }
    void pop(){
        if(front == rear){
            cout<<"queue if Empty "<<endl;
        }
        else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront(){
        if(front == rear){
            cout<<"queue if Empty "<<endl;
        }
        else{
            return arr[front];
        }
    }
    int getRear(){
        if(front == rear){
            cout<<"queue if Empty "<<endl;
        }
        else{
            return arr[rear];
        }
    }
    int getSize(){
       
            return rear - front;
        
    }
    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }


};
int main() {
    Queue q(10);    
    q.push(15);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.getFront()<<endl;
    cout<<"size : "<<q.getSize()<<endl;
    cout<<q.getFront()<<endl;
     q.pop();
    cout<<q.getFront()<<endl;

    
    return 0;
}