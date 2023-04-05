#include<iostream>

using namespace std;

int main(){
    //------------- Implicit Type Conversion---------------------

    // int num_int = 9;

    // double num_double ;

    // num_double = num_int;

    // cout << "num_int = " << num_int << endl;
    // cout << "num_double = " << num_double << endl;


    int num_int ;

    double num_double = 9.99;

    num_int = num_double;

    cout << "num_double = " << num_double << endl;
    cout << "num_int = " << num_int << endl;
    // ------------------------------c-type Casting----------------------- 

    int num1_int = 26;
    int num1_double ;
    int num2_double ;
    num1_double = (double)num1_int;

    num2_double = double(num1_int);
    cout << num1_double << endl;
    cout << num2_double << endl;




    return 0;
}