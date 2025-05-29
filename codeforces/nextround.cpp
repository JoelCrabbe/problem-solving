#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    int count = 0;
    cin >> n >> k;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int score;
        cin >> score;
        vec.push_back(score);
    }
    int kth = vec[k - 1];
    for(int i = 0; i < n; i++){
        if(vec[i] >= kth && vec[i] > 0) count++;
   }

    cout << count << endl;
        

    return 0;
}