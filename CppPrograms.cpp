#include <iostream>
#include <map>
#include <cstring>
#include <list>
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
            cout << rem  << endl ;
            rev = rem + (rev*10);
            cout << rev << endl ;
            number = number/10;
            cout << number << endl ;
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
    char wordsFromDigits[] = {};
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
int main(){
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
    return 0;
}






















