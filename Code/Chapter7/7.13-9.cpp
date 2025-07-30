
//9. 练习：编写处理模板和结构的函数，补全以下程序框架：
#include<iostream>
using namespace std;
const int LEN = 30;
struct student
{
    char fullname[LEN];   // 全名
    char hobby[LEN];      // 爱好
    int ooplevel;         // 水平
};

// getinfo() 参数：  
//   - student 结构体数组的首元素指针；  
//   - 数组长度（int）。  
// 功能：  
//   - 提示用户输入学生数据，填满数组或遇到“空行姓名”时停止；  
//   - 返回实际填充的数组元素个数。  
int getinfo(student pa[], int n);

// display1() 参数：student 结构体（按值传递），显示其内容。  
void display1(student st);

// display2() 参数：student 结构体的地址（const 修饰，避免修改），显示其内容。  
void display2(const student* ps);

// display3() 参数：  
//   - student 结构体数组的首元素指针；  
//   - 实际填充的元素个数（int）。  
// 功能：显示数组中所有学生的信息。  
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    // 清除输入缓冲区换行符
    while (cin.get() != '\n')  
        continue;  

    // 动态分配 student 数组
    student* ptr_stu = new student[class_size];  
    // 调用 getinfo 填充数据，返回实际输入的学生数
    int entered = getinfo(ptr_stu, class_size);  
    // 显示所有学生信息
    display3(ptr_stu, entered);
    // 释放内存
    delete[] ptr_stu;  
    cout << "Done\n";
    return 0;
}

// 示例调用（框架内补充函数实现后，可遍历调用）：  
// display1(ptr_stu[i], entered);  
// display2(&ptr_stu[i]);  
// display3(ptr_stu, entered);  
// delete[] ptr_stu;  
// return 0;  
// }
int getinfo(student pa[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "请输入你的姓名： " << endl;
        cin >> pa[i].fullname;
        cout << "请输入你的爱好： " << endl;
        cin >> pa[i].hobby;
        cout << "请输入你的水平： " << endl;
        cin >> pa[i].ooplevel;
        count++;
    }
    
    return count;
}

void display1(student st)
{
    cout << "显示其内容" << endl;
    cout << st.fullname << endl;
    cout << st.hobby << endl;
    cout << st.ooplevel << endl;
}

void display2(const student* ps)
{
    cout << "显示其内容" << endl;
    cout << ps->fullname << endl;
    cout << ps->hobby << endl;
    cout << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << pa[i].fullname << endl;
        cout << pa[i].hobby << endl;
        cout << pa[i].ooplevel << endl;
    }
}

