/*
8. 编写一个程序，它使用一个 char 数组和循环来每次读取一个单词，直到用户输入 done 为止。
随后，该程序指出用户输入了多少个单词（不包括 done 在内）。下面是该程序的运行情况：
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.
您应在程序中包含头文件 cstring，并使用函数 strcmp() 来进行比较测试。*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{   
    char words[100][20]; // 增加单词存储长度以避免溢出
    int number =0;
    while (true)
    {
        cout << "请输入一个单词(输入done终止)： " << endl;
        cin >> words[number];
        if (!strcmp(words[number],"done"))break;
        number++;
    }
    cout << "You entered a total of " << number << " words." << endl;
    return 0;
    
}