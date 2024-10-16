#include <iostream>
using namespace std;

int main()
{
    char sam[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    for (int i = 0; i < sizeof(sam); i++)
    {
        cout<<int(sam[i])<<endl;
    }
    return 0;
}