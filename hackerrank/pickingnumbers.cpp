#include <bits/stdc++.h>
using namespace std;

int pickingNumbers(vector<int> a){ 
    //want to find longest subarray of elements who differ by at most 1
    //all elements need to only differ by at most 1
    for(int i = 0; i < a.size(); i++){
        vector<int> vec; vec.push_back(a[i]);
        for(int j = 0; j < a.size(); j++){
            int diff = abs(a[i] - a[j]);
            if(diff <= 1) vec.push_back(j);
        }
    }

   




    return 0;

}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> a = {4,6,5,3,3,1};
    cout << pickingNumbers(a) << endl;









    return 0;
}