#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    double s = 0;
    double r = 0;
    for (int i = 0; i < a; i ++){
        cin >> b;
        s = s + b;
    }
    s = s * 100;
    //cout<< s/a<< endl;
    r = round (s / a);
    //cout << r << endl;
    cout << r / 100;
    if( int(r) % 100 == 0){
        cout << ".00";
    } else if (int(r) % 10 == 0){
        cout << "0";
    }
}