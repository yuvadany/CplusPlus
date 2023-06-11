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


}

void strCompare(){
    cout << "\n String Compare \n";
    const char *str1 = "yuvaraj is an engineer";
    const char *str2 = "yuvaraj is an engineer";
    string str3  = "i am an indian";
    string str4  = "i am a indian";
    cout << endl << " String one :  " << str1 << endl;
    cout << endl << " String two :  " << str2 << endl;
    if (strcmp(str1,str2)==0)
        cout << "\n The  2 strings are same : ";
    else
        cout << "\n The 2 strings are different ";
    if(str3.compare(str4)==0)
        cout << "\n The  2 strings are same : ";
    else
        cout << "\n The 2 strings are different ";
}

int main (){
    cout << " \n String Programs \n " ;
    charString();
    strCompare();
}