//Inheritance in programming (oop) means, inheriting base class in derived class. That mean merging first with second class.

#include <iostream>
using namespace std;

class MyClass{
 public:
 string itIs = "xyz";
};

class MyClass2: public MyClass{ //with comma (,) you can add multiple class.
};

int main(){
 MyClass2 myObj;
 cout << myObj.itIs << endl;
    return 0;
}