#include <iostream>
#include <map>
#include <cstring>
#include <list>
#include <math.h>
#include <sstream>
#include <string.h>

void factorial(int i);

void armstrong(int number);

void sumOfDigits(int number);

void swapNumbers(int a, int b);

void numberToChar(int number);

void numberTriangle(int range);

void arrayToString();

void splitStringWords();

void decimal2Binary(int number);

void intToChar(int number);

void intToString(int number);

void listReverse();

void firstLastNumberSwap();

void numberOfDigitsOfSum(int i, int i1);

void numberSort();

void lowerToUpperCase();

void extractDigitFromString();

void HourMinuteSeparation(int i);

void sumOfDigitsOfRange(int x, int y);

void charPrint();

void change_letter();

void largestWord();

void sort_characters();

using namespace std;

void twoDimensionArray(){
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
}

void frequencyOfWords(string str){
        cout <<"\n\n Frequency of a Word \n\n";
        map<string, int> M;

        // String for storing the words
        string word = "";

        for (int i = 0; i < str.size(); i++) {

            // Check if current character
            // is blank space then it
            // means we have got one word
            if (str[i] == ' ') {

                // If the current word
                // is not found then insert
                // current word with frequency 1
                if (M.find(word) == M.end()) {
                    M.insert(make_pair(word, 1));
                    word = "";
                }
                    // update the frequency
                else {
                    M[word]++;
                    word = "";
                }
            }

            else
                word += str[i];
        }

        // Storing the last word of the string
        if (M.find(word) == M.end())
            M.insert(make_pair(word, 1));

            // Update the frequency
        else
            M[word]++;

        // Traverse the map
        // to print the  frequency
        for (auto& it : M) {
            cout << it.first << " - "
                 << it.second
                 << endl;
        }
    }

    void reverseNumber(int number){
        int   rev=0;
        double rem;
        int num = number;
        cout << endl;
        cout << "start\n" ;
        while(number!=0)
        {
            rem = number%10;
            rev = rem + (rev*10);
            number = number/10;
        }
cout << "end\n";
        cout<<"\nReverse of  " << num << " is "<<rev;
        cout<<endl;

}

