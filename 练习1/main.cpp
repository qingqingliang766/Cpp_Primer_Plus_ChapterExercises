#include <iostream>
#include <fstream>

int main()
{
    using namespace std;
    ofstream outFile;

    char word [50];

    cout << "please enter your words:" << endl;
    cin.getline(word,50);
    cout << "Yuo words is:" << word << endl;
    outFile.open("file.txt");
    outFile << word << endl;


    return 0;
}