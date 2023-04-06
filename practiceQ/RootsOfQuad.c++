#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c ,D;
    cout << "Enter value of a:" ;
    cin >> a ;
    cout << "Enter value of b:" ;
    cin >> b ;
    cout << "Enter value of c:" ;
    cin >> c ;
    D = ((b*b) - (4*a*c));
    
    if (D<0){
        cout << "Imaginary root " << endl;
    }
    else if(D>0){
        cout << "Two Diff root" << endl ; 
        cout << "First = " << -(b+sqrt(D))/2*a << endl ;
        cout << "Second = " << -(b-sqrt(D))/2*a << endl ;
    }else{
        cout << "Only one root" << endl ; 
        cout << "First = " << -b/2*a << endl ;
    }


}