#include  <iostream>
#include <map>
using namespace std;

void mapAdd(){
map<string,long>  addressMap = { {"john",1234},{"david",345},{"mose",345} };
for (map<string,long>::iterator itr= addressMap.begin(); itr!=addressMap.end(); itr++){
    cout << itr->first << " : " << itr->second  << "\n";
}

//addressMap.emplace(addressMap.begin(),{"yuvi",787});

    addressMap.emplace(make_pair("test",111));
    addressMap["test"]++;
    cout << "\n After  addressMap.emplace(make_pair  \n";
    for (auto itr = addressMap.rbegin(); itr !=addressMap.rend(); itr++)
    {
        cout << itr->first << " : " << itr->second  << "\n";
        addressMap[itr->first]++;
    }
    cout << "\n After  addressMap[\"test\"]++ \n";
    for (auto itr = addressMap.rbegin(); itr !=addressMap.rend(); itr++)
    {
        cout << itr->first << " : " << itr->second  << "\n";
    }
}

void mapFind() {
    cout << " \n Map Find() \n";
    map<string, int> phone = {{"uv",  123},
                              {"vi",  456},
                              {"sam", 789}};
    for (auto itr = phone.begin(); itr != phone.end(); itr++) {
        if (itr->first == "vi") {
            phone["vi"] = 11223344;
            break;
        }

    }
    cout << endl;

    for (auto itr = phone.begin(); itr != phone.end(); itr++) {
        cout << itr->first << " : " << itr->second << endl;
    }
    bool flag = false;
    string search;
    do{
        cout << "\n Enter name for search : ";
        cin >> search;
        auto itr = phone.find(search);
        if(phone.find(search) == phone.end()){
        cout << "\n Name not found. Please try with correct name";
        flag = true;
        } else {
            cout << "\n Name is found. and The number is : " <<itr->second ;
            flag=false;
        }

    }while (flag);

}
int main(){
    cout << endl << " Map Programs \n";
    mapAdd();
    mapFind();
    return 0;
}