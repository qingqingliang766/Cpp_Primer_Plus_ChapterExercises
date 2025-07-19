//跟上个一样，但这次用string来实现
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string firstname;
    string lastname;
    cout << "请输入你的firstname" << endl;
    getline(cin,firstname);
    cout << "请输入你的lastname" << endl;
    getline(cin,lastname);
    cout << "你的姓名是： " << firstname << "," << lastname << endl;
    return 0;
}