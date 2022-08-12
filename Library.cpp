#include "Library.h"
#include <algorithm>
#include <map>

void Library::add_book(const std::string& name, const std::string& author, const std::string& genre, const std::string& yearOfIssue, const std::string& publisher, const int& numberOfPages)
{
	base_Library.push_back(Book(name, author, genre, yearOfIssue, publisher, numberOfPages));
}

void Library::delete_book(const std::string& name, const std::string& author) // Paste Name and Author
{
	for (size_t i = 0; i < base_Library.size(); i++)
	{
		if (base_Library.at(i).return_Author() == author && base_Library.at(i).return_Name() == name)
		{
			base_Library.erase(base_Library.begin() + i);
		}
	}
}


void Library::show_books_by_author(std::string author)
{
	std::cout << author << "'s books: \n\n";
	for (size_t i = 0; i < base_Library.size(); i++)
	{
		if (base_Library.at(i).return_Author() == author)
		{
			base_Library.at(i).show_Book(); 
		}
	}
}

void Library::show_books_by_genre_and_publisher(std::string genre, std::string publisher)
{
	std::cout << "Books from the " << genre << " section published by " << publisher << "\n\n";
	for (size_t i = 0; i < base_Library.size(); i++)
	{
		if (base_Library.at(i).return_Genre() == genre && base_Library.at(i).return_Publisher() == publisher)
		{
			base_Library.at(i).show_Book();
		}
	}
}

void Library::show_largest_publisher() // Don't show last sorted publisher -> to fix if there's enough time
{
	std::vector<std::string> publishers_appearances;
	std::map<std::string, int> publishers;

	for (size_t i = 0; i < base_Library.size(); i++)		// List all publishers_appearances
	{
		publishers_appearances.push_back(base_Library.at(i).return_Publisher());
	}
	std::sort(publishers_appearances.begin(), publishers_appearances.end());		// Sort publishers_appearances


	int counter = 1;
	std::string current_publisher = publishers_appearances.at(0);			// Set publisher
	for (size_t i = 0; i < publishers_appearances.size(); i++)		// Cout
	{
		
		if (i + 1 < publishers_appearances.size())
		{
			if (current_publisher == publishers_appearances.at(i + 1))
			{
				counter++;
			}
			else
			{
				publishers.insert(std::pair<std::string, int>(current_publisher, counter));
				current_publisher = publishers_appearances.at(i + 1);
				counter = 0;
				i++;
			}
		}
	}
	
	for (const auto& elem : publishers)	
	{
		std::cout << elem.first << " " << elem.second << "\n";
	}
}
/*
void Library::show_TOP3_genres()
{

}*/