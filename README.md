# Задание 1.
Разработайте программу "Библиотека". 
Создайте структуру "Книга" (название, автора, издательство, жанр). 
Создайте массив из 10 книг.
Реализуйте для него следующие возможности:
- Редактировать книгу;
- Печать всех книг;
- Поиск книг по автору;
- Поиск книги по названию;
- Сортировка массива по названию книг;
- Сортировка массива по автору;
- Сортировка массива по издательству.

```mermaid
---
title: Animal example
---
classDiagram
    class Date{
      - int _day 
      - int _month
      - int _year
      + Date(day : int, month : int, year : int)
      + ToString() string
      + GetYear() int
    }

    Date *-- Author
    class Author{
        - string _last_name
        - string _first_name
        - Date* _date_of_birth
        - Date* _date_of_death
        + Author(string lastName, string firstName)
        + FullName() string
        + GetLastName() string
        + GetFirstName() string
    }
    
    Date *-- Book
    Author *-- Book
    class Book{
        - string _title
        - Author* _author
        - Date* _date_of_publication
        - string _publishing_house
        + Book(string title, Author* author, Date* dateOfPublication, string publishingHouse)
        + Book(string title, Author *author)
        + GetTitle() string
        + GetAuthor() Author*
        + GetDateOfPublication() Date*
        + GetPublishingHouse() string
    }

    Book *-- Books
    class Books {
        - vector<Book*> _books
        - ComparatorByTitle(Book* book1, Book* book2) bool
        + AddBook(Book* book) void
        + GetAll() vector<Book*>
        + GetBooksByAuthor(string name) vector<Book*>
        + GetBooksByTitle(string title) vector<Book*>
        + SortByTitle() void
    }
```
