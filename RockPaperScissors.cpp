#include<windows.h>
#include<iostream>
#include<fstream>
#include<random>
#include<string>
#include "gamecore.h"
#include "setting.h"
#include "text.h"

using namespace std;

string lang;//game's language changes trough to this variable en for english and fa for persian
int win_score;//score needed for winning the game changes based on this variable
int count_p;// contains the playes score
int count_c;// contains the computer's score

int random_number();//returns a random number to randomize computer's move
void pc_choice(int);//prints the computers choice in every round
bool player_wins(int, int);// check if player wins or looses in every round
void load(int&, string&);// loads the game's saved settings
void save(int &, string &);//saves player's changes

int main()
{   
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    load(win_score, lang);
    
    int menu;
    text("start");
    while(1==1)
    {
        count_p = 0, count_c = 0; // ressets scores of player and computer
        text("main_menu");
        cin >> menu;
        bool flag = false;
        
        if(menu > 0 && menu < 4) flag = true;//for cheking the players input & prevent unwanted ERRORS!
        if(!flag)
        {
            text("invalid");
            continue; //repeats the loop to get a valid input
        }
        else
        {
            if(menu == 1) // starts the game
            {
                game_core(count_p, count_c);
            }
            else if(menu == 2) // goes to setting menu
            {
                setting(win_score, lang);
            }
            else if(menu == 3)
                exit(0); // quit the game

        }
    }
    return 0;
    
}

int random_number()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 3);

    return dist(gen);
}

bool player_wins(int p_c,int r_c)
{
    bool x = false;
    if((p_c == 1 && r_c == 3) || (p_c == 2 && r_c == 1) || (p_c == 3 && r_c == 2)) x = true;
    return x;
}

void pc_choice(int a)
{
    if(a == 1)
        text("rock");
    else if(a == 2)
        text("paper");
    else if(a == 3)
        text("scissors");

}

void save(int &win_score, string &lang)
{
    ofstream in_file("save/settings.txt");
    in_file << win_score << '\n' <<lang;
    in_file.close();
}

void load(int &win_score, string &lang)
{
    ifstream file("save/settings.txt");
    file >> win_score;
    file >> lang;
    file.close();
}
