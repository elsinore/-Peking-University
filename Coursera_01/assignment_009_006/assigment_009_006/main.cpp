//
//  main.cpp
//  assigment_009_006
//
//  Created by 王紫仪 on 09/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, m;
    cin >> n >> m;
    int number[500];
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }
    for (int i = 0; i < m; i++) {
        int temp = number[0];
        int temp1 = number[1];
        int temp2 = number[n - 1];
        for (int j = 1; j < n; ) {
            temp1 = number[j];
            number[j] = temp;
            temp = temp1;
            j++;
        }
        number[0] = temp2;
    }
    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            cout << number[i] << ' ';
        else
            cout << number[i] << endl;
    }    
    return 0;
}
