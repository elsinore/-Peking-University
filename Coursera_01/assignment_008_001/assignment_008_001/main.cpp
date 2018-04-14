//第八周
//编程题＃1：数字求和
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, num4, num5, num6,sum;
    num1= num2= num3= num4= num5=num6 =sum= 0;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
    if (num2 < num1) sum += num2;
    if (num3 < num1) sum += num3;
    if (num4 < num1) sum += num4;
    if (num5 < num1) sum += num5;
    if (num6 < num1) sum += num6;
    cout << sum<<endl;
    return 0;
}
