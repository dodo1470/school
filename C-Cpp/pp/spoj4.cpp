#include <iostream>
using namespace std;

int main(){
    bool a = true;
    int b;
    while (a){
        cin >>b;
        if (b == 42){
            a = false;
        }
        if (b != 42){
            cout << b << endl;
        }
    }
    return 0;
}