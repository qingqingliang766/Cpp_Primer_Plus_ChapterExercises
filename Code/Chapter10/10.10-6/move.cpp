#include <iostream>
#include "move.h"

 // 将 x、y 设置为 a、b
Move::Move (double a, double b)
{
    x = a;
    y = b;
}

// 显示当前的 x、y 值
void Move::showmove () const
{
    using std::cout;
    cout << "Current x = " << x << " " << "Current y = " << y << "\n";
}

    // 该函数将 m 的 x 加到调用对象的 x 上得到新的 x，
    //将 m 的 y 加到调用对象的 y 上得到新的 y，创建一个用新 x、y 值初始化的新 move 对象并返回它
Move Move::add(const Move & m) const
{
    return Move(x + m.x, y + m.y);
}

// 将 x、y 重置为 a、b
void Move::reset (double a, double b)
{
    x = a;
    y = b;
}
    