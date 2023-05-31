#include <iostream>
#include <map>

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

int main(){
    twoDimensionArray();
    string str = "I am from India India and I have few  more more things to say here";
    frequencyOfWords(str);
    reverseNumber(6754);
    return 0;
}

