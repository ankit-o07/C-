#include<iostream>

using namespace std;
int main(){
    string str ;
    int v_cout = 0;
    int c_cout = 0;
    cout << "Enter a string: ";
    cin >> str;
    
    for (int i =0;str[i]!='\0';i++){
        if (str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i] == 'u'|| str[i] == 'A'||str[i] == 'E'|| str[i] == 'I'||str[i] == 'O'||str[i] == 'U'){
            v_cout +=1;
        }else{
            c_cout +=1;
        }

    }

    cout << "Number of v: "<< v_cout<< endl;
    cout << "Number of c: " << c_cout<<endl;
}