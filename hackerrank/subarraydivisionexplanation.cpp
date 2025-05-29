#include <bits/stdc++.h>

using namespace std;


int func(vector<int> arr, int d, int m){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
      //if m = 3, we need to look two spaces ahead so its the current position + m - 1 to make sure final element in subarray is in bounds
        if(i + m - 1 < arr.size()){
            int sum = 0;
            //if all elements in the subarray are in bounds then we loop from our current position up to and including the end of the subarray 
            for(int j = i; j <= i + m - 1; j++){
                sum += arr[j];
            }
            if(sum == d){
                count++;
            }
        }
    }
    return count;


}




int main(){
    vector<int> arr = {1,4,3,5,0,3};
    int total = 8;
    int m = 3;
    cout << func(arr,total,m) << endl;
// lets say we are looking for 3 adjacent elements in an array which sum to 8






    return 0;
}
