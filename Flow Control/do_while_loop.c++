#include <iostream>
using namespace std ;
int main(){
    int n = 10;
    int i = 0;
    while (i<n+1){
        cout << i << endl;
        i++;
    }
    

    int num = 0;
    int sum = 0;
    do{
        sum +=num ;
        cout << "Enter a number ";
        cin >> num;
        
            
        
    }while (num >=0);
    cout << "the sum = " << sum ;
    
}