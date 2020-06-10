#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct BOOK
{
	int id;
	string name;
	string author;
	string genre;
	int rating;
    
};

void addBook(BOOK book)
{
    cout << "Please " << endl;

    cout << "ID:" << endl;
    cin >> book.id;

    cout << "Book name:" << endl;
    cin >> book.name;

    cout << "Author:" << endl;
    cin >> book.author;

    cout << "Genre:" << endl;
    cin >> book.genre;

   
};

void showBook(BOOK book)
{
    cout<< book.id << endl;
    cout << book.name << endl;
    cout<< book.author << endl;
    cout<< book.genre << endl;
    
    cout<< book.rating << endl;
};

void rateBook()
{




};


void returnBook(int answer) 
{
    cout << "Would you like to rate the book before returning it? (for YES- type 1, for NO- type 0)   " << endl;
    cin >> answer;

    if (answer != 1 || answer != 0)
    {

        cout << "Please, input a valid number!" << endl;
    }
    else if (answer=1)
    {

        cout << rateBook;
    }
    else
    {
        //return the book
    }



}





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