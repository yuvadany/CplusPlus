#include  <iostream>
#include <map>
using namespace std;

void mapAdd(){
map<string,long>  addressMap = { {"john",1234},{"david",345},{"mose",345} };
for (map<string,long>::iterator itr= addressMap.begin(); itr!=addressMap.end(); itr++){
    cout << itr->first << " : " << itr->second  << "\n";
}

//addressMap.emplace(addressMap.begin(),{"yuvi",787});
}

int main(){
    cout << endl << " Map Programs \n";
    mapAdd();
    return 0;
}