#include <iostream>
using namespace std;

int pow(int p, int w)
{
    int res = 1;
    for (int potega = 0; potega < w; potega++)
    {
        res = res * p;
    }
    return res;
}

int main()
{
    char n1[10], n2[10], o;
    int l1[10], l2[10];
    int l1len = 0, l2len = 0;
    cin >> n1 >> o >> n2;

    for (int i = 0; i < sizeof(n1); i++)
    {
        l1[i] = 0;
        l2[i] = 0;
        if (n1[i] == 'A')
        {
            l1[i] = 10;
            l1len++;
        }else if (n1[i] == 'B')
        {
            l1[i] = 11;
            l1len++;
        }else if (n1[i] == 'C')
        {
            l1[i] = 12;
            l1len++;
        }else if(n1[i] == '0' || n1[i] == '1' || n1[i] == '2' || n1[i] == '3' || n1[i] == '4' || n1[i] == '5' || n1[i] == '6' || n1[i] == '7' || n1[i] == '8' || n1[i] == '9')
        {
            l1[i] = int(n1[i])-48;
            l1len++;
        }

        if (n2[i] == 'A')
        {
            l2[i] = 10;
            l2len++;
        }else if (n2[i] == 'B')
        {
            l2[i] = 11;
            l2len++;
        }else if (n2[i] == 'C')
        {
            l2[i] = 12;
            l2len++;
        }else if (n2[i] == '0' || n2[i] == '1' || n2[i] == '2' || n2[i] == '3' || n2[i] == '4' || n2[i] == '5' || n2[i] == '6' || n2[i] == '7' || n2[i] == '8' || n2[i] == '9')
        {
            l2[i] = int(n2[i])-48;
            l2len++;
        }

        //cout<<l1[i]<<" ";
    }
    for (int j = 0; j < sizeof(n2); j++)
    {
        //cout<<l2[j]<<" ";
    }
    int mod = 0;
    int d1 = 0, d2 = 0;
    for (int decl1 = l1len - 1; decl1 >= 0; decl1--)
    {
        d1 = d1 + (l1[decl1] * pow(13, mod));
        mod++;
    }
    mod = 0;
    for (int decl2 = l2len - 1; decl2 >= 0; decl2--)
    {
        d2 = d2 + (l2[decl2] * pow(13, mod));
        mod++;
    }
    cout<< d1 + d2;
    return 0;
}