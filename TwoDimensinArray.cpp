#include <iostream>
using namespace std;
int main(){
    cout << " Array Test";
    string  cars[4]={"BMW","AUDI","TOYOTO","MARUTHI"};
    for (string carBrand:cars){
        cout << carBrand; cout << endl;
    }
    cout << " 2 Dimension Array Test \n" ;
    string names[4][2] = { {"yuvaraj","Palanisamy",},
                           {"Sankari","Jagadoss"},
                           {"Nivaan","Yuvaraj"},
                           {"Nitara","Yuvaraj"}
    };
    for (int i=0; i<4;i++)
    {
        for (int j=0; j<2; j++){
            cout << names[i][j];
            cout << endl;
        }
    }
    return 0;
}
