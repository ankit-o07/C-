#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter number";
    cin >> n;
    int n_1 = 0;
    int n_2 = 1;
    int temp ;
    cout  << n_1 << endl;
    for (int i = 1; i<n;i++){
        cout <<  n_2 << endl;
        temp = n_1;
        n_1 = n_2;
        n_2 = temp+n_2;
    }
}