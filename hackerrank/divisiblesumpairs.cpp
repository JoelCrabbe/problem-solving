#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar){
    int count = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i + 1; j < n; j++){
            sum = ar[i] + ar[j]; //placing the if statement outside the inner for loop means it is only checking if the final sum of each iteration is divisible by 3
            if(sum % k == 0) count++;
        }
        
    }
    return count;
}

int main(){
    vector<int> ar = {1,3,2,6,1,2};
    int k = 3; 
    int n = ar.size();
    cout << divisibleSumPairs(n,k,ar) << endl;





    return 0;
}
