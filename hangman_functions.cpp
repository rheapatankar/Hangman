#include <iostream>
#include <vector>
#include "hangman_functions.h"
using namespace std;

// define functions

void greet()
{
    cout << "===================\n";
    cout << "Hangman: The Game\n";
    cout << "====================\n";
    cout << "Instructions : Save your friend from being hanged by guessing the right letters.\n";
}

void display_misses(int misses)
{
    if (misses == 0)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 1)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 2)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 3)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 4)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 5)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " /    | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 6)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " / \\  | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
}

void display_status(vector<char> incorrect, string answer)
{
    cout<< "Incorrect Guesses : \n";


    for(int i = 0; i < incorrect.size(); i++) 
    {
        cout<<incorrect[i]<<" ";
    }

    cout <<"\nCodeword\n";

    for (int i = 0; i<answer.length(); i++) 
    {
        cout<<answer[i]<<" ";
    }

}

void end_game(string answer, string codeword) 
{
    if(answer == codeword) 
    {
        cout<<"Hooray! You saved the person. Congratualations!\n";
    }else 
    {
        cout<<"Oh no! The man is hanged!\n";
    }
}
