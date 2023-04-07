#include<iostream>

using namespace std;
void display(int m[]){
    cout << "Display marks: " << endl;

    for(int i= 0 ; i<5 ; i++){
        cout << m[i] << endl;
    }
}


int main(){
    int m[10] = {2,3,4,5,6} ;

    display(m);

    return 0;
}