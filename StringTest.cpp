//
// Created by YP00801161 on 09/06/2023.
//

#include "StringTest.h"
#include <iostream>
#include <cstring>

using namespace std;

void charString() {
    cout << "\n ~~~~~ char String Program ~~~~~~~~ ... \n";
    char greetings[] = "hello";
    char char3[] = " World";
    char char4[] = "hello World";
    cout << greetings << endl;
    char char2[sizeof(greetings)];
    strcpy(char2, greetings);
    cout << endl << "  #### Strcpy #####" << endl;
    cout << " String Length of char2 " << strlen(char2) << endl;
    cout << "The string char2 : " << char2 << endl;
    strcat(char2, char3);
    cout << endl << "  #### strcat #####" << endl;
    cout << "The string char2 : " << char2 << endl;
    cout << " String Length of char2 " << strlen(char2) << endl;
    int  compResult = strcmp(char3, char4);
    cout << " \n String cHAR strchr between char3 and char4 is : " << compResult;

    char str1[] = "Metallica";
    char str2[] = "Metallica";

    // compare str1 and str2 lexicographically
    int result = strcmp(str1, str2);
if(result==0)
    cout << "\n "<<  str1 << " and " << str2 << " are same " ;

cout << endl;

}

void stringClass(){
cout << " \n string Class programs \n";
string str1 = "yuvaraj";
string str2 = "yuvaraj";
string str3 = "YUVARAJ";
if(str1.compare(str2) == 0)
    cout << endl << str1 << " and " << str2 << " are same.";
else
    cout << endl << str1 << " and " << str2 << " are not same.";

    transform(str3.begin(),str3.end(),str3.begin(), ::tolower);
    if(str1.compare(str3) == 0)
        cout << endl << str1 << " and " << str3 << " are same.";
    else
        cout << endl << str1 << " and " << str3 << " are not same.";

    str2 = str2 + " engineer ";
    if(str1.compare(str2) == 0)
        cout << endl << str1 << " and " << str2 << " are same.";
    else
        cout << endl << str1 << " and " << str2 << " are not same.";


    cout << " \n String size : ";
    cout << "\n str1 size = " << str1.size();
    cout << "\n str2 size = " << str2.size();
    cout << "\n str3 size = " << str3.size();
}

void stringFind(){
    cout << " \n String Find() \n";
    string name= "yuvaraj is an engineer";
    string find = "engineer";
    cout << "\n enter a word for search \n ";
    //cin >> find;
    cout << name.find(find);
}

int main (){
    cout << " \n String Programs \n " ;
   // charString();
    //stringClass();
    stringFind();
}