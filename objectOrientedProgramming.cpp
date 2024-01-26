//object oriented programming (oop) means creating object that contain data and function both, in simple programming, these are separate created in basic practice.
#include <iostream>
using namespace std;

class MyClass{ //it is basic class that can be used many times.
    public: //access specifiers, if it is not, private, no outside access.
     int age;
     string nameIs;
     void myMethod(){
        cout << "\nMy Method!\n" << endl;
     }
     MyClass(string name){ //constructor it calls when object of class is created.
        cout << "Name is " << name << "." << endl;
     }
};

int main(){

    MyClass person1("R.M.S"); //1st use, by creating first object of MyClass.
    person1.age = 29;
    person1.nameIs = "Rana Muhammad Sarfraz";

    MyClass person2("XYZ"); //2nd
    person2.age = 101;
    person2.nameIs = "Computer";

    cout << "\nPerson 1 name is " << person1.age << ", name is " << person1.nameIs << ".\n" << endl;

    cout << "\nPerson 2 name is " << person2.age << ", name is " << person2.nameIs << ".\n" << endl;

    person1.myMethod();
    return 0;
}

//practice classes and do study from access specifiers.