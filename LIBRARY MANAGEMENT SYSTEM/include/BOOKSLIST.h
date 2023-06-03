#pragma once
#include "BOOK.h"
#include "DATE.h"
#include <iostream>
#include <vector>
#include <string.h>
#include <sstream>
#include "BORROW_RETURNSLIST.h"
using namespace std;


class BOOKSLIST
{
	private:
		vector<BOOK> booksList;
	public:
		BOOKSLIST();
		void setBooksList(vector<BOOK>);
		vector<BOOK> getBooksList();
		void input();
		void output();
		void outputSetw();
		bool checkDuplicatedId(string);
		bool checkExistingBook(string);
		void changeBookInformation(string);
		void deleteBook(string, BORROW_RETURNSLIST&);
		void sortBookById();
		int findBookId(string);
		int findBookTitle(string);
		void findBookGenre(string);
		void fixRemain(string, int);
		void fixTotal(string, int);
		void readFile();
        void exportFIle ();
		~BOOKSLIST();
};

