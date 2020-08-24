//
// Created by Zening Wang on 2020-08-23.
//

#ifndef UNTITLED7_ACTOR_H
#define UNTITLED7_ACTOR_H

#endif //UNTITLED7_ACTOR_H
#include <iostream>
#include "Object.h"
#include <string>
#include <sstream>
using namespace std;
#pragma once

class Actor : public Object
{
private:
    string firstName;
    string lastName;
    string birth;
    string gender;
    string movie;

public:
    Actor();
    Actor(string firstName,string lastName, string birth, string gender);
    void setFirst(string firstName);
    string getFirst(void);
    void setLast(string lastName);
    string getLast(void);
    void setYear(string year);
    string getYear(void);
    void setGender(string gender);
    string getGender(void);
};
