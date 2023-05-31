#include <iostream>
#include <map>

void factorial(int i);

void armstrong(int number);

void sumOfDigits(int number);

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
        int  rem, rev=0;
        int num = number;
        while(number!=0)
        {
            rem = number%10;
            rev = rem + (rev*10);
            number = number/10;
        }
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

int main(){
    twoDimensionArray();
    string str = "I am yuvaraj. and I have 2 kids";
    frequencyOfWords(str);
    string str2 = "ice ice cream mango and coconut tea coffee tea";
    frequencyOfWords(str2);
    reverseNumber(123);
    reverseNumber(8899);
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
    return 0;
}





