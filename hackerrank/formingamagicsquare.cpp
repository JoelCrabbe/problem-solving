#include <bits/stdc++.h>
using namespace std;

//Did not enjoy this question at all and it also has a O(n^3) time complexity

int formingMagicSquare(vector<vector<int>> s){
    //there are 8 matrices which fit the constraint that sum of rows,columns and diagonals equal one number
     vector<vector<vector<int>>> matrices = {
        {{8,3,4}, {1,5,9}, {6,7,2}},
        {{6,1,8}, {7,5,3}, {2,9,4}},
        {{2,7,6}, {9,5,1}, {4,3,8}},
        {{4,9,2}, {3,5,7}, {8,1,6}},
        {{2,9,4}, {7,5,3}, {6,1,8}},
        {{4,3,8}, {9,5,1}, {2,7,6}},
        {{6,7,2}, {1,5,9}, {8,3,4}},
        {{8,1,6}, {3,5,7}, {4,9,2}}
    };

    //we find the cheapest way to turn our matrix into one of these

    int min_cost = INT_MAX;
    for(int i = 0; i < 8; i++){
        int cost = 0;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                cost += abs(s[j][k] - matrices[i][j][k]);
            }
        }
        min_cost = min(cost,min_cost);
    }

    return min_cost;


}

    




int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> s = {{5,3,4},
                            {1,5,8},
                            {6,4,2}};

    cout << formingMagicSquare(s) << endl;









    return 0;
}