/*
3. 编写一个菜单驱动程序的雏形。该程序显示一个提供4个选项的菜单——每个选项用一个字母标记。
如果用户使用有效选项之外的字母进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为止。
然后，该程序使用一条switch语句，根据用户的选择执行一个简单操作。该程序的运行情况如下：
Please enter one of the following choices:
c) carnivore     p) pianist
t) tree          g) game
f
Please enter a c, p, t, or g: g
Please enter a c, p, t, or g: t
A maple is a tree.*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Please enter one of the following choices:\n";
    cout << "(c) carnivore     (p) pianist\n";
    cout << "(t) tree          (g) game\n";
    while(cin >> ch)
    {
        if (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
        {
            cout << "Please enter a c, p, t, or g: " << endl;
            continue;
        }
        else
        {
            switch (ch)
            {
            case 'c':
                cout << "A lion is a carnivore." << endl;
                break;
            case 'p':
                cout << "A pianist plays the piano." << endl;
                break;
            case 't':
                cout << "A maple is a tree." << endl;
                break;
            case 'g':
                cout << "Chess is a game." << endl;
                break;
            default:
                break;
            }
        }
        
    }
    
}