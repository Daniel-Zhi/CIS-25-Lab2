#include <iostream>
using namespace std;

int main(){
   
    cout<< "Enter your favorite integer: ";
    int int1,temp;
    cin >> int1;
    temp = int1;
    int1 *= 2;
    int1 += 10;
    int1 /= 2;
    int1 -= temp;
    cout<< "Your magic number is: " << int1;
}
