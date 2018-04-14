//
//  main.cpp
//  assignment_008_002
//
//  Created by 王紫仪 on 25/06/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

//编程题＃2：骑车与走路
#include <iostream>
using namespace std;
int main()
{
    int n= 0;
    cin >> n;
    double s[50] = { 0 };
    double t_bike[50] = { 0 };
    double t_walk[50] = { 0 };
    for (int i = 0;i<n;i++)
    {
        cin >> s[i];
        t_bike[i] = s[i] / 3 + 27 + 23;
        t_walk[i] = s[i] / 1.2;
    }
    for (int i = 0; i < n; i++)
    {
        if (t_bike[i] < t_walk[i])
        {
            cout << "Bike" << endl;
        }
        else if (t_bike[i] > t_walk[i])
        {
            cout << "Walk" << endl;
        }
        else
        {
            cout << "All"<<endl;
        }
    }
    return 0;
}
