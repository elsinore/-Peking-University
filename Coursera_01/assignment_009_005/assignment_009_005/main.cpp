//
//  main.cpp
//  assignment_009_005
//
//  Created by 王紫仪 on 09/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    cin >> n;
    int count = 0;  //记录异常细胞个数
    int matrix[100][100] = {0};
    for (int i = 0; i < n; i++)      //将数值记录进二维数组
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    for (int i = 1; i < n - 1; i++) //遍历数组，与上下左右比较
        for (int j = 1;j<n-1;j++)
        {
            if ((matrix[i - 1][j] - matrix[i][j]) >= 50 && (matrix[i + 1][j] - matrix[i][j]) >= 50
                && (matrix[i][j - 1] - matrix[i][j]) >= 50 && (matrix[i][j + 1] - matrix[i][j]) >= 50)
            {
                count++;
            }
        }
    cout << count<< endl;
    return 0;
}
