#include<iostream>
using namespace std ;

int main(){
    int num1 , num2, max ;
    cout <<"Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    max = (num1>num2) ? num1 : num2;

    do{
        if (max % num1== 0 && max % num2 == 0){
            cout << "LCM is: " << max ;
            break;
        }else{
            ++max ;
        }

    }while (true);
    
    

}