#pragma once
using namespace std;
#include <string>
class Object 
{
public:
	virtual ~Object() = 0;
	//virtual void print() = 0;
	//virtual int getActorInfor(string fName,string lName, string movieName, int movieYear)=0;
    void setFirst(string firstName);
    string getFirst(void);
    void setLast(string lastName);
    string getLast(void);
    void setYear(string year);
    string getYear(void);
    void setGender(string gender);
    string getGender(void);
};
