//
//  main.cpp
//  Week8#4
//
//  Created by 王紫仪 on 23/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>

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
    if(find == false) {
        cout << "no" << endl;
    } else if (find == true){
        cout << "yes" << endl;
    }
    return 0;    
}
