//
//  main.cpp
//  assignment_009_008
//
//  Created by 王紫仪 on 09/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int L = 0, M = 0;
    cin >> L >> M;
    vector<int> sample(L+1);
    for (int i = 0; i < L+1; i++)
    {
        sample[i] = 1;
    }
    for (int i = 0; i < M; i++)
    {
        int start = 0, end = 0;
        cin >> start >> end;
        for (int j = start; j <= end; j++)
        {
            sample[j] = 0;
        }
    }
    int num = 0;
    for (int i = 0; i < L+1; i++)
    {
        num += sample[i];
    }
    cout << num << endl;
    return 0;
}
