#include <iostream>
using namespace std;

long long int pow(long long int a)
{
    return a * a;
}

int main()
{
    int a;
    long long int ld;
    cin >> a; 
    long long int pos[a][2];
    for (int i = 0; i < a; i++)
    {
        cin >> pos[i][0];
        cin >> pos[i][1];
       // cout<<"aaaaaa"<<endl;

    }
    int j = 0;
    //cout<<j<<endl;
    //cout << pos[0][0];
    ld = pow(pos[0][0] - pos[1][0]) + pow(pos[0][1] - pos[1][1]);
    //cout<<ld;
    while(j < a - 1)
    {
        for (int k = j + 1; k < a; k++)
        {
            if (pow(pos[j][0] - pos[k][0]) + pow(pos[j][1] - pos[k][1]) < ld)
            {
                ld = pow(pos[j][0] - pos[k][0]) + pow(pos[j][1] - pos[k][1]);
            }
        }
        j++;
        //cout<<ld<<endl;
    }

    cout<<ld;
    return 0;
} 
