#include <bits/stdc++.h>


using namespace std;

vector<int> nextMultiple(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        int next5 = (arr[i] / 5 + 1) * 5; //this formula find the next multiple of 5 
        if(abs(next5 - arr[i] < 3) && arr[i] >= 38){
            arr[i] = next5;
        }
    }
    
    return arr;

}


