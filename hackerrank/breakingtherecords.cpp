#include <bits/stdc++.h>

using namespace std;



vector<int> breakingRecords(vector<int> scores) {
    int min = scores[0], max = scores[0]; vector<int> ans;
    int mincount = 0; int maxcount = 0;
    for(int i = 1; i < scores.size(); i++){
        if(scores[i] < min){
            min = scores[i];
            mincount++;
        }
        else if(scores[i] > max){
            max = scores[i];
            maxcount++;
        }
            

    }
    ans.push_back(maxcount);
    ans.push_back(mincount);
    return ans;



}


int main(){
    vector<int> scores = {10, 5, 20, 20, 4, 5, 2, 25, 1};
    scores = breakingRecords(scores);
    for(int i : scores){
        cout << i << " ";
    }




    return 0;
}