#include <iostream>
#include "list.h"
#include <Windows.h>

void printItem(Item &item) {
    std::cout << item << " ";
}

int main() 
{   
    SetConsoleOutputCP(65001);
    List myList;
    std::cout << "添加元素: ";
    for (int i = 0; i < 10; i++) 
    {
        myList.add(i);
        std::cout << i << " ";
    }
    std::cout << "\n(尝试添加失败，因为列表已满)\n";


    std::cout << "\n列表状态:\n";
    std::cout << "是否为空: " << (myList.isempty() ? "是" : "否") << "\n";
    std::cout << "是否已满: " << (myList.isfull() ? "是" : "否") << "\n";


    std::cout << "\n列表内容: ";
    myList.visit(printItem);

    return 0;
}
