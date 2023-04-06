#include<iostream>
using namespace std;

int main(){
    int x , n , result =1 ;
    cout << "ENter num: ";
    cin >> x ;

    cout << "ENter n: ";
    cin >> n ;

    for (int i = 1 ; i< n+1; i++){
        result = result * x ;
    }
    cout << "result: " <<  result << endl;
}