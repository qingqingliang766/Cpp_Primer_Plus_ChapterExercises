/*
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];  // 四个季度的销售额
        double average;          // 平均销售额
        double max;              // 最大销售额
        double min;              // 最小销售额
    };

    // 从数组ar中复制4个或n个（取较小值）元素到s的sales成员中，  
    // 并计算并存储所输入元素的平均值、最大值和最小值；  
    // sales中剩余的元素（如果有）设为0  
    void setSales(Sales & s, const double ar[], int n);

    // 交互式地收集4个季度的销售额，将其存储在s的sales成员中，  
    // 并计算并存储平均值、最大值和最小值  
    void setSales(Sales & s);

    // 显示结构s中的所有信息  
    void showSales(const Sales & s);
}
```

### 题目要求说明：  
4. 请基于上述名称空间编写一个由 **3 个文件** 组成的程序：  
   - **第一个文件（头文件）**：包含上述 `SALES` 名称空间的定义（结构和函数原型）。  
   - **第二个文件（源文件，如 `sales.cpp`）**：扩展 `SALES` 名称空间，实现 `setSales`（两个重载版本）和 `showSales` 函数的定义。  
   - **第三个文件（主程序，如 `main.cpp`）**：  
     - 声明两个 `Sales` 对象；  
     - 用 `setSales` 的 **交互式版本** 为第一个对象赋值（程序提示用户输入4个季度的销售额）；  
     - 用 `setSales` 的 **非交互式版本** 为第二个对象赋值（通过已有数组传入数据）；  
     - 调用 `showSales` 显示两个对象的内容（销售额、平均值、最大值、最小值）。*/