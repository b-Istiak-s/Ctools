#include<iostream>
using namespace std;

class Book{
	public:
		string title;
		string author;
		int pages;
		Book(string aTitle, string aAuthor, int aPages){
			title = aTitle;
			author = aAuthor;
			pages = aPages;
			
			cout << "Title : " << title << "; Author : " << author << "; Pages : " << pages << "\n";
		}
};

int main(){
	Book book1("Harry","JK",500);
	
	Book book2("Lord","Tolkein",450);
	return 0;
}
