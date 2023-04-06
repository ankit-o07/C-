#include<iostream>
using namespace std;

int main(){
    int num  ,temp =0, rev= 0;
    cout << "Enter a num: " ;
    cin >> num ;

    temp = num ;
   while(temp){
        int rem = temp % 10;
        rev = rev*10 +rem;
        // cout << "rev = " << rev << endl;
        temp = temp /10 ;
   }
    cout << "rev = "<< rev << endl ;

    if (num == rev){
        cout << num << " is palindorm";
    }else{
        cout << num << " is palindorm not";
    }

    
}