void fibonacciSeries(int number){

    int n1=0,n2=1,n3,i;
    cout<< "\n\n Fibonacci Series for the below Range " << number <<" is : \n"; //printing 0 and 1
    cout<<n1<<" "<<n2<<" "; //printing 0 and 1
    for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
}
void primeNumber(int n){
    /*Prime number is a number that is greater than 1 and divided by 1 or itself.
    In other words, prime numbers can't be divided
    by other numbers than itself or 1. For example 2, 3, 5, 7, 11, 13, 17, 19, 23.... are the prime numbers.*/
    int   i, m=0, flag=0;
    m=n/2;
    for(i = 2; i <= m; i++)
    {
        if(n % i == 0)
        {
            cout<<"\n"<<n << " is not Prime number."<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
        cout << n << " is Prime number ."<<endl;
}

void palindrome (int number){
//A palindrome number is a number that is same after reverse. For example 121, 34543, 343
    int  r,sum=0,temp;
    temp=number;
    while(number>0)
    {
        r=number%10;
        sum=(sum*10)+r;
        number=number/10;
    }
    if(temp==sum)
        cout<< temp <<" is Palindrome."<<endl;
    else
        cout<<temp <<" is not Palindrome."<<endl;
}

void factorial(int number) {
    int i,fact=1;
    for(i=1;i<=number;i++){
        fact=fact*i;
    }
    cout<<"\nFactorial of " <<number<<" is: "<<fact<<endl;
}

void armstrong(int number) {
   /* Armstrong number is a number that is equal to the sum of cubes of its digits.
    For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.*/
    int r,sum=0,temp;
    temp=number;
    while(number>0)
    {
        r=number%10;
        sum=sum+(r*r*r);
        number=number/10;
    }
    if(temp==sum)
        cout<<endl << temp << " is Armstrong Number."<<endl;
    else
        cout<<endl <<temp << " is not Armstrong Number."<<endl;
}



void sumOfDigits(int number) {
    int  sum=0,m,temp;
    temp=number;
    while(number>0)
    {
        m=number%10;
        sum=sum+m;
        number=number/10;
    }
    cout<<endl << "Sum of digits of " << temp << " is : "  <<sum<<endl;
}
void swapNumbers(int a, int b) {
    cout<<"Before swap a= "<<a<<" b= "<<b<<endl;
    a=a*b; //a=50 (5*10)
    b=a/b; //b=5 (50/10)
    a=a/b; //a=10 (50/5)
    cout<<"After swap a= "<<a<<" b= "<<b<<endl;
}

void swapNumbersPlusMinus(int a, int b) {
    cout<<"\nPlus Minus Using \n Before swap a= "<<a<<" b= "<<b<<endl;
    a=a+b; //a=10 (5*10)
    b=a-b; //b=5 (50/10)
    a=a+b;
    cout<<"After swap a= "<<a<<" b= "<<b<<endl;
}



void numberTriangle(int range) {
    int i,j,k,l;
    cout<<"\n Number Triangle \n";
    for(i=1;i<=range;i++)
    {
        for(j=1;j<=range-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
        for(l=i-1;l>=1;l--)
        {
            cout<<l;
        }
        cout<<"\n";
    }
}


void arrayToString() {
    cout <<"\n Char to String \n";
    char char_array[] = {'J','A','V','A','T','P','O','I','N','T'};
    string j(char_array);
    cout << j <<endl;
}

void arrayToString3() {
    char char_array[] = {'Y', 'U', 'V', 'A', 'R', 'A', 'J', '-', 'B', 'E'};
    string j = char_array;
    cout << j << endl;
}

void arrayToString2() {
    cout <<"\n Char to String - Other Way \n";
    char char_array[] = {'Y','U','V','A','R','A','J','-','C','S','E'};
    int array_size = sizeof(char_array) /
                     sizeof(char);
    string j = "";
    int i;
    for(i = 0; i < array_size; i++)
    {
        /** retrieving and merging the value of character array on position 'i'*/
        j = j + char_array[i];
    }
    cout << j <<endl;
}



void splitStringWords() {
    char str[100] = "Learn how to split a string token  in C++ using the strtok() function."; // declare the size of string
    cout << " Split String: " <<endl;
    char *ptr; // declare a ptr pointer
    ptr = strtok(str, " , "); // use strtok() function to separate string using comma (,) delimiter.
    cout << " \n Split string using strtok() function: " << endl;
    // use while loop to check ptr is not null
    while (ptr != nullptr)
    {
        cout << ptr  << endl; // print the string token
        ptr = strtok (NULL, " , ");
    }
}

void decimal2Binary(int number) {
    int a[10], i;
    cout<<"Given Number  " << number <<endl;
    for(i=0; number>0; i++)
    {
        a[i]=number%2;
        number= number/2;
    }
    cout<<"Binary of the given number= ";
    for(i=i-1 ;i>=0 ;i--)
    {
        cout<<a[i];
    }
}

/*
void intToChar(int number) {

}
*/
void intToStringToChar(int number) {
    cout << endl << "int to String Program ";
    cout << endl << number << "\n After int to String Conversion : \n" ;
    string string_num = to_string(number);
    cout << " The string is : " << string_num;

    char char_str[string_num.size()];
    strcpy(char_str, string_num.c_str());    // or, pass `&s[0]`
    cout << "\n After string-char conversion  the value is : " <<char_str << endl;
    cout << "\n The string_num size " << string_num.size() ;
    cout << "\n The char size " << sizeof(char_str) << endl ;
    for (int i=0; i< sizeof(char_str); i++)
        cout <<  char_str[i] << " - ";
}

void charToInt(char char_num){
    cout << endl << "Char to int Conversion \n";
    // Subtracting 48 will produce desired results
    int num =  int(char_num) - 48 ;
    cout << num << endl;
         // Also subtracting '0' will result in same output
    int num_2 =  int(char_num - '0');
    cout << num_2 << endl;
}

void numberToWord(int number) {
    cout <<  " \n numberToWord of " << number << " is below \n ";
    long int sum=0,r;
  /*  while(number>0)
    {
        r=number%10;
        sum=sum*10+r;
        number=number/10;
    }
    number=sum;*/
    list<string> my_list;
    if (number ==0)
        my_list.push_front("Zero ");
    while(number>0)
    {
        r=number%10;
        switch(r)
        {

            case 1:
                my_list.push_front("one ");
                break;
            case 2:
                my_list.push_front("two ");
                break;
            case 3:
                my_list.push_front("three ");
                break;
            case 4:
                my_list.push_front("four ");
                break;
            case 5:
                my_list.push_front("five ");
                break;
            case 6:
                my_list.push_front("six ");
                break;
            case 7:
                my_list.push_front("seven ");
                break;
            case 8:
                my_list.push_front("eight ");
                break;
            case 9:
                my_list.push_front("nine ");
                break;
            case 0:
                my_list.push_front("zero ");
                break;
            default:
                cout<<"tttt";
                break;
        }
        number=number/10;
    }
    cout << "\n After digital to string conversion - the my_list value  \n";
    for (list<string>::iterator i=my_list.begin(); i!=my_list.end(); i++)
        cout << *i << " ";

}

void listReverse() {
    cout << "\n List Reverse Example \n";
    list<int> num_list = {1,2,3,4,5};
    for (int num : num_list)
        cout << num << " " ;
    cout << endl << "After List Reverse ";
    num_list.reverse();
    for (int num : num_list)
        cout << num << " " ;

}


void currentDateTime(){
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    cout << "\n\n Display the Current Date and Time :\n";
    cout << "----------------------------------------\n";
    cout << " seconds = " << (tPtr->tm_sec) << endl;
    cout << " minutes = " << (tPtr->tm_min) << endl;
    cout << " hours = " << (tPtr->tm_hour) << endl;
    cout << " day of month = " << (tPtr->tm_mday) << endl;
    cout << " month of year = " << (tPtr->tm_mon)+1 << endl;
    cout << " year = " << (tPtr->tm_year)+1900 << endl;
    cout << " weekday = " << (tPtr->tm_wday )<< endl;
    cout << " day of year = " << (tPtr->tm_yday )<< endl;
    cout << " daylight savings = " <<(tPtr->tm_isdst )<< endl;
    cout << endl;
    cout << endl;
    cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
    cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;
    cout << endl;
}

void stringOperations(){
    cout << "\n\n Show the manipulation of a string:\n";
    cout << " -------------------------------------\n";
    string txt = "welcome, w3resource";
    cout <<" The string:: "<< txt << endl;
    cout <<" The length of the string:: "<< txt.length() << endl;
    cout <<" The char at index 1 of the string:: "<< txt.at(1) << endl;
    cout <<" The char at index 1 of the string [using array ]:: "<< txt[1] << endl;
    cout <<" Is the string empty:: "<< txt.empty() << endl;
    cout <<" Retrieve the sub-string from 3rd position for 4 characters:: "<< txt.substr(3, 4) << endl;
    cout <<" The sub-string replace by 'went':: "<< txt.replace(3, 4, "went") << endl;
    cout <<" Append a string ' end' at last of the string:: "<< txt.append(" end") << endl;
    cout <<" Append a string ' end' at last of the string using operator:: "<< txt + " end" << endl;
    cout <<" The string ' insert ' inserting at 3rd position of the string:: "<< txt.insert(3, " insert ") << endl;

    string txt1;
    txt1 = txt;
    cout <<" The new string is:: "<< txt1 << endl;
}

void firstLastNumberSwap(int n) {
    int  first, last, sum, digits, nn, a, b;
    cout << "\n\n Find the number after swapping the first and last digits:\n";
    cout << "-------------------------------------------------------------\n";
    digits = (int)log10(n);
    first = n / pow(10, digits);
    last = n % 10;
    a = first * (pow(10, digits));
    b = n % a;
    n = b / 10;
    nn = last * (pow(10, digits)) + (n * 10 + first);
    cout << " The number after swaping the first and last digits are: " << nn << endl;
}

void numberOfDigitsOfSum(int x, int y) {
cout << "\n Number of Digits of the " << x <<" + " << y << " is : ";
        stringstream str1;
        str1 << x + y;
        cout << str1.str().size() << endl;
        cout << " The result : " << str1.str() << endl;
}

void numberSort() {
    int num[7] = {89,7,1,2,4,90,11};
    sort(num, num+7);
    cout << "\n NumberSort - Before Sorting\n";
    for (int i : num)
        cout << i << " ";
    cout << "\n  After Sorting \n";
    cout << " " << num[6]  << " " << num[5]  << " " << num[4]  << " " << num[3]  << " " << num[2] << " " << num[1] << " " << num[0];
}

void lowerToUpperCase() {
    string text = "the quick brown fox jumps over the lazy dog.";
    cout << "\n lowerToUpperCase \n  The original text  \n" << text;
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    cout << "\n after conversion \n" << text;
    cout << text << endl;
}


void extractDigitFromString() {
    cout << "\n Extract Digit From String  and add them \n ";
    string str1 = "2  chairs, 15 desks, 1 blackboard and 2 fans ";
    cout << " \n input string is :  \n " << str1;
    int sum_num = 0, num;

    for (int i = 0; i < (int)str1.size(); i++) {
        if (isdigit(str1[i])) continue;
        else {
            str1[i] = ' ';
        }

        stringstream abc(str1);
        while (abc >> num) {
            sum_num += num;
        }
    }
    cout << "\n Sum of all positive integers: " << sum_num << endl;
}

void HourMinuteSeparation(int num) {
    cout << "\n --- HourMinuteSeparation --- of " << num << " minutes\n";
    bool flag;
    int hr = 0;
    do
    {
        flag = false;
        if (num >= 60)
        {
            hr++;
            num -= 60;
            flag = true;
        }
    } while (flag);
    cout << "\nH:M " << hr << ":" << num << endl;
}

void sumOfDigitsOfRange(int x, int y) {
    cout << endl <<  " sumOfDigitsOfRange for " << x << " and " << y << " is :  ";
    int digit_sum = 0;
    for(int i = x; i <= y; ++i)
    {
        int p = i;
        while(p > 0)
        {
            digit_sum += p % 10;
            p /= 10;
        }
    }
    cout <<  digit_sum << endl ;
}

void stringReverse(){
    string str1 = "I am Yuvaraj";
    string str2 = str1,str3;
    cout << endl << " stringReverse " << endl;
    cout << str1;
    cout << "\n After Reverse \n";
    string temp_str = str1;
    int k=0;
    int index_pos = 0;
    for (int x = temp_str.length()-1; x >= 0; x--)
    {
        str1[index_pos] = temp_str[x];
        index_pos++;
    }
    cout << str1 << endl ;

    for (int j =str2.length()-1; j >=0; j--)
    {
        str3 [k] = str2[j];
        ++k;
    }
    cout << "after conversion str3";
    cout << str3;

}

void charPrint() {
    cout << " \n ~~~~~~~ Character Print  - Upper Case~~~~~~~~ \n";
    char ch;

    for (int i=65; i<=90; ++i)
        cout << char (i) << " ";

    cout << "\n ~~~~~~~~~~~~~  Character Print  - Lower Case ~~~~~~~~~~~~\n";
    for (int i=97; i<=122; ++i)
        cout << char (i) << " ";

    cout <<"\n";

    for (int i=91; i<=96; ++i)
        cout << char (i) << " ";

}

void change_letter() {
    cout << "\n ~~~~~~~~~~~~~~  change_letter ~~~~~~~~~~~~~~~~~ \n";
    string str = "aaabbbccc";
    cout << " input : " << str;
    int char_code;

    for (int x = 0; x < str.length(); x++)
    {
        char_code = int(str[x]);

        if (char_code == 122)
        {
            str[x] = char(97);
        }
        else if (char_code == 90)
        {
            str[x] = char(65);
        }
        else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
        {
            str[x] = char(char_code + 1);
        }

    }
    cout << "\n After letter got changed : " << str;
}

void Capitalize_first_letter(){
    string str = "india is my country";
    cout << "\n Capitalize_first_letter \n " << " The input String is : " << str;

    str[0]= toupper(str[0]);
    for (int i=1; i<str.length(); i++)
    {
        if(str[i-1] == ' ')
            str[i] = toupper(str[i]);
    }
    cout << " \n the Result : " << str;
}


void stringCompare(){
    cout << "\n String Compare \n";
    const char *str1 = "yuvaraj is an engineer";
    const char *str2 = "Sankari is an engineer";
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

void largestWord() {
    cout << endl << "Largest Word \n" ;
    char *ptr; // declare a ptr pointer
string sentence = "Yuvaraj is an engineer";
cout << "Input String is : " << sentence;
char chat_sen[sentence.length()];
 list<string> length_list;
for (int i=0; i <sentence.length(); i++){
    chat_sen[i] = sentence[i];
}
cout << endl << "The character Array : " << chat_sen << endl;
    ptr = strtok(chat_sen, " , ");
    while (ptr != 0) {
        length_list.push_front(ptr);
        // Use of strtok
        // go through other tokens
        ptr = strtok (NULL, " , ");
    }
    //cout << endl << " List items " << length_list << endl;
    length_list.reverse();

    for (string word : length_list)
        cout << word << " ";
}

void largestWord_2() {
cout << endl << " largestWord_2  \n";
string text = "Yuvaraj is an software coumpterScience Engineer";
cout << endl << "Given Text : " << text << endl;
string word;
for (int i=0; i<text.length()/2; i++){
    if(text[i] != ' ')
        word.push_back(text[i]);
}
cout << word << " - ";
}

void mapSam(){
cout << "\n Map Example \n" ;
map <string,int>  mapSam = {{"yuvaraj",7},{"is",2},{"an",2},{"engineer",8}};
list<int> list_num;
 int longest = 0;
    for (map<string,int>::iterator itr=mapSam.begin(); itr!=mapSam.end(); itr++)
    {
        list_num.push_front(itr->second);
        cout << itr->first << itr->second;
    }
    list_num.sort();
    cout << endl << "List after sorting \n";
    for (int i : list_num)
        cout << i <<  ", ";

    cout << endl;
   auto n  =  list_num.end();
    std::advance(n, 0);
    cout << ' ' << *n;
   /* for (auto it = list_num.begin(); it != list_num.end(); ++it)
        cout << ' ' << *it;*/
   //int  long_word = *n;
   //cout << "\n The Longest word : " <<long_word << endl;

}

void Longest_Word() {
    cout << "\n Longest_Word Program \n";
string text = "Yuvaraj is an engineer";
    string result_word, temp_str1;

    for (int x = 0; x < text.length(); x++)
    {
        if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x])<= 57)))
        {
            result_word.push_back(text[x]);
        }
        else
        {
            break;
        }
    }

    for (int x = 0; x < text.length(); x++)
    {
        if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57)))
        {
            temp_str1.push_back(text[x]);

            if (x + 1 == text.length() && temp_str1.length() > result_word.length())
            {
                result_word = temp_str1;
            }
        }
        else
        {
            if (temp_str1.length() > result_word.length())
            {
                result_word = temp_str1;
            }

            temp_str1.clear();
        }
    }

    cout << "The largest word from " << text << " is -> " << result_word;
}


