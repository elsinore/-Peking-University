//
//  main.cpp
//  assignment_009_003
//
//  Created by 王紫仪 on 09/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char s[500] = { 0 };
    cin.getline(s, 500);
    int count = 0;       //count用来记录单词的长度
    int count_max = 0;   //count_max用来记录最长单词的长度
    int end = 0;
    int i = 0;//end用来记录最长单词的末尾位置
    while (i<500)
    {
        if (s[i] != ' '&& s[i] != '.' && s[i] != '\0')
        {
            count++;
            if (count > count_max)
            {
                count_max = count;
                end = i;
            }
            i++;
        }
        if (s[i] == ' ')
        {
            count = 0;
            i++;
        }
        if (s[i] == '.' || s[i] == '\0')
        {
            break;
        }
    }
    for (int i = end-count_max+1; i < end+1; i++)
    {
        cout << s[i];
    }
    cout << endl;
}
