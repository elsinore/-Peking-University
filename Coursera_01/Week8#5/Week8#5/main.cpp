//
//  main.cpp
//  Week8#5
//
//  Created by 王紫仪 on 23/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
using namespace std;
int fun01(int num)
{
    
    int num_ge, num_shi, num_bai,sum;
    num_ge = num_shi = num_bai =sum= 0;
    num_bai = num / 100;
    num_shi = (num - num_bai * 100)/10;
    num_ge = num - num_bai * 100 - num_shi * 10;
    sum = num_ge + num_shi + num_bai;
    return sum;
}
int main()
{
    int n,sum;
    n = sum=0;
    cin >> n;
    for (int i = 10; i < n; i++)
    {
        sum = fun01(i);
        if (i%sum == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
