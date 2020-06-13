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
    int year;
	int rating=0;
};
void rateBook(BOOK book)
{
    cout << "Select a number from 1 to 10:" << endl;
    cin >> book.rating;
    if ((book.rating >= 1) && (book.rating <= 10))
    {
        cout << "Thank you for rating this book with a score of " << book.rating << endl;
    }
    else
    {
        cout << "Please, input a valid number!" << endl;
        rateBook(book);
    }
}

void showBook(BOOK book[100], int& numberOfBooks)
{
    for (int i = 0; i < numberOfBooks; i++)
    {
        cout << book[i].id << endl;
        cout << book[i].name << endl;
        cout << book[i].author << endl;
        cout << book[i].genre << endl;
        cout << book[i].year << endl;
        cout << book[i].rating << endl;

    }
}

void returnBook(BOOK book[100], int numberOfOrderedBooks)
{
    int answer;
    cout << "Which book would you like to rate?";
    showBook(book, numberOfOrderedBooks);
    cin >> answer;

    for (int i = 0; i < numberOfOrderedBooks; i++)
    {
        if (answer == book[i].id)
        {
            rateBook(book[i]);
        }
    }
}

void orderBook(BOOK book[100], BOOK orderBook[100],int &orderedBookCount,int &totalBookCount)
{
    int selection;
    cout << "Which book do you want to order?";
    showBook(book, totalBookCount);
    cin >> selection;
    for (int i = 0; i < totalBookCount; i++)
    {
        if (selection==book[i].id)
        {
            book[i].id = orderBook[orderedBookCount].id;
            book[i].name = orderBook[orderedBookCount].name;
            book[i].author = orderBook[orderedBookCount].author;
            book[i].genre = orderBook[orderedBookCount].genre;
            book[i].year = orderBook[orderedBookCount].year;
            book[i].rating = orderBook[orderedBookCount].rating;
            cout << "Book ordered successfully";
        }
    }
}

void addBook(BOOK book[100], int& numberOfBooks, int& numberOfBooksBeforeAddition)
{
    int numberOfAddedBooks;
    cout << "How many books would you like to add?" << endl;
    cout << "Number of books:";
    cin >> numberOfAddedBooks;
    numberOfBooks += numberOfAddedBooks;

    for (int i = numberOfBooksBeforeAddition; i < numberOfBooksBeforeAddition + numberOfAddedBooks; i++)
    {
        book[i].id = i;
        cout << "Please insert values" << endl;

        cout << "Book name:" << endl;
        cin >> book[i].name;

        cout << "Author:" << endl;
        cin >> book[i].author;

        cout << "Genre:" << endl;
        cin >> book[i].genre;

        cout << "Year of publishing:" << endl;
        cin >> book[i].year;
    }
    numberOfBooksBeforeAddition = numberOfBooks;
}

void selection(int& selection, BOOK book[100], BOOK bookOrder[100], int& booksTotal, int& booksTotalBeforeAddition, BOOK& rateableBook, int &orderedBooksNumber);


void MainMenu(BOOK book[100], BOOK bookOrder[100],int &booksTotal, int &booksTotalBeforeAddition, BOOK &rateableBook, int &orderedBooksNumber) 
{
	int choice;

	cout << "Main Menu\n";
	cout << "Welcome! This is the main menu, please make a choice:\n";
	cout << "1 - List of books\n";
	cout << "2 - Add a book\n";
    cout << "3 - Search book\n";
    cout << "4 - Order book\n";
    cout << "5 - Return book\n";
	cout << "6 - See your ratings\n";
    cout << "0 - Exit\n";
	cout << "Selection: ";
	cin >> choice;
	selection(choice,book,bookOrder,booksTotal,booksTotalBeforeAddition,rateableBook, orderedBooksNumber);
}

void selection(int& selection, BOOK book[100], BOOK bookOrder[100], int& booksTotal, int& booksTotalBeforeAddition, BOOK& rateableBook, int &orderedBooksNumber)
{
    switch (selection)
    {
    case 1:
        showBook(book, booksTotal);
        MainMenu(book, bookOrder, booksTotal, booksTotalBeforeAddition, rateableBook, orderedBooksNumber);
        break;
    case 2:
        addBook(book, booksTotal, booksTotalBeforeAddition);
        MainMenu(book, bookOrder, booksTotal, booksTotalBeforeAddition, rateableBook, orderedBooksNumber);
        break;
    case 3:
        //Search Book
        MainMenu(book, bookOrder, booksTotal, booksTotalBeforeAddition, rateableBook, orderedBooksNumber);
        break;
    case 4:
        orderBook(book,bookOrder,orderedBooksNumber,booksTotal);
        MainMenu(book, bookOrder, booksTotal, booksTotalBeforeAddition, rateableBook, orderedBooksNumber);
        break;
    case 5:
        returnBook(bookOrder, orderedBooksNumber);
        MainMenu(book, bookOrder, booksTotal, booksTotalBeforeAddition, rateableBook, orderedBooksNumber);
        break;
    case 6:
        //See your ratings
        MainMenu(book, bookOrder, booksTotal, booksTotalBeforeAddition, rateableBook, orderedBooksNumber);
        break;
    case 0:
        cout << "Goodbye!";
        break;
    default:
        MainMenu(book, bookOrder, booksTotal, booksTotalBeforeAddition, rateableBook, orderedBooksNumber);
        break;
    }
}


int main()
{
    BOOK books[100], orderedBooks[100],lonelyBook;
    int booksTotal = 0, booksBeforeAddition = booksTotal, orderedBooksNumber;
    MainMenu(books,orderedBooks,booksTotal,booksBeforeAddition, lonelyBook, orderedBooksNumber);
}