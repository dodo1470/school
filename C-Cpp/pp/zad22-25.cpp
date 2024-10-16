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


int main()
{
    unsigned char z = 0;
    int roz, winner;
    char inp;
    cin >>roz;
    bool game = 1;
    int pr[4] = {0, 0, 0, 0};
    int pos[4] = {0, 0, 0, 0};
    bool cm[4] = {0, 0, 0, 0};
    int player = 0;
    int roll, mod = 2;
    while(game)
    {
        if (player > 3) player = 0;
        cin>>inp;
        if (inp == 'P')
        {
            mod = 2;
            for (int i = 3; i >= 0; i--)
            {
                if (cm[i])
                {
                    z = z | mod;
                } /*else if (!cm[i])
                { 
                    if ((z & pow(2, mod-1)) > 0){
                        z = z ^ mod;
                    } else{
                        //huj
                    }
                }*/
                mod = mod * 4;

            }
            for(int i = 0; i < 4; i++)
            {
                cout<<pos[i]<<" ";
            } 
            for (int j = 0; j < 8; j++)
            {
                printf("%d", !!((z<<j) & 0x80));
            }
            cout<<endl;
        }
        else
        {
            cin >> roll;
            if(cm[player])
            {
                pos[player] += roll;
            }else if(pr[player == 1] && roll == 6)
            {
                cm[player] = 1;
            } 
            pr[player] = roll;
            player++;
        }


        for (int j = 0; j < 4; j++)
        {
            if(pos[j] >= roz)
            {
                game = 0;
                winner = j + 1;
            }
        }
    }
    cout<<"END OF GAME";
    return 0;
}