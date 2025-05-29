#include <bits/stdc++.h>

using namespace std;



vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int ap = 0; int bp = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i]) ap++;
        else if(a[i] < b[i]) bp++;
    }
    vector<int> result;
    result.push_back(ap);
    result.push_back(bp);
    return result;

}