void sort_characters() {
    cout << "\n sort_characters \n ";
string sent = "zxy";
char ch;
bool flag = false;
    cout << "\n before Sorting  - " << sent;

        flag = false;
for (int i=0; i<sent.length(); i++)
{
    if (sent[i]> sent[i+1])
    {
        ch = sent[i];
        sent[i]= sent[i+1];
        sent[i+1] = ch;
        flag = true;
    }

}
cout << "\n After Sorting  - " << sent;
}


void sort_characters_2(){
    cout << endl <<  sort_characters_2 << endl;
    bool flag;
    char ch;
string text = "xyzcba";
    do
    {
        flag = false;

        for (int x = 0; x < text.length() - 1; x++)
        {
            if (text[x] > text[x + 1])
            {
                ch = text[x];
                text[x] = text[x + 1];
                text[x + 1] = ch;
                flag = true;
            }
        }
    } while (flag);

    // Remove spaces
    string str;
    for (int y = 0; y < text.length(); y++)
    {
        if (text[y] != ' ')
        {
            str.push_back(text[y]);
        }
    }

    cout <<  str;
}
void intArraySum(){
cout << " \n int Array Sum \n";
int numArray[] = {12,56,-90,56,88,789,-10};
int positiveSum=0;
int negativeSum=0;
int length = sizeof (numArray)/sizeof(int);
    cout << "\n Array length : " << length << endl ;
    for (int i=0; i<length; i++){
        if (numArray[i] > 0){
            positiveSum+=numArray[i];
        }else if (numArray[i] < 0){
            negativeSum+=numArray[i];
        }
    }

    cout << "\n positiveSum : " << positiveSum ;
    cout << "\n negativeSum : " << negativeSum << endl;
}

