//
//  main.cpp
//  week12#1
//
//  Created by 王紫仪 on 23/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
using namespace std;

bool judge(int year)
{
    bool flag = false;
    if (year % 4 == 0) //能被4整除
    {
        flag = true;
        if (year % 100 == 0 && year % 400 != 0) flag = false;//剔除能被100整除而不能被400整除
        if (year % 3200 == 0) flag = false;//剔除能被3200整除
    }
    return flag;
}
int main()
{
    int year;
    cin >> year;
    bool flag = judge(year);
    if (flag) cout << 'Y' << endl;
    else cout << 'N' << endl;
    return 0;
}
