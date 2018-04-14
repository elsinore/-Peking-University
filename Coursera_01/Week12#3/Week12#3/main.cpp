//
//  main.cpp
//  Week12#3
//
//  Created by 王紫仪 on 23/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>
int main()
{
    double point[10][2] = { 0 };   //存储所有点的坐标（x,y）
    double distance[50] = { 0 };  //记录每两个点之间的距离
    double result_max = 0;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> point[i][0] >> point[i][1];
    }
    int m = 0;
    for (int i = 0; i < n - 1; i++)          //对所有point向前两两组合，求出距离
        for (int j = i + 1; j < n; j++)
        {
            double result = sqrt((point[i][0] - point[j][0])*(point[i][0] - point[j][0]) + (point[i][1] - point[j][1])*(point[i][1] - point[j][1]));
            distance[m] = result;     //将距离记录在distance数组中
            m++;
        }
    for (int i = 0; i < 50; i++)
    {
        //cout << "distance:" << distance[i] << endl;  //调试用
        if (distance[i] > result_max) result_max = distance[i];
    }
    cout << fixed << setprecision(4) << result_max << endl;
    return 0;
}  
