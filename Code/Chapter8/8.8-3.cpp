/*
3. 编写一个函数，它接受一个指向 string 对象的引用用作参数，
并将该 string 对象的内容转换为大写，为此可使用表 6.4 描述的 toupper() 函数。
然后编写一个程序，它通过使用一个循环让您能够用不同的输入来测试这个函数，该程序的运行情况如下：
Enter a string (q to quit): go away
GO AWAY
Enter a string (q to quit): good grief!
GOOD GRIEF!
Next string (q to quit): q
Bye.
*/
#include <iostream>
#include <string>
#include <cctype>
void shiftwords(std::string& SW);
int main()
{
    std::string words;
    int first = 0;
    while (true)
    {
        
        if (0 == first)
        {
            std::cout << "Enter a string (q to quit):" << std::endl;
            first++;
            getline(std::cin,words);
            // std::cin.ignore();
            if(words == "q")
            {
                std::cout << "Bye.\n" ;
                break;
            }
            shiftwords(words);
        }
        else
        {
            std::cout << "Next string (q to quit):" << std::endl;
            getline(std::cin,words);
            // std::cin.ignore();
            if(words == "q")
            {
                std::cout << "Bye.\n" ;
                break;
            }
            shiftwords(words);
        }
        
    }
    return 0;
}
void shiftwords(std::string& SW)
{
    for (int i = 0; i < SW.size(); i++)
    SW[i] = toupper(SW[i]);
    std::cout << SW << std::endl;
}