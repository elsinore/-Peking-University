//
//  main.cpp
//  Week12#4
//
//  Created by 王紫仪 on 23/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int firstNum = 0, secondNum = 0;
    char operate = 0;
    cin >> firstNum >> secondNum >> operate;
    
    switch(operate)
    {
        case '+':cout << firstNum+secondNum << endl;break;
        case '-':cout << firstNum-secondNum << endl;break;
        case '*':cout << firstNum*secondNum << endl;break;
        case '/':if (secondNum == 0)        //除数为0的情况应该单独放在除法里</span>
            {
                cout << "Divided by zero!" << endl;
            }
            else
            {
                cout << firstNum/secondNum << endl;
            }
            break;
        default:cout << "Invalid operator!" << endl;break;
    }
    return 0;  
}
