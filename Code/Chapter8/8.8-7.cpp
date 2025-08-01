/*
清单8.14:
#include <iostream>

template <typename T>      // template A
void ShowArray(T arr[], int n);

template <typename T>      // template B
void ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = 
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

// set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Listing Mr. E's counts of things:\n";
// things is an array of int
    ShowArray(things, 6);  // uses template A
    cout << "Listing Mr. E's debts:\n";
// pd is an array of pointers to double
    ShowArray(pd, 3);      // uses template B (more specialized)
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    using namespace std;
    cout << "template A\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
    using namespace std;
    cout << "template B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] << " ";
    cout << endl;
}
7. 修改程序清单8.14，使其使用两个名为SumArray()的模板函数来返回数组元素的总和，
而不是显示数组的内容。程序应显示thing的总和以及所有debt的总和。
*/
// tempover.cpp -- template overloading
#include <iostream>
template <typename T>
T SumArray(T arr[], int n);
template <typename T>
T SumArray(T * arr[], int n);
struct debts
{
    char name[50];
    double amount;
};
int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = 
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

// set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    // 计算并显示things的总和
    int thing_sum = SumArray(things, 6);  // uses template A
    std::cout << "Mr. E's things sum: " << thing_sum << std::endl;

    // 计算并显示debts的总和
    double debt_sum = SumArray(pd, 3);    // uses template B
    std::cout << "Mr. E's debts sum: " << debt_sum << std::endl;
    return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

template <typename T>
T SumArray(T * arr[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += *arr[i];
    return sum;
}