#include<stdio.h>

struct Book {
	char title[20];
	char author[20];
	int pages;
};

void init_Book_types(const char* title, const char* author, int pages){
	//aTitle->title;
	//aAuthor->author;
	//aPages->pages;

	printf("Title : %s; Author : %s; Pages : %d; \n",title,author,pages);
}

void main(){
	struct Book title; struct Book author; struct Book pages;
	init_Book_types("Harry","JK",500);
	init_Book_types("Lord","Tolkein",450);
}