void wordFrequency(){
    cout << "\n Word Frequency \n";
    map<string,int> wordCountMap ;
    string word = "";
    string text = "I am coming from india I am an engineer I work in techm";
    for (int i=0; i<text.length(); i++){
        if (text[i]== ' '){
        if(wordCountMap.find(word) == wordCountMap.end()){
            wordCountMap.insert(make_pair(word,1));
            word = "";
        }else {
            wordCountMap[word]++;
            word = "";
        }
        }else {
            word+=text[i];
        }
    }

    if(wordCountMap.find(word) == wordCountMap.end()){
        wordCountMap.insert(make_pair(word,1));
    }else {
        wordCountMap[word]++;
    }
    cout << endl << "The Given Text :" << text << endl;
    cout << "The word frequency is below \n" ;
    for (auto itr=wordCountMap.begin(); itr!=wordCountMap.end(); ++itr){
        cout << itr->first << " : " << itr->second << " ";
    }


}

int main_cpp(){
    intArraySum();
    wordFrequency();
    twoDimensionArray();
    string str = "I am yuvaraj. and I have 2 kids";
    frequencyOfWords(str);
    string str2 = "ice ice cream mango and coconut tea coffee tea";
    frequencyOfWords(str2);
    reverseNumber(123);
    fibonacciSeries(3);
    primeNumber(19);
    primeNumber(20);
    palindrome(141);
    palindrome(116);
    factorial(5);
    factorial(3);
    armstrong(153);
    armstrong(3);
    armstrong(1);
    armstrong(11);
    sumOfDigits(123);
    sumOfDigits(111);
    sumOfDigitsOfRange(11,13);
    swapNumbers(10,20);
    swapNumbersPlusMinus(39,78);
    numberToWord(7687);
    numberToWord(4432);
    numberToWord(1500);
    numberToWord(0);
    numberTriangle(9);
    arrayToString();
    arrayToString2();
    arrayToString3();
    splitStringWords();
    decimal2Binary(56);
    intToStringToChar(2300);
    charToInt('5');
    charToInt('8');
    listReverse();
    mapSam();
    currentDateTime();
    stringOperations();
    firstLastNumberSwap(12345);
    //vectorDecending();
    numberOfDigitsOfSum(1,3);
    numberOfDigitsOfSum(1,101);
    numberSort();
    lowerToUpperCase();
    extractDigitFromString();
    HourMinuteSeparation(120);
    HourMinuteSeparation(67);
    HourMinuteSeparation(167);
    stringReverse();
    charPrint();
    change_letter();
    Capitalize_first_letter();
    stringCompare();
    largestWord();
    largestWord_2();
    Longest_Word();
    sort_characters();
    sort_characters_2();
    return 0;
}










































