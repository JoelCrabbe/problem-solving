#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b){
    int maxsum = 0;
    for(int i = 0; i < keyboards.size(); i++){
        for(int j = 0; j < drives.size(); j++){
            int sum = keyboards[i] + drives[j];
            if(sum <= b && sum > maxsum){
                maxsum = sum;
            }
        }
    }
    return maxsum == 0 ? -1 : maxsum;
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> keyboards = {1,2,3};
    vector<int> drives = {5,8,2};
    int b = 10;
    cout << getMoneySpent(keyboards,drives,b) << endl;









    return 0;
}