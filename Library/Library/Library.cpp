#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct Book 
{
	int id;
	string name;
	string author;
	string genre;
	int rating;
};

int MainMenu() 
{
	int choice;

	cout << "Main Menu\n";
	cout << "Welcome this is the main menu, please make a choice:\n";
	cout << "1 - List of books\n";
	cout << "2 - Add a book\n";
	cout << "3 - See your ratings\n";
    cout << "4 - Exit\n";
	cout << "Selection: ";
	cin >> choice;
	selection(choice);
}

int selection(int selection)
{
    switch (selection)
    {
    case 1:
        //List
        break;
    case 2:
        //Add a book
        break;
    case 3:
        //See your ratings
        break;
    default:
        break;
    }

}

int main()
{

}