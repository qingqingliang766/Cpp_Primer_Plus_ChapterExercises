/*3. 编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。1 度为 60 分，1 分等于 60 秒，请以符号常量的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。下面是该程序运行时的情况：
Enter a latitude in degrees, minutes, and seconds:  
First, enter the degrees: 37  
Next, enter the minutes of arc: 51  
Finally, enter the seconds of arc: 19  
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees  


// practice 3
void p3_3(void)
{
    int degrees = 0;
    int minutes = 0;
    int seconds = 0;
    double total = 0.0;
 
    cout << "Enter a latitude in degrees, minute and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minucts of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
 
    total = degrees + minutes / 60.0 + seconds / 3600.0;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << total << " degrees." << endl;
}

*/