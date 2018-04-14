//
//  main.cpp
//  assignment_009_001
//
//  Created by 王紫仪 on 09/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char s[80] = { 0 };
    int num_a, num_e, num_i, num_o, num_u;
    num_a=num_e= num_i= num_o= num_u=0;
    cin.getline(s, 80);
    for (int i = 0; i < 80; i++)
    {
        if (s[i] == 'a') num_a++;
        if (s[i] == 'e') num_e++;
        if (s[i] == 'i') num_i++;
        if (s[i] == 'o') num_o++;
        if (s[i] == 'u') num_u++;
    }
    cout << num_a << ' ' << num_e << ' '<<num_i << ' '<<num_o << ' '<<num_u << endl;
    return 0;
}
