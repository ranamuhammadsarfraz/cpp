#include <iostream>
using namespace std;

//base class

class BaseClass{
     private: //encapsulation
     string she = "Women";
 protected:
     string name = "Mr Silencer";
 public:
     string name_ = "Mr AiK";//variable
     void myFirstMethod(){//method
     cout << "\nPublic access specifier name is " << name_ << ".\n" << endl;
     }
     BaseClass(){//constructor
        cout << "\nHello it is a constructor.\n" << endl;
     }
};

//derived class

class DerivedClass:public BaseClass{
    public:
    string nme = name;//creating and value with protected value, opposite to not accessible anywhere private, it is only available in inherited class.
};

int main(){
  BaseClass myObj1;
  DerivedClass myObj2;
   myObj1.myFirstMethod();
   cout << "\nMy first access specifier indicate name as " << myObj2.nme << ".\n" << endl;
    return 0;
}