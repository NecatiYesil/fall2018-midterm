/**
Description: This program will prompt a sentence to user and will count the given characters
             in given sentence.
Filename: main.cpp
Author: Necati Murat Yesil
Date: 10/18/18
*/

#include <iostream>
#include <string>

using namespace std;

string get_string(string prompt);

char get_char(string prompt);

int char_count(string s, char c);

int main()
{
    string s = get_string("Please enter a sentence: ");
    //This will prompt to user for sentence.
    char c = get_char("Please enter the character that you want to search: ");
    // This will prompt to user for a character.
    cout << "There are/is " << char_count(s,c) << " number of " << "\"" << c << "\""
         << " in your sentence." << endl;
    // This will print the how many of the given characters were in the given sentence. 
   return 0;
}

/**
    Prompts for a sentence.
    @param prompt a string of question.
**/
string get_string(string prompt)
{
    string x;
    cout << prompt;
    getline(cin, x);
    return x;
}

/**
    Prompts for a character.
    @param prompt a string of question.
**/
char get_char(string prompt)
{
    char x;
    cout << prompt;
    cin >> x;
    return x;
}

/**
    Counts the given character in the given sentence.
    @param s is a string of given sentence.
    @param c is the given character by user.
**/
int char_count(string s, char c)
{
    int count = 0;
    int size = s.length();
    
    for( int i = 0; i < size; i++)
    {
        char I = toupper(s.at(i));
        char C = toupper(c);
        if(c == s.at(i) || C == I) 
        {
            count++;
        }
    }

    return count;
}













