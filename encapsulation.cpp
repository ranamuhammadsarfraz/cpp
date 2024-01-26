//Encapsulation means hiding sensitive data by using access specifiers as private, public , to hide and to show respectively. Below in class practicle example is written.
#include <iostream>
using namespace std;

class MyClass{
    public:
     string name = "XYZ";
    private:
     string itIs = "ETC";
};

int main(){
  MyClass myObj;
   cout<<myObj.name<<endl; //success
   cout<<myObj.itIs<<endl; //error
    return 0;
}

