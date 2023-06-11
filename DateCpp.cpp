#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;


void currentTime(){
    time_t current_dt = time(0);
    char* result = ctime(&current_dt);

    cout << "The current date and time is:\n" << result << endl;
}

void year_to_century(int year){
    cout << "\n  Year to Century \n" ;
   double cent =   floor((year-1)/100+1);
   cout << endl << " Year : " << year << " Century : " << cent;
}
void leapYear(int year){
cout << endl << " ~~~~~~~~~~ Leap Year ~~~~~~~~~~~ \n" ;
bool isLeap = (year%400 ==0) || (year%4==0);
if (isLeap)
cout << "/The given Year " << year << " is a Leap year \n" ;
else
    cout << "/The given Year " << year << " is not a Leap year \n" ;
}

int main_test_date(){
currentTime();
year_to_century(2000);
year_to_century(1901);
year_to_century(1800);
year_to_century(1789);
year_to_century(2001);
leapYear(2020);
leapYear(2019);
leapYear(2023);
leapYear(2000);
}

