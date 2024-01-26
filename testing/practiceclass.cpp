#include <iostream>
using namespace std;

class MyClass{
   public:
    string city;
    string country;
    void myMethod(){
     cout << "\nMy Method!\n" << endl;
    }
    MyClass(){
     cout << "\nMy Constructor!\n" << endl; //Constructor executed when object of class is made.
    }
};

int main(){
    MyClass myObj1;
    return 0;
};