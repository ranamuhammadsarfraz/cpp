#include <iostream>
using namespace std;

//Introduction of a random personality.

class ClassIs{
 public:
  string name, residence, occupation, gender;
  int age;
};

int main(){
 ClassIs myObj;

  cout << "\nWhat is your name?\n" << endl;
  getline(cin, myObj.name);
  cout << "\nWhere you reside?\n" << endl;
  getline(cin,myObj.residence);
  cout << "\nWhat is your occupation?\n" << endl;
  getline(cin,myObj.occupation);
  cout << "\nWhat is your Gender?\n" << endl;
  getline(cin,myObj.gender);
  cout << "\nWhat is your age?\n" << endl;
  cin >> myObj.age;

  //
  cout << "\nIntroduction of the personality is:" << endl;
  cout << "\nName: " << myObj.name << endl;
  cout << "\nResidence: " << myObj.residence << endl;
  cout << "\nOccupation: " << myObj.occupation << endl; 
  cout << "\nGender: " << myObj.gender << endl;
  cout << "\nAge: " << myObj.age << "\n" << endl;
    return 0;
}

