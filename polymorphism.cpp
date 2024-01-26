//Polymorphism occurs when lot of classes get attached via inheritance. Like in below example there is a base class then other derived class, different names with same named inner method.


#include <iostream>
using namespace std;

class Hello{ //statment in it just for this lecture.
   public:
    void myHello(){
        cout << "Hey say hello to your father" << endl;
    }
};

class Hi:public Hello{ //derived class
    public:
    void myHello(){
        cout << "Hey say hi to your father" << endl;
    }
};

class Asslam0Aliakum:public Hello{
    public:
    void myHello(){
     cout << "Hey say asslam-o-aliakum to your father" << endl;
    }
};


int main(){
     Hello myHello;
     Hi myHi;
     Asslam0Aliakum myAsslam0Aliakum;

     myHello.myHello();
     myHi.myHello();
     myAsslam0Aliakum.myHello();

    return 0;
}