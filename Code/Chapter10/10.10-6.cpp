/*
下面是一个类声明：

class Move
{
private:
double x;
double y;

public:
Move (double a = 0, double b = 0); // 将 x、y 设置为 a、b
void showmove () const; // 显示当前的 x、y 值
Move add(const Move & m) const;
// 该函数将 m 的 x 加到调用对象的 x 上得到新的 x，将 m 的 y 加到调用对象的 y 上得到新的 y，创建一个用新 x、y 值初始化的新 move 对象并返回它
void reset (double a = 0, double b = 0); // 将 x、y 重置为 a、b
};

请提供成员函数的定义和测试这个类的程序*/