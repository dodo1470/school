#include <iostream>
#include <time.h>
using namespace std;

char lookup_grid[20][30];
char game_grid[20][30];
int rows, columns, mines;

void uncoverblank(int g_row, int g_col){
        for (int urow = g_row-1; urow <= g_row + 1; urow++){
            cout<< "reku\n";
            if(urow < 0 || urow > rows-1){}else{
            for (int ucol = g_col-1; ucol <= g_col + 1; ucol++){
                if(ucol < 0 || ucol > columns-1){}else{
                if (lookup_grid[urow][ucol] == '0' && game_grid[urow][ucol] == '#')
                {
                    game_grid[urow][ucol] = lookup_grid[urow][ucol];
                    uncoverblank(urow, ucol);
                }
                game_grid[urow][ucol] = lookup_grid[urow][ucol];
                }
            }
            }
        }
    return;
}

int main()
{
    srand(time(NULL));
    bool select_phase = 1, gen_phase = 0, game_phase = 0, lose = 0,  win = 0;
    while(select_phase)
    {
        bool nrows = 1, ncolumns = 1, nmines = 1;
        cout << "Enter the number of Rows up to 20: ";
        cin >> rows;
        cout << "Enter the number of Columns up to 30: ";
        cin >> columns;
        cout << "Enter the number of Mines: ";
        cin >> mines;
        if (rows < 1 || rows > 20)
        {
            cout<<"Enter a number of Rows within the constrains\n";
            nrows = 0;
        }
        if (columns < 1 || columns > 30)
        {
            cout<<"Enter a number of Columns within the constrains\n";
            ncolumns  = 0;
        }
        if (rows * columns < mines || mines < 1)
        {
            cout<< "Enter a number of mines that fits in the selected grid size\n";
            nmines = 0;
        }
        if (nrows && ncolumns && nmines)
        {
            select_phase = 0;
            gen_phase  = 1;
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
            for (int j = 0; j < columns; j++)
        {
            lookup_grid[i][j] = '0';
            game_grid[i][j] = '#';
        }
    }
    while (gen_phase)
    {
        for (int generated_mines = 0; generated_mines < mines;)
        {
            int random_col = rand() % columns;
            int random_row = rand() % rows;
            if (lookup_grid[random_row][random_col] != 'M')
            {
                generated_mines++;
                lookup_grid[random_row][random_col] = 'M';
                for (int mrow = random_row-1; mrow <= random_row+1; mrow++){
                    if(mrow < 0 || mrow > rows-1){
                    }else{
                    for (int mcol = random_col-1; mcol <= random_col+1; mcol++){
                        if(mcol < 0 || mcol > columns-1){
                        }else{
                        if (lookup_grid[mrow][mcol] != 'M'){
                            lookup_grid[mrow][mcol]++;
                        }
                        }
                    }
                    }
                    cout<< endl;
                }
            }
        }
        gen_phase = 0;
        game_phase = 1;
        /*// cheat sheet 
        for (int k = 0; k < rows; k++){for (int l = 0; l < columns; l++){cout<<lookup_grid[k][l];}cout<<endl;}
        */
    }

    while(game_phase)
    {
        char guess;
        int g_row, g_col;
        cout<<"  ";
        for (int grid = 0; grid < columns; grid++)
        {
            if (grid > 9){
                cout<<""<<grid;
            }else{
                cout<<" "<< grid;
            }
        }
        cout<<endl<<endl;
        for (int gi = 0; gi < rows; gi++)
        {
            if (gi>9){
                cout<<gi<<" ";
            }else
            {
                cout<<gi<<"  ";
            }
            for (int gj = 0; gj < columns; gj++)
            {
                cout<<game_grid[gi][gj]<<" ";
            }
            cout<<endl;
        } 
        cout <<"\nEnter 'Row number', 'Column number', Operator 'X'-to mark mine, 'O'-to uncover a space: \n";
        cin >> g_row >> g_col >> guess;
        game_grid[g_row][g_col] = guess;
        if(guess == 'X' || guess == 'x'){
            if(game_grid[g_row][g_col] == 'X'){
                game_grid[g_row][g_col] = '#';
            } else{
                game_grid[g_row][g_col] = 'X';
            }

        } else if (guess == 'O' || guess == 'o'){
            if(lookup_grid[g_row][g_col] == 'M')
            {
                lose = 1;
                break;
            } else if(lookup_grid[g_row][g_col] == '0')
            {
                uncoverblank(g_row, g_col);
            } else
            {
                game_grid[g_row][g_col] = lookup_grid[g_row][g_col];
            }
        }
        win = 1;
        for (int wrow = 0; wrow < rows; wrow++)
        {
            for (int wcol = 0; wcol < columns; wcol++)
            {
                if(game_grid[wrow][wcol] == '#' && lookup_grid[wrow][wcol] != 'M')
                {
                    win = 0;
                }
            }
        }
        if(win)
        {
            break;
        }
    }

    if(lose){
        cout<<"\n\n\n\nYou dead, bitch ass nigga!\n\n";
        for (int k = 0; k < rows; k++)
        {
            for (int l = 0; l < columns; l++)
            {
                cout<<lookup_grid[k][l];
            }
            cout<<endl;
        }
        cout<<"\nThe mines were placed like above.\n";
    } else if(win)
    {
        cout<<"\n\n\nCongratulations, You managed to de-mine the minefield!\n\n";
        for (int k = 0; k < rows; k++)
        {
            for (int l = 0; l < columns; l++)
            {
                cout<<lookup_grid[k][l];
            }
            cout<<endl;
        }
    }
    cout<<endl;
    return 0;
}