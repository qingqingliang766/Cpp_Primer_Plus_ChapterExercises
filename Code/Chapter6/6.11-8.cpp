/*
8. 编写一个程序，它打开一个文本文件，逐个字符地读取该文件，
直到到达文件末尾，然后指出该文件中包含多少个字符。*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("readwords.txt");
    if (!inFile.is_open())
    {
        cout << "文件未正常打开。" << endl;
        return 1;
    }
    int number = 0;
    int count = 0;
    char words;
    while(inFile.get(words))count++;
    cout << count << endl;
    inFile.close();
    return 0;
}