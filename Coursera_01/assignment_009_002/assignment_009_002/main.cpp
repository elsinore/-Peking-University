//
//  main.cpp
//  assignment_009_002
//
//  Created by 王紫仪 on 09/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[80] = { 0 };
    char s2[80] = { 0 };
    cin.getline(s1,80);
    cin.getline(s2, 80);
    char result = 0; //用0表示等于，-1表示s1小于s2，1表示s1大于s2
    for (int i = 0;i<80;i++)
    {
        //先同一将大写化成小写
        if (s1[i] >= 'A' && s1[i] <= 'Z') s1[i] += ('a' - 'A');
        if (s2[i] >= 'A' && s2[i] <= 'Z') s2[i] += ('a' - 'A');
        if (s1[i] == s2[i])
        {
            result = '=';
            continue;
        }
        else if (s1[i]>s2[i])
        {
            result = '>';
            break;
        }
        else
        {
            result = '<';
            break;
        }
    }
    cout << result << endl;
    return 0;
}
