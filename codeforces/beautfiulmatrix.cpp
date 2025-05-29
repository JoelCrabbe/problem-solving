#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //5x5 matrix with all zeroes and one 1;
    //find minimum number of moves to move the 1 to the centre of the matrix (3,3);
    //can swap two neighbouring rows or columns
    vector<vector<int>> matrix;
    for(int i = 0; i < 5; i++){
        vector<int> vec;
        for(int j = 0; j < 5; j++){
            int x;
            cin >> x;
            vec.push_back(x);
        }
        matrix.push_back(vec);
    }
    if(matrix[3][3] == 1) cout << 0 << endl;
    




    return 0;
}