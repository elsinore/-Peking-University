//
//  main.cpp
//  assignment_009_007
//
//  Created by 王紫仪 on 09/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n = 0;
    
    int a[15000] = { 0 };
    int middle = 0;
    while (1)
    {
        cin >> n;
        if (n == 0) break; // n为0时，跳出while循环。
        //用数组a记录数值
        for (int i = 0; i < n ;i++)
        {
            cin >> a[i];
        }
        //给数组排序,由小到大.
        for (int i = 0; i < n-1; i++)
            for (int j = i + 1; j < n;j++)
            {
                if (a[i] > a[j])
                {
                    int change = a[i];
                    a[i] = a[j];
                    a[j] = change;
                }
            }
        if (n % 2 != 0) //n是奇数
        {
            middle = a[(n + 1) / 2-1];  //中位数则为中间的数
        }
        else   //n是偶数
        {
            middle = (a[n / 2 - 1] + a[n / 2])/2;  //中位数则为中间两数的均值
        }
        cout << middle << endl;
    }  
    
    return 0;
}
