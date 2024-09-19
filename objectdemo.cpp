#include <iostream>
#include "Person.hpp"


using namespace std;


int main(){

    Person one;
    Person two("bob",12);

    

    one.setName("Carl");
    one.setAge(42);
    two.setName("Sue");
    two.setAge(17);

    // cout<< one;
   
    two.printMe();
    two.haveBirthday();
    two.printMe();


    return 0;
}
