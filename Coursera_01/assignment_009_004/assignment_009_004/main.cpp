//
//  main.cpp
//  assignment_009_004
//
//  Created by 王紫仪 on 09/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
#include<iomanip>

using namespace std;

bool change(int a[5][5], int n, int m)
{
    bool flag = true;
    if ((n >= 0 && n <= 4) && (m >= 0 && m <= 4))
    {
        int  line_change[5] = { 0 };
        for (int i = 0; i < 5;i++) line_change[i] = a[n][i];
        for (int i = 0; i < 5; i++) a[n][i] = a[m][i];
        for (int i = 0; i < 5; i++) a[m][i] = line_change[i];
    }
    else
    {
        flag= false;
    }
    return flag;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int matrix[5][5] = { 0 };
    int m, n;
    m = n = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    cin >> n >> m;
    bool flag = change(matrix, n, m);
    if (flag)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << setw(4) << matrix[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "error" << endl;
    }
    
    return 0;
}
