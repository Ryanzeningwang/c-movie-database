//
// Created by Zening Wang on 2020-08-23.
//

#ifndef UNTITLED7_MOVIE_H
#define UNTITLED7_MOVIE_H

#endif //UNTITLED7_MOVIE_H

#include <iostream>
#include "Object.h"
#include <string>
#include <sstream>
using namespace std;
#pragma once

class Movie : public Object
{
private:
    string movie;
    string year;
    string firstName;
    string lastName;


public:
    Movie();
    Movie(string movie,string year, string firstName, string lastname);
    void setMovie(string movie);
    string getMovie(void);
    void setYear(string year);
    string getYear(void);
    void setFirst(string firstName);
    string getFirst(void);
    void setLast(string lastName);
    string getLast(void);
};
