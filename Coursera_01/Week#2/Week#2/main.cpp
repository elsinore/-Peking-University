//
//  main.cpp
//  Week#2
//
//  Created by 王紫仪 on 23/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    int num;
    while (cin>>num)
        if (num%3==0&&num%5==0&&num%7==0)
        {
            cout << "3 5 7"<< endl;
        }
        else if (num % 3 == 0 && num % 5 == 0 && num % 7 != 0)
        {
            cout << "3 5" << endl;
        }
        else if (num % 3 == 0 && num % 5 != 0 && num % 7 == 0)
        {
            cout << "3 7" << endl;
        }
        else if (num % 3 != 0 && num % 5 == 0 && num % 7 == 0)
        {
            cout << "5 7" << endl;
            
        }
        else if (num % 3 == 0 && num % 5 != 0 && num % 7 != 0)
        {
            cout << "3" << endl;
        }
        else if (num % 3 != 0 && num % 5 == 0 && num % 7 != 0)
        {
            cout << "5" << endl;
        }
        else if (num % 3 != 0 && num % 5 != 0 && num % 7 == 0)
        {
            cout << "7" << endl;
        }  
        else  
        {  
            cout << "n" << endl;  
        }  
    return 0;  
}
