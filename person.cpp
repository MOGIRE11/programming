 /*QUESTION: -> Create a Person class that includes fields for last name, first name, and zip code. Include
a default constructor that initializes last name, first name, and zip code to “X” if no
arguments are supplied. Also include a display function. Write a main()function that
instantiates and displays two Person objects: one that uses the default values, and one
for which you supply your own values. */

#include <iostream>
using namespace std;

class person
 {
 private:
    string last_name,first_name,zipcode;
 public:
    ~person();
    person();
    person(string,string,string);
    void display();
 };


person::~person(){}
person::person()
{
    last_name="x";
    first_name="x";
    zipcode="x";
}

person::person(string l,string f,string z)
{
    last_name=l;
    first_name=f;
    zipcode=z;
}

void person::display()
{

    cout<<"~~~ Person details ~~~ \n";
    cout<<"Last name: "<<last_name<<endl;
    cout<<"First name: "<<first_name<<endl;
    cout<<"Zipcode: "<<zipcode<<endl;
    cout<<endl;
}

int main()
{
   person A,B("John","Doe","MMU");
   A.display();
   B.display();
    return 0;
}
