// Online C++ compiler to run C++ program online
// Eduardo Tambris ROblero
// Activity 1: Arrays
// August 26, 2025
#include <iostream>
using namespace std;

int main() {
    int myElements[100];
   
    for (int i = 0; i < 100; i++){
    myElements[i] = i + 1;
    }
    
    cout << "The value of the 11th Element is = " << myElements[10] << endl;

    return 0;
}