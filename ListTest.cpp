#include <iostream>
#include <list>
using namespace std;

void listAdd() {
    cout << "\n List Add Options \n";
    list<string> nameList = {"john", "moses", "david"};
    for (list<string>::iterator itr = nameList.begin(); itr != nameList.end(); itr++) {
        cout << *itr << " ";
    }
    cout << "\n After emplace back and Front  Inserts \n";
    nameList.emplace_back("kumar");
    nameList.emplace_front("mayan");

    for (string name: nameList) {
        cout << name << " ";
    }

    nameList.reverse();

    cout << " \n After  nameList.reverse()  \n";

    for (string name: nameList) {
        cout << name << " ";
    }

    cout << " \n After  nameList.sort() \n";
    nameList.sort();
    for (string name: nameList) {
        cout << name << " ";
    }

    cout << "\n nameList.front() : " << nameList.front();
    cout << "\n nameList.back() : " << nameList.back();


    cout << "\n After insert \n " ;
    nameList.insert(nameList.end(),"ovidio");
    nameList.insert(nameList.begin(),"lutz");

    for (string name: nameList) {
        cout << name << " ";
    }
    cout << "\n After pop \n " ;
    nameList.pop_back();
    nameList.pop_front();
    for (string name: nameList) {
        cout << name << " ";
    }

    list<string> anotherList = {"myName"};
    anotherList.merge(nameList);
    cout << " \n merge  - anotherList \n";
    anotherList.emplace_front("moses");
    anotherList.insert(nameList.begin(),"lutz");
    for (string name: anotherList) {
        cout << name << " ";
    }
    anotherList.unique();
    cout << endl << " after anotherList.unique() \n";
    for (string name: anotherList) {
        cout << name << " ";
    }

}


int main_list(){
    cout << "\n List Programs \n";
    listAdd();
    return 0;
}

