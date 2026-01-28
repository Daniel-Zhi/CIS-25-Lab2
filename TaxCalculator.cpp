#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double rate = 0.075;
    double price;
    double sales_tax;
    double total;
    cout << "Please enter the price of your item: ";
    cin >> price;
    sales_tax = price * rate;
    total = price + sales_tax;
    cout << fixed << setprecision(2) << "Your original price is " << price <<"\nYour sales tax amount is: " << sales_tax << "\nYour final total cost is: " << total;
}
