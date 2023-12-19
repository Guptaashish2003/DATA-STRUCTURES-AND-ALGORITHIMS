#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
    string str = "ashishgupta";
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }
     while (s.size()!=0)
    {
        cout<< s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    
    return 0;
}