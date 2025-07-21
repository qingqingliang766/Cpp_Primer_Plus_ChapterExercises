/*编写一个程序，要求用户输入小时数和分钟数，在main（）函数中，将这两个值传递给一个void函数，画面以下面这样的
形式显示这两个值：
    Enter the number of hours: 9
    Enter the number of minutes: 28
    Time: 9:28
*/
 #include <iostream>
void show(int hours,int minutes);
 int main()
 {
    int hours;
    int minutes;
    std::cout << "请输入小时数" << std::endl;
    std::cin >> hours;
    std::cout << "请输入分钟数" << std::endl;
    std::cin >> minutes;
    show(hours,minutes);
    return 0;
 }
 void show(int hours,int minutes)
 {
    std::cout << "Enter the number of hours: " << hours << "\n";
    std::cout << "Enter the number of minutes: " << minutes << "\n";
    std::cout << "Time: " << hours << ":" << minutes;
    return;
 }