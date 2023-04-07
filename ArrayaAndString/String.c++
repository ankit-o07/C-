#include<iostream>

using namespace std;

int main(){
    //dataType arrayName[arraySize];
    int x[10];
    x[0] = 1;
    int y[] = {1,2,3,4,5};
    for(int i = 0; i<10;i++){
        x[i] = i+1;
    }
    for(int i = 0; i<10;i++){
        cout << x[i] << endl;
    }

    



    return 0;
}