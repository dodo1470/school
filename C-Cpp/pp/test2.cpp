#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int sumL = 0, sumU = 0;
    int t;
    cin >> a>> b>> c;
    for (int i =0; i < a; i++)
    {
        cin >>t;
        if (t >= 0)
        {
            if (t < b)
            {
                sumU = sumU + t;
            }
        } else 
        {
            if (t > c)
            {
                sumL = sumL + t;
            }
            
        }
    }
    cout<< sumU <<" "<< sumL;


    return 0;
}