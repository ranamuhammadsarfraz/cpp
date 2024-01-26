//reference is a variable that assign a variable the value of another variable.
//you can assign it by adding & operator before a variable name.
//writing it in cout you can get memory address.

#include <iostream>
using namespace std;

int main(){
    string name = "Rana Muhammad Sarfraz.\n";
    string &main = name; //reference
    string* ptr = &name; //pointer
    cout << "\nHere the main is " << main << endl;
    cout << "\n" << &main << "\n" << endl;
    cout << "\n" << ptr << "\n" << endl;
    return 0;
}