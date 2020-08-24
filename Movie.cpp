
//
// Created by Zening Wang on 2020-08-23.
//

#include <iostream>

using namespace std;

class Movie
{
public:
    void setMovie(string movie);
    string getMovie(void);
    void setYear(string year);
    string getYear(void);
    void setFirst(string firstName);
    string getFirst(void);
    void setLast(string lastName);
    string getLast(void);

    //void printMActor();
    //void printFActor();

    Movie();  // 这是构造函数
    Movie(string movie,string year,string first, string last);
public :
    string movie;
    string year;
    string first;
    string last;
};

// 成员函数定义，包括构造函数
Movie::Movie(string movie,string year, string first, string last){
    this->movie=movie;
    this->year=year;
    this->first=first;
    this->last=last;




}
Movie::Movie(void)
{
    cout << "Object is being created" << endl;
}
void Movie::setMovie( string movie )
{
    movie = movie;
}

string Movie::getMovie( void )
{
    return movie;
}

void Movie::setYear( string year )
{
    year = year;
}

string Movie::getYear( void )
{
    return year;
}
void Movie::setFirst( string firstName )
{
    first = firstName;
}

string Movie::getFirst( void )
{
    return first;
}

void Movie::setLast( string lastName )
{
    last = lastName;
}

string Movie::getLast( void )
{
    return last;
}




// 程序的主函数

