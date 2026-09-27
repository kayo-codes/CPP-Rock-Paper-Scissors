#include<iostream>
#include<fstream>
#include<string>
#include "setting.h"
#include "text.h"

using namespace std;

void save(int &, string &); //saves player's changes

void setting(int &win_score, string &lang)//handles the setting of the game for chnaging winning score and language
{
    text("setting");// displays setting menu
    int c_setting;
    
    while(1==1)
    {
        cin >> c_setting;
        if(c_setting == 1 ) // playes enters chnge the winning score menu
        {   
            text("setting_sn");
            cin >> win_score; // player enters the new winning score
            cin.ignore();
            text("setting_sc");
            cout << win_score<<'\n'<<'\n';

            save(win_score, lang);

            break; //return to main mebu
        }
        else if(c_setting == 2) // player enters the language selection menu
        {
            text("language_m");
    
            
            while(1==1)
            {
                int lang_in;
                string temp_lang;
                temp_lang = lang;
                bool lang_flag = false;
                cin >> lang_in;
                if(lang_in == 1 || lang_in == 2) lang_flag = true; // checks if players input is valid
                
                if(lang_flag)
                {
                    if(lang_in == 1)
                    {
                        lang = "en";
                        text("language_c");
                        if(lang != temp_lang)
                            text("start");
                        
                        save(win_score, lang);

                        break;// return to main mu
                    }
                    else if(lang_in == 2)
                    {
                        lang = "fa";
                        text("language_c");
                        if(lang != temp_lang)
                            text("start");
                        
                        save(win_score, lang);

                        break; // return to main menu
                    }
                }
                else if(!lang_flag) // repeats the loop to get a valid input
                {
                    text("invalid");
                    text("language_m");
                }
            }
            break;
        }
        else if(c_setting == 3)
        {
            break; // return to mainmu
        }
        else
        {
            text("invalid");
            text("setting");
        }
        
    }
}