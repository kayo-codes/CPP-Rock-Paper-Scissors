#include<iostream>
#include "text.h"
using namespace std;

void text(string key)// every game output prints trough this function based on language and key
{
    if(lang == "en")
    {
        if(key == "start")
            {
                cout << "=====Rock Paper Scissors=====" << '\n' << '\n';
                cout << "--In this game, you will play against the computer." << '\n';
                cout << "--You can choose between Rock, Paper, or Scissors by entering the number" << '\n';
                cout << "--also in the main menu just choose any option by entering the number"<< '\n';
                cout << "--The first player to reach the win score wins the game." << '\n';
                cout << "--Good luck!" << '\n' << '\n';
            }
        if(key == "main_menu")
        {
            cout << "--1.start"<<'\n';
            cout << "--2.setting"<<'\n';
            cout << "--3.exit"<<'\n'<<'\n';
        }
        else if(key == "setting")
        {
            cout << '\n' <<"--1.win_score"<<'\n';
            cout << "--2.language"<<'\n';
            cout << "--3.back"<<'\n'<<'\n';
        }
        else if(key == "setting_sn")
        {
            cout << '\n' << "--How many points do you want to be needed to win?"<<" "<<'\n';
        }
        else if(key == "setting_sc")
        {
            cout << '\n' <<"--win score is now : ";
        }
        else if(key == "language_m")
        {
            cout << '\n' << "--please choose your prefrred language"<<'\n'<<'\n';
            cout << "--1.en" << '\n';
            cout << "--2.fa" << '\n';
        }
        else if(key == "language_c")
        {
            cout << '\n' <<"--language changed succesfully" << '\n'<<'\n';
        } 
        else if(key == "start_g")
        {
            cout << "--game started, please make your choice.(you can return to main menu anytime by entering the number 0)" <<'\n';
            cout << "--score needed to win : " << win_score <<'\n' <<'\n';
        }
        else if (key == "game_c")
        {
            cout << "--1.ROCK" << '\n' << "--2.PAPER" << '\n' << "--3.SCISSORES" << '\n' << '\n';
        }
        
        else if (key == "rock")
        {
            cout << '\n' << "computer --> ROCK"<<"\n";
        }
        else if (key == "paper")
        {
            cout << '\n' << "--computer --> PAPER"<<'\n';
        }
        else if (key == "scissors")
        {
            cout << '\n' << "--computer --> SCISSORS"<<'\n';
        }
        else if(key == "p_score")
        {
            cout << '\n' << "your score : ";
        }
        else if(key == "c_score")
        {
            cout << "computer's score : " ;
        }
        else if(key == "c_win")
        {
            cout << "YOU LOST :( Maybe nex time you can win" <<'\n'<<'\n';
            cout <<"Enter any number to get back to main menu" << '\n' << '\n';
        }
        else if(key == "p_win")
        {
            cout << "CONGRATULATIONS !!!   YOU WON !!!" << '\n' <<'\n';
            cout << "enter ant number to get back to main menu" << '\n' << '\n';
        }
        else if(key == "invalid")
        {
            cout <<'\n'<< "--INVALID_INPUT. PLEASE RETRY"<<'\n'<<'\n';
        }
    }
    if(lang == "fa")
    {
        if(key == "start")
            {
                cout << "=====" << "یجیق ذغاک گنس" << "=====" <<'\n' << '\n';
                cout << "--" << "دینکیم یزاب رتویپماک لباقم یزاب نیا یوت" << '\n';
                cout << "--" << "دینک باختنا ار یکی اهنآ هرامش ندرک دراو اب یجیق و ذغاک و گنس نیب دیناوتیم" << '\n';
                cout << "--" << "دینک باختنا ار نآ ریز یاه هنیزگ زا مادکره هرامش ندرک دراو اب دیناوتیم یزاب یونم رد نینچمه" << '\n';
                cout << "--" << "دوشیم هدنرب دسرب زاین دروم زایتما هب رفن نیلوا هک یسکره" << '\n';
                cout << "--" << "دیشاب قفوم" << '!' << '\n' << '\n';
            }
        if(key == "main_menu")
        {
            cout << "--1." << "عورش" <<'\n';
            cout << "--2."<< "تامیظنت" <<'\n';
            cout << "--3."<< "جورخ" <<'\n'<<'\n';
        }
        else if(key == "setting")
        {
            cout << '\n' << "--1." << "یزوریپ زایتما" <<'\n';
            cout << "--2." << "نابز" <<'\n';
            cout << "--3." << "تشگزاب" << '\n' << '\n';
        }
        else if(key == "setting_sn")
        {
            cout << '\n' << "--" << "دشاب زاین یزوریپ یارب زایتما دنچ دیهاوخیم"<<" "<<'\n';
        }
        else if(key == "setting_sc")
        {
            cout << '\n' << "--" << "درک ریغغت یزوریپ زایتما" << " : ";
        }
        else if(key == "language_m")
        {
            cout << '\n' << "--" << "دینک باختنا ار دوخ رظن دروم نابز افطل" <<'\n'<<'\n';
            cout << "--1." << "یسیلگنا" << '\n';
            cout << "--2." << "یسراف" << '\n';
        }
        else if(key == "language_c")
        {
            
            cout << '\n'<< "--" << "درک رییغت تیقفوم اب یزاب نابز" << '\n'<<'\n';
        }
         else if(key == "start_g")
        {
            cout << "--" << "دینک باختنا افطل .دش عورش یزاب " << "<<" << "دیدرگرب یلصا یونم هب رفص ددع ندرک دراو اب ینامز ره دیناوتیم امش" << ">>"; 
            cout << '\n' << "یزوریپ یارب زاین دروم زایتما" <<" : " << win_score << '\n' << '\n';
        }
        else if (key == "game_c")
        {
            cout <<"--1." << "گنس" << '\n' << "--2." << "ذغاک" << '\n' <<"--3." <<"یچیق" << '\n' <<'\n' ;
        }
        
        else if (key == "rock")
        {
            cout << '\n' << "رتویپماک" << " --> " << "گنس" << '\n' ;
        }
        else if (key == "paper")
        {
            cout << '\n' << "رتویپماک" << " --> " << "ذغاک" << '\n';
        }
        else if (key == "scissors")
        {
            cout << '\n' << "رتویپماک" << " --> " << "یچیق" << '\n';
        }
           else if(key == "p_score")
        {
            cout << '\n' << "امش زایتما" << " : ";
        }
        else if(key == "c_score")
        {
            cout << "رتویپماک زایتما" << " : ";
        }
        else if(key == "c_win")
        {
            cout << "یتخاب وت" <<" ): " << "یش هدنرب ینوتب یدعب هعفد دیاش" <<'\n'<<'\n';
            cout <<"دینک دراو ددع کی یلصا یونم هب تشگزاب یارب" << '\n' << '\n';
        }
        else if(key == "p_win")
        {
            cout << "کیربت" << " !!!   " << "کیربت" << " !!!" << '\n' << '\n';
            cout << "دینک دراو ددع کی یلصا یونم هب تشگزاب یارب" << '\n' << '\n' ;
        }
        else if(key == "invalid")
        {
            cout <<'\n'<<"--"<< "دینک شالت هرابود افطل !ربتعمان یدورو" <<'\n'<<'\n';
        }
    }
}