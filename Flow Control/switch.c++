#include<iostream>
using namespace std;

int main(){
    int num1 , num2 ;
    char op;
    cout << "ENetr num1";
    cin >> num1 ;

    cout << "ENetr num2";
    cin >> num2 ;

    cout << "Enter oprator (+,-,*,/)";
    cin >> op;

    switch (op){
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;        
    default:
        cout << "you enter wrong op";
        break;
    }
}