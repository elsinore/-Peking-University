//
//  main.cpp
//  assignment_008_003
//
//  Created by 王紫仪 on 25/06/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

//编程题＃3：买房子
#include <iostream>
using namespace std;
int main()
{
    double n, k, total;
    n = k = 0;
    while (cin >> n >> k)
    {
        total = 200;
        bool success = 0;
        for (int i = 1; i <= 20; i++)
        {
            if (i*n >= total)
            {
                success = 1;
                cout << i << endl;
                break;
            }
            total *= (1 + k/100);
        }
        if (success == 0)
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
