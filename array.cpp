#include <iostream>
using namespace std;

int main(){
    string xyz[4] = {"Hello", "Asslam - o - Aliakum", "Hi", "Holla"};
    cout << "The value of first array is " << xyz[0] << ".\n" << endl;
    cout << "The second value of array is " << xyz[1] << ".\n" << endl;

    for (int i = 0; i < 4; i++){
    cout << "\nThe index " << i << " value is " << xyz[i] << ".\n" << endl;
    }

    return 0;
}

// Learn classes next day.