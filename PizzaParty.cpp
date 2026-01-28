#include <iostream>
using namespace std;

int main(){
    int num_people,num_pizza,num_per;
    cout<< "Input your number of people: ";
    cin >> num_people;
    cout<< "Input your number of slices of pizza: ";
    cin >> num_pizza;
    cout<< "Input your number of slices of pizza per person: ";
    cin >> num_per;
    int total_slices, total_pizzas, leftovers;
    total_slices = num_people * num_per;
    total_pizzas = total_slices / num_pizza + 1; 
    leftovers = total_pizzas * num_pizza - total_slices; 
    cout << "You need "<< total_pizzas << " pizzas for the party" << endl;
    cout << "There will be "<< leftovers <<" leftovers" << endl << endl;
    /*Challenge*/
    cout << "----------Challenge----------" << endl;
    int need_pizza, additional;
    need_pizza = total_slices / num_pizza;
    additional = total_slices - need_pizza * num_pizza;  
    cout << "You need "<< need_pizza << " pizzas for the party" << endl;
    cout << "There will be "<< additional << " additional slices";
}