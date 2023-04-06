#include<iostream>
using namespace std;

int main(){
    int num1 , num2, num3 ;
    cout << "Enter a num1: ";
    cin >> num1 ;
    cout << "Enter a num2:";
    cin >> num2 ;
    cout << "Enter a num3";
    cin >> num3 ;


    if(num1>num3 && num1>num2){
        cout << num1;
    }else{
        if(num2>num3){
            cout << num2;
        }else{
            cout << num3;
        }
    }
}