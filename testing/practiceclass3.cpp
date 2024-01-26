#include <iostream>
using namespace std;

class IClass{
 public:
   string topic = "Write some method, a constructor.";
   void myMethod(){
    cout << "\nIt is returning nothing but printing.\n";
   }
   int myMethod2(){
    return 11+22;
   }
   IClass(){
    cout << "\nIt is constructor.\n";
   }
};

int main(){
    IClass myObj;
    myObj.myMethod();
    cout << "\n" << myObj.myMethod2() << "\n" << endl;
    return 0;
}