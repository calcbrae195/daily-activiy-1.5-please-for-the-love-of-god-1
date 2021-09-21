// daily activiy 1.5 please for the love of god 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string verb;
    string location;
    string code1 = "3";
    string code2 = "2";
    string code3 = "1";
    string text;

    cout << "Who are you?" << endl;
    getline(cin, name);
    cout << "What appened?" << endl;
    getline(cin, verb);
    cout << "Where did you go?" << endl;
    getline(cin, location);

    text = name + " " + verb + " " + " while at " + location;


    cout << text.substr(0, text.find(name));
    cout << code1;
    cout << text.substr(text.find(name) + name.length());
    cout << text.substr(15, text.find(verb));
    cout << code2;
    cout << text.substr(text.find(verb) + verb.length());
    cout << text.substr(26, text.find(location));
    cout << code2;
    cout << text.substr(text.find(location) + location.length());
}
