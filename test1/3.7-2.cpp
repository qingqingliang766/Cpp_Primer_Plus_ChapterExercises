/*
编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用3个变量来存储这些信息。）
该程序报告其 BMI（Body Mass Index，体重指数）。为了计算 BMI，该程序以英寸的方式指出用户的身高
（1 英尺为 12 英寸），并将以英寸为单位的身高转换为以米为单位的身高（1 英寸 = 0.0254 米）。
然后，将以磅为单位的体重转换为以千克为单位的体重（1 千克 = 2.2 磅）。
最后，计算相应的 BMI——体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。
*/

/*
// practice 2
const double Inch2Meter = 0.254;
const double Kilo2Pound = 2.2;
void p3_2(void)
{
    double height_foot = 0.0;
    double height_inch = 0.0;
    double height_meter = 0.0;
    double weight_pound = 0.0;
    double weight_kilo = 0.0;
    double BMI = 0.0;
 
    cout << "Enter your height in foot and inch" << endl;
    cout << "First enter the foot: ";
    cin >> height_foot;
    cout << "Second enter the inch: ";
    cin >> height_inch;
 
    cout << "Enter you weight in pound: ";
    cin >> weight_pound;
 
    height_meter = (height_foot * Foot2Inch + height_inch) * Inch2Meter;
    weight_kilo = weight_pound / Kilo2Pound;
 
    BMI = weight_kilo / (height_meter * height_meter);
 
    cout << "Your BIM is " << BMI << endl;
}*/