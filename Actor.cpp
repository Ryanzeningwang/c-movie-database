//
// Created by Zening Wang on 2020-08-23.
//

#include <iostream>

using namespace std;

class Actor
{
public:
    void setFirst(string firstName);
    string getFirst(void);
    void setLast(string lastName);
    string getLast(void);
    void setYear(string year);
    string getYear(void);
    void setGender(string gender);
    string getGender(void);
    //void printMActor();
    //void printFActor();

    Actor();  // 这是构造函数
    Actor(string first,string last,string year, string gneder);
public :
    string first;
    string last;
    string yr;
    string gd;
};

// 成员函数定义，包括构造函数
Actor::Actor(string firstName,string lastName, string year, string gender){
    this->first=firstName;
    this->last=lastName;
    this->yr=year;
    this->gd=gender;




}
Actor::Actor(void)
{
    cout << "Object is being created" << endl;
}

void Actor::setFirst( string firstName )
{
    first = firstName;
}

string Actor::getFirst( void )
{
    return first;
}

void Actor::setLast( string lastName )
{
    last = lastName;
}

string Actor::getLast( void )
{
    return last;
}

void Actor::setYear( string year )
{
    yr = year;
}

string Actor::getYear( void )
{
    return yr;
}

void Actor::setGender( string gender )
{
    gd = gender;
}

string Actor::getGender( void )
{
    return gd;
}
// 程序的主函数

