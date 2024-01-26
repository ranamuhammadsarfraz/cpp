#include <iostream>
using namespace std;

int main(){
 int xyz[4] = {1,2,3,4}; //each have int of 4 bytes so size is 4 * 5 then 20 bytes.

 cout << "\nThe size of array above is " << sizeof(xyz) << ".\n" << endl;
 
 //To get length divide size of array with data type size like for above array integer should be use. Below working example.

 cout << "\nThe length of above array is " << sizeof(xyz) / sizeof(int) << ".\n" <<  endl;

    return 0;
}