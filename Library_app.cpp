#include <iostream>
#include "Library.h"

int main()
{



    Library library;
    std::string name, author, genre, yearOfIssue, publisher;
    int numberOfPages;

    std::cout << "1. Add a book. " << std::endl;
    std::cout << "2. Delete a book. " << std::endl;
    std::cout << "3. Show all books by the same author. " << std::endl;
    std::cout << "4. Show all books of a given genre and publisher. " << std::endl;
    std::cout << "5. Show the name of the publisher with the maximum quantity of the books. \n" << std::endl;

    // For testing

    /*
    library.add_book("Droga Krolow", "Brandon Sanderson", "Fantastyka", "2010", "Wydawnictwo MAG", 1200);
    library.add_book("Slowa Swiatlosci", "Brandon Sanderson", "Fantastyka", "2014", "Wydawnictwo MAG", 1000);
    library.add_book("Dawca Przysiegi cz.1", "Brandon Sanderson", "Fantastyka", "2016", "Wydawnictwo MAG", 900);
    library.add_book("Dawca Przysiegi cz.2", "Brandon Sanderson", "Fantastyka", "2018", "Wydawnictwo MAG", 1100);
    library.add_book("Rytm Wojny cz.1", "Brandon Sanderson", "Fantastyka", "2020", "Wydawnictwo MAG", 950);
    library.add_book("Gildia Magow", "Trudi Canavan", "Fantastyka", "2017", "Galeria Ksiazki", 800);
    library.add_book("Rytm Wojny cz.2", "Brandon Sanderson", "Fantastyka", "2022", "Wydawnictwo MAG", 950);
    library.add_book("Nowicjuszka", "Trudi Canavan", "Fantastyka", "2018", "Galeria Ksiazki", 900);
    library.add_book("Wielki Mistrz", "Trudi Canavan", "Fantastyka", "2019", "Galeria Ksiazki", 850);

    */


    std::cout << "What u want to do: ";
    int action = 0;

    std::cin >> action;
    switch (action)
    {
    case 1:
        std::cout << "Pass name: ";
        std::cin >> name;

        std::cout << "Pass author: ";
        std::cin >> author;

        std::cout << "Pass genre: ";
        std::cin >> genre;

        std::cout << "Pass yearOfIssue: ";
        std::cin >> yearOfIssue;

        std::cout << "Pass publisher: ";
        std::cin >> publisher;

        std::cout << "Pass numberOfPages: ";
        std::cin >> numberOfPages;

        library.add_book(name, author, genre, yearOfIssue, publisher, numberOfPages);
        break;

    case 2:
        std::cout << "Pass name: ";
        std::cin >> name;

        std::cout << "Pass author: ";
        std::cin >> author;

        library.delete_book(name, author);
        break;

    case 3:
        std::cout << "Pass author: ";
        std::cin >> author;

        library.show_books_by_author("Brandon Sanderson");
        break;

    case 4:
        std::cout << "Pass genre: ";
        std::cin >> genre;

        std::cout << "Pass publisher: ";
        std::cin >> publisher;

        library.show_books_by_genre_and_publisher(genre, publisher);
        break;

    case 5:
        library.show_largest_publisher();
        break;

    default:
        break;
    }
}
