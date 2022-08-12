#pragma once
#include <iostream>
#include <string>
#include <vector>

class Library
{
private:
	class Book
	{
	private:
		std::string name = "None";
		std::string author = "None";
		std::string genre = "None";
		std::string yearOfIssue = "None";
		std::string publisher = "None";
		int numberOfPages = 0;

	public:
		Book( const std::string &book_name, const std::string &book_author, const std::string &book_genre, const std::string &book_yearOfIssue, const std::string &book_publisher, const int &book_numberOfPages)
		{
			name = book_name;
			author = book_author;
			genre = book_genre;
			yearOfIssue = book_yearOfIssue;
			publisher = book_publisher;
			numberOfPages = book_numberOfPages;
		}
		
		void show_Book()
		{
			std::cout << "Name: " << name << " | ";
			std::cout << "Author: " << author << " | ";
			std::cout << "Genre: " << genre << " | ";
			std::cout << "YearOfIssue: " << yearOfIssue << " | ";
			std::cout << "Publisher: " << publisher << " | ";
			std::cout << "NumberOfPages: " << numberOfPages << std::endl;
		}
		
		std::string return_Author() { return author; }
		std::string return_Genre() { return genre; }
		std::string return_Publisher() { return publisher; }
		std::string return_Name() { return name; }

	};
	
	std::vector <Book> base_Library;

public:
	void add_book(const std::string& name, const std::string& author, const std::string& genre, const std::string& yearOfIssue, const std::string& publisher, const int& numberOfPages);

	void delete_book(const std::string& name, const std::string& author);

	void show_books_by_author(std::string author);

	void show_books_by_genre_and_publisher(std::string genre, std::string publisher);

	void show_largest_publisher();
	/*
	void show_TOP3_genres();

	void save_library_to_file();
	void load_library_from_file();
	*/

};

