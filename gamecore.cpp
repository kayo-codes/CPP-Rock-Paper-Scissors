#include<iostream>
#include "text.h"

using namespace std;
int random_number();//returns a random number to randomize computer's move
void pc_choice(int);//prints the computers choice in every round
bool player_wins(int, int);// check if player wins or looses in every round

void game_core(int &count_p, int &count_c)// the main game starts throug this
{
    text("start_g");

    while(1 == 1)
    {
        if(count_c == win_score || count_p == win_score) // if player or computer reach the winning score game ends
        {
            if(count_c == win_score)
            {
                text("c_win");
                int end;
                cin >> end;
                cout<<'\n';
                break; // return to main menu
            }
            else if (count_p == win_score)
            {
                text("p_win");
                int end;
                cin >> end;
                cout<<'\n';
                break; // return to main menu
            }
        }
        text("game_c");
        int r_c = random_number();
        int p_c;
        cin >> p_c;

        bool flag = false;
        if(p_c >= 0 && p_c <= 3 ) flag = true;
        if(!flag)
        {
            text("invalid");
            continue; // repeat's loop to get a vali input
        }
        if (p_c == 0)
        {
            break;
        }
        if(p_c == r_c)
        {
            pc_choice(r_c);//shows computer's move to player
            text("p_score");
            cout << count_p<<'\t';
            text("c_score");
            cout << count_c << '\n' <<'\n';
        }
        else if(player_wins(p_c, r_c))
        {
            count_p++;
            pc_choice(r_c);//shows computer's move to player
           text("p_score");
            cout << count_p<<'\t';
            text("c_score");
            cout << count_c << '\n' <<'\n';

        }
        else
        {
            count_c++;
            pc_choice(r_c);//shows computer's move to player
            text("p_score");
            cout << count_p<<'\t';
            text("c_score");
            cout << count_c << '\n' <<'\n';
        }
    }
}