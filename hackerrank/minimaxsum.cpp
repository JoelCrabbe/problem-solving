#include <bits/stdc++.h>

using namespace std;


void miniMaxSum(vector<int> arr) {
    arr = sort(arr);
    int min = 0, max = 0;
    for(int i = 0; i < 4; i++){
        min += arr[i];
    }
    for(int i = 1; i < 5; i++){
        max += arr[i];
    }
    
    cout << min << " " << max << endl;

}


