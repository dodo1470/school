#include <iostream>
using namespace std;

int main()
{
    char sng[5] = {7, 9, 10, 13, 32};
    for (int i =0; i < sizeof(sng);i++)
    {
        cout<<sng[i]<<"."<<endl;
    }



    return 0;
}