#include "golf.h"
#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); // 设置控制台编码为 UTF-8
    
    const int MAX_GOLFERS = 10;
    golf golfers[MAX_GOLFERS]; 
    int count = 0;
    
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    golfers[count++] = ann;
    
    golf andy;
    setgolf(andy);
    golfers[count++] = andy;
    
    // 循环填充数组剩余位置
    std::cout << "\n请继续输入其他高尔夫选手信息（输入空姓名结束）：" << std::endl;
    
    while (count < MAX_GOLFERS) {
        std::cout << "选手 " << (count + 1) << ":" << std::endl;
        golf temp;
        if (setgolf(temp) == 0) {
            // 用户输入空字符串，结束循环
            break;
        }
        golfers[count++] = temp;
    }
    
    // 显示所有选手信息
    std::cout << "\n=== 所有高尔夫选手信息 ===" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << "选手 " << (i + 1) << ":" << std::endl;
        showgolf(golfers[i]);
        std::cout << std::endl;
    }
    
    return 0;
}