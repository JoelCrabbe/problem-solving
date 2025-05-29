#include <bits/stdc++.h>

using namespace std;


void plusMinus(vector<int> arr){
    float pos = 0; float neg = 0; float zero = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > 0) pos++;
        else if(arr[i] < 0) neg++;
        else zero++;
    }
    printf("%.6f\n", pos);
    printf("%.6f\n", neg);
    printf("%.6f\n", zero);
}




int main(){

    vector<int> arr = {1,2,3,0,0,-4,-9};
    plusMinus(arr);
    return 0;
}
