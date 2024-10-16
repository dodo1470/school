#include <iostream>
using namespace std;


int pow(int a, int b)
{
    int res=1;
    for (int i = 0; i < b; i++)
    {
        res = res * a;
    }
    return res;
}


int main(){
    unsigned char z = 0;
    unsigned char a = 128;
    z = z | 128;
    cout << !!((z<<2) & 0x80);
        cout<<"tak";
    for (int j = 0; j < 8; j++)
    {
        printf("%d", !!((z<<j) & 0x80));
    }
    return 0;
}