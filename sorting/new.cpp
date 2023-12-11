#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x=233;
    int y=0;
    int i=0;
    while(x>=0){
        x=x%10;
        y=+(x*(pow(10,i)));
        i++;
    }

    cout<<y;
}