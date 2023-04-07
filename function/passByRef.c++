#include<iostream>

using namespace std;

int oneP(int* a){
    *a++;
    return *a;
}
int main(){
    int a = 1;
    cout << "a before " << a << endl;
    cout << "Add of a " << &a << endl;
    cout << "a in function " << oneP(&a) << endl;

    cout << "a After " << a << endl;

    return 0;
}