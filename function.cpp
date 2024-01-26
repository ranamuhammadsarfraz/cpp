//function is a block of code that call its value when executed.

#include <iostream>
using namespace std;

void callIt(char text, int index){
 cout << "The argument of index " << index << " is " << text << "." << endl;
}

int main(){
    char arr[] = {'a','b','c','d'};
    for(int index = 0; index < sizeof(arr) / sizeof(char); index++){
      callIt(arr[index], index);
    }
    return 0;
}