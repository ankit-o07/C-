#include<iostream>

using namespace std;

int main(){
    int x [3][3] ;
    int count = 1;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            x[i][j] =  {count} ;
            count = count+1;



        }
    }
    



    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            // cout << "x int[" <<i<<"]"<<"["<<j<<"]" << "="<<x[i][j] << endl ;
            cout << x[i][j] << "  ";



        }
        cout << endl;
        
    }

    int test[2][3][2] = {
                            {
                                {1, 2},
                                {3, 4},
                                {5, 6}
                            }, 
                            {
                                {7, 8}, 
                                {9, 10}, 
                                {11, 12}
                            }
                        };
    cout << endl;
    cout << endl;
    // Displaying the values with proper index.
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << test[i][j][k] << "  ";
            }
            cout << endl;
        }
        // cout << endl;
    }


}
