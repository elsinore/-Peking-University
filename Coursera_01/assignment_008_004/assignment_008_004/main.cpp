//
//  main.cpp
//  assignment_008_004
//
//  Created by 王紫仪 on 25/06/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//


//编程题＃4：找和为K的两个元素

#include<iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    bool find = false;
    int i,j;
    int number[300];
    for ( i = 0; i < n; i++) {
        cin >> number[i];
    }
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            if ((i!= j)&&(number[i] + number[j] == k)) {
                find = true;
                break;
            }
        }
    }
    if(find ==false)    
        cout << "no" << endl;    
    if (find == true)    
        cout << "yes" << endl;    
    return 0;    
}  
