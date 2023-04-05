#include<iostream>
using namespace std;

int main(){
    int num1 = 3;
    if (num1){
        cout<< num1 << endl;
    }else{
        cout<< "I am zero" << endl;
    }

    int num2 ;
    cout << "Enter a number ";
    cin >> num2;
    if (num2 >0){
        cout << "I am positive" << endl;
    }else if(num2 ==0){
        cout << "I am less 0" << endl;
    }else {
        cout << "I am negative" << endl;
    }


    int num3 ;
    cout << "Enter a number3 ";
    cin >> num3;
    if(num3 !=0){
        if(num3 > 0){
            cout<< "Number is positive" << endl;
        }else {
            cout << "Number  is negative" << endl;
        }
    }else{
        cout<< "Number is  zero" << endl;
    }

    int num4 ;
    cout << "Enter number4 ";
    cin >> num4;
    string result  = (num4>0) ? "positive" : "Less than and equal to 0";
    cout << result << endl;
}
