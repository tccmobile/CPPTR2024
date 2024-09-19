#include "Person.hpp"
#include <iostream>
using namespace std;

bool Person::isMinor(){
    if (age <18){
        return true;
    } else {
        return false;
    }
}

void Person::printMe()
{
     cout << getName() << "\'s age is " << getAge() << endl;
     if (isMinor()){
        cout << " and they are a minor. " <<endl;
    }
}

Person::Person()
{
    name = "John Doe";
    age = 50;
}

Person::Person(string newName, int newAge)
{
    name = newName;
    age = newAge;
}

string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

void Person::setAge(int newAge){
    age = newAge;
}
void Person::haveBirthday()
{
    age++;
}
// READ ONLY ATTRIBUTE?? Remove the setter
void Person::setName(string name){
    this -> name = name;
}
