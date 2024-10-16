#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    int ps = 0, ns = 0;
    for (int i = 0; i < a; i++){
        cin >> b;
        if ( b > 0){
            ps = ps + b;
        }else{
            ns = ns + b;
        }
    }
    cout << ps << " " << ns;
    return 0;
}