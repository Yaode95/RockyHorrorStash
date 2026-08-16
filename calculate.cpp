#include <iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int subtract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int division(int a,int b){
    if(b!=0)
        return a/b;
    else
        return b/a;
}

int sqrt(double a){
    return sqrt(a);
}


int main(){
    int a=9,b=1;
    cout<<add(a,b);
    cout<<multiply(8,9);
    return 0;
}