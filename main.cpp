#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;



#include <sstream>
#include <stdio.h>

#include <string>
#include "LinkedList.h"
#include "Movie.h"
#include "Actor.h"

int main ()
{
    ifstream in("a2q1.txt");
    string filename;
    string line;
    LinkedList list1;
    LinkedList list2;
    if(in) // 有该文件
    {
        char sentence[50]="";
        char sentence2[100]="";
        //char storage[50]="";
        //int count=0;
        string firstName="";
        string lastName="";
        string birth="";
        string gender="";

        while (getline (in, line)) // line中不包括每行的换行符
        {

            strcpy(sentence,line.c_str());
            char *item=strtok(sentence," ");

            while(item!=NULL){
                //cout << "fistname:"<<item <<'\n';
                firstName=item;
                cout << "fistname:"<<firstName <<'\n';
                item=strtok(NULL," ");
                cout << "lastname:"<<item <<'\n';
                lastName=item;
                item=strtok(NULL," ");
                cout << "birth:"<<item <<'\n';
                birth=item;
                item=strtok(NULL," ");
                cout << "gender:"<<item <<'\n';
                gender=item;
                list1.insert(new Actor(firstName,lastName,birth,gender));
                //cout <<"actor information load into linked list already"<<endl;
                item=strtok(NULL," ");
            }
            if(line.length()==0){

                break;
            }


        }
        cout <<'\n'<< "before "<<'\n' <<endl;

        while (getline (in, line)){
            strcpy(sentence2,line.c_str());
            char *item2=sentence2;
            cout << "movie name:"<<item2 <<'\n';
            string movieName=item2;
            getline (in, line);
            strcpy(sentence2,line.c_str());
            char *item3=strtok(sentence2," ");
            string year=item3;
            cout << "year:"<<item3 <<'\n';
            while(item3!=NULL){
                item3=strtok(NULL," ");
                cout << "first name:"<<item3 <<'\n';
                string first=item3;
                item3=strtok(NULL," ");
                cout << "last name:"<<item3 <<'\n';
                string last=item3;
                list2.insert(new Movie(movieName,year,first,last));
                item3=strtok(NULL," ");
                //cout <<list2.size()<< endl;
                //cout <<"movie information load into linked list already"<<endl;
            }


        }

    }
    else // 没有该文件
    {
        cout <<"no such file" << endl;
    }

    return 0;
}

