Rock Paper Scissors Game

A console-based Rock Paper Scissors game written in C++ with support for English and Persian languages.

Features

Interactive gameplay against the computer with score tracking. You can customize the winning score and choose between English or Persian language. Your settings are automatically saved between sessions.

Game Rules

Rock beats Scissors, Scissors beats Paper, and Paper beats Rock. The first player to reach the win score wins the game. You can enter 0 at any time during gameplay to return to the main menu.

How to Build

You need a C++ compiler that supports C++11 or later and Windows. Compile using:

g++ -o RPS_GAME RockPaperScissors.cpp gamecore.cpp setting.cpp text.cpp -std=c++11

Make sure you have a save folder in the same directory as the executable.

How to Play

Run RPS_GAME.exe to start the game. From the main menu you can start a new game, go to settings, or exit. During gameplay, press 1 for Rock, 2 for Paper, 3 for Scissors, or 0 to go back to the menu.

Settings

You can change the win score or language from the settings menu. The game supports English and Persian. Your choices are saved automatically.

Project Structure

RockPaperScissors.cpp is the main entry point. gamecore.cpp handles the game logic for each round. setting.cpp manages settings and configuration. text.cpp contains all the text output for both languages. The settings.txt file stores your preferences.

Requirements

Windows operating system and C++11 compiler.