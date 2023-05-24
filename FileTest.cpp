#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and open a text file
    cout <<"\n";
    cout <<"File Test - writing and Reading";
    cout <<endl;
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile <<'\n';
    MyFile << "Files can be tricky, but it is fun enough!";
    MyFile <<endl;
    MyFile << "Peter was a small boy. He lived in Holland";
    MyFile <<endl;
    for (int i=1; i<=10; i++)
    {
        MyFile << i;
        MyFile << endl;
    }

    // Close the file
    MyFile.close();
    string myText;

// Read from the text file
    ifstream MyReadFile("filename.txt");

// Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        cout << myText; cout << endl;
    }

// Close the file
    MyReadFile.close();
}