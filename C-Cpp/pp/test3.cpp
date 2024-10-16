#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    double s = 0;
    cin >> a;
    int num[a];
    for (int i = 0; i < a; i++)
    {
        cin >> num[i];
        s = s + num[i];
    }
    s = s / a;
    //cout<<s;
    double var = 0;
    for (int j = 0; j < a; j++)
    {
        var = var + ((num[j]-s)*(num[j]-s));
    }
    var = var / a;
    printf("%.2lf",var);
    return 0;
}