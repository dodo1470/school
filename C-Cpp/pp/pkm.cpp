#include <iostream>
 #include <time.h>
  #include <stdlib.h>
using namespace std;
int main(){
    int s = 1; /*2- won, 3 -lost*/
    string a; /*0 - norzyce, 1 - papier, 2 - kamień*/
    srand (time(NULL));
    while (s == 1){
    int bot = rand()%3;
    cout<< "wybierz, 'papier', 'kamien', 'norzyce'"<< endl;
    cin >> a;
    switch(bot){
        case 1:
            if (a == "kamien"){
                s = 2;
                break;
            } else if (a == "papier"){
                s = 3;
            }
        case 2:
            if (a == "norzyce"){
                s = 2;
                break;
            } else if (a == "kamien"){
                s = 3;
            }
        case 3:
            if (a == "papier"){
                s = 2;
                break;
            } else if (a == "norzyce"){
                s = 3;
            }
    }
    switch(s){
        case 1:
            cout<< "Remis Kurwa, Jeszce raz \n";
            break;
        case 2:
            cout<<"Wygrałeś kurwa\n";
            break;
        case 3:
            cout<<"Przegrałeś kurwo\n";
            break;
    }
    }
    return 0;
}