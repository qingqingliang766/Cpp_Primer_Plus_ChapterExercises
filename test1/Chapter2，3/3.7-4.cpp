/*
4. 编写一个程序，要求用户以整数方式输入秒数（使用  long  或  long long  变量存储），
然后以天、小时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、每小时有
多少分钟以及每分钟有多少秒。该程序的输出应与下面类似：
Enter the number of seconds: 31600000  
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds


// practice 4
void p3_4(void)
{
    long long total_seconds = 0;
    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
 
    cout << "Enter the number of seconds: ";
    cin >> total_seconds;
 
    days = total_seconds / (24 * 60 * 60);
    hours = ((total_seconds % (24 * 60 * 60)) / (60 * 60));
    minutes = ((total_seconds % (60 * 60)) / 60);
    seconds = (total_seconds % 60);
 
    cout << total_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
}

*/
