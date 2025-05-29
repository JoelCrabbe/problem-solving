#include <bits/stdc++.h>

using namespace std;


int diagonaldifference(vector<vector<int>> arr){
    int lr = 0; int rl = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            lr += arr[i][j];
            break;
        }
    }
    int count = 1;
    for(int i = 0; i < arr.size(); i++){
        
        rl += arr[i][arr.size() - count];
        count++;
    }

return abs(lr - rl);
}


