#include <iostream>
using namespace std;

int main()
{
    char sng[3] = {59, 93, 35};
    for (int i =0; i < sizeof(sng);i++)
    {
        cout<<sng[i]<<endl;
    }

    return 0;
}