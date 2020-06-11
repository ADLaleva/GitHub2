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

void addBook(BOOK book [100], int numberOfbooks )
{
    cout << "how many books would you like to add?";
    cout << "Number of books:" << endl;
    cin >> numberOfbooks;


    for (int i = 0; i < numberOfbooks; i++)
    {
        cout << "Please " << endl;

        cout << "ID:" << endl;
        cin >> book[i].id;

        cout << "Book name:" << endl;
        cin >> book[i].name;

        cout << "Author:" << endl;
        cin >> book[i].author;

        cout << "Genre:" << endl;
        cin >> book[i].genre;

    }
};

void showBook(BOOK *book[100], int *numberOfbooks)
{
    for (int i = 0; i < numberOfbooks; i++)
    {
        cout << book[i].id << endl;
        cout << book[i].name << endl;
        cout << book[i].author << endl;
        cout << book[i].genre << endl;
        cout << book[i].rating << endl;

    }
};

void rateBook(BOOK book)
{
    cout << "Select a number from 1 to 10:" << endl;
    cin >> book.rating;
    if ((book.rating >= 1) && (book.rating <= 10))
    {
        cout << "Thanks you for rating this book with a score of " <<book.rating << endl;
    }
    else
    {
        cout << "Please, input a valid number!" << endl;
        rateBook();
    }
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

        rateBook();
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
    cout << "3 - Search book\n";
    cout << "4 - Order book\n";
    cout << "5 - Return book\n";
	cout << "6 - See your ratings\n";
    cout << "0 - Exit\n";
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
        void addBook()
        break;
    case 3:
        //Search Book
        break;
    case 4:
        //Order Book
        break;
    case 5:
        //Return book
        break;
    case 6:
        //See your ratings
        break;
    default:
        break;
    }

}

int main()
{

}