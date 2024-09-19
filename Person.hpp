#ifndef TROBJECTS
#define TROBJECTS

#include <string>
using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(); // default
    Person(string,int);
    string getName();
    int getAge();
    void setName(string);
    void setAge(int);
    void haveBirthday();
    bool isMinor();
    void printMe();
    
};

#endif