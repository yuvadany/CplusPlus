#include <iostream>
#include <vector>
using namespace std;
void creation(){
    vector<int> vect;
    vector<int> vect2 = {2,22,222,31};
    vect.push_back(1);
    vect.push_back(11);
    vect.push_back(111);
    vect.push_back(21);
    cout << endl << " Vect1 \n";
    for (vector<int>::iterator itr= vect.begin(); itr!=vect.end(); ++itr){
        cout <<  *itr << " , ";
    }  cout<< endl;
    cout << endl << " Vect2 \n";
    for (vector<int>::iterator itr= vect2.begin(); itr!=vect2.end(); ++itr){
        cout <<  *itr << " , ";
    }cout<< endl;
    cout <<  "\n vect.at(2) : " << vect.at(2);
    cout <<  "\n vect.at(3) : " << vect.at(3);

    cout << endl << " After Swap : " ;
    vect.swap(vect2);
    cout << endl << " Vect1 \n";
    for (vector<int>::iterator itr= vect.begin(); itr!=vect.end(); ++itr){
        cout <<  *itr << " , ";
    }cout<< endl;
    cout << endl << " Vect2 \n";
    for (vector<int>::iterator itr= vect2.begin(); itr!=vect2.end(); ++itr){
        cout <<  *itr << " , ";
    } cout<< endl;

cout << " ~~~~~ String Vector Example ~~~~~  \n";
    vector<string> fruits = {"mango","Apple","banana","grapes","coconut"};

    for (int i=0; i< fruits.size(); i++){
        cout << fruits[i] << " , ";
    }

    cout << "\n fruits.front() : " <<  fruits.front();
    cout << "\n fruits.back() : " <<  fruits.back();
    fruits.erase(fruits.begin()+2);
    cout << "\n fruits.erase(fruits.begin()+2);\n";
    for (int i=0; i< fruits.size(); i++){
        cout << fruits[i] << " , ";
    }

    fruits.pop_back();
    cout << "\n After fruits.pop_back() \n";
    for (int i=0; i< fruits.size(); i++){
        cout << fruits[i] << " , ";
    }


    cout << "\n fruits.size() " << fruits.size() << endl;
    fruits.clear() ;
    cout <<  " After fruits.clear()";
    cout << "\n fruits.size() " << fruits.size() << endl;
    fruits.emplace(fruits.begin(),"Apple");
    fruits.emplace(fruits.end(),"Mango");
    fruits.emplace(fruits.end(),"PineApple");
    fruits.emplace(fruits.end(),"Guva");

    fruits.emplace_back("coconut");
    cout << " \n After  fruits.emplace(fruits.begin(),\"Apple\"); \n";
    cout << " fruits.size() = " << fruits.size() << endl;
    cout << " The Fruits Vector : \n";
    for (int i=0; i<fruits.size(); i++){
        cout << fruits[i] << " ";
    }
    cout << " \n rbegin and rend  - reverse iterator \n";
    for (vector<string>::reverse_iterator  itr = fruits.rbegin(); itr!=fruits.rend(); ++itr )
    {
        cout << *itr <<  "  ";
    }
}

void vectorToArray(){
    vector<string> emp = {"John","Abraham","david","mose"};
    cout << "\n vectorToArray \n" ;
    for (int  i = 0; i<emp.size() ;  i++){
        cout <<emp[i] << " ";
    }

cout << "\n After emp.data() ";
string *k = emp.data();
    for (int  i = 0; i<emp.size() ;  i++) {
        cout << *k << " ";
    }
}

int main_vector(){
    cout << "\n Vector Programs \n";
    creation();
    vectorToArray();
}