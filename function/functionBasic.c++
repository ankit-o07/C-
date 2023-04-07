#include<iostream>
using namespace std;

void greet(){
    cout<< "Hello World"<< endl;
}

int num(int x){
    cout << x << endl;
}
int main(){
    greet();
    num(9);
}