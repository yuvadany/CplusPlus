#include <iostream>
#include <string>
using namespace std;

int main_test() {
    string foods = "Pizza";
    string &meal = foods;
    string* pizza= &foods;

    cout << foods << "\n";
    cout << meal << "\n";
    cout << pizza << "\n";
    cout << *pizza << "\n";
    *pizza = "idli";
    cout << "After pointer value change \n";
    cout << foods << "\n";
    cout << meal << "\n";
    cout << pizza << "\n";
    cout << *pizza << "\n";
    return 0;
}
