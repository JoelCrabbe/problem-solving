#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int aland = 0, oland = 0;
    for(int i : apples){
        i += a;
        if(i >= s && i <= t){
            aland++;
        }
    }  for(int i : oranges){
        i += b;
        if(i >= s && i <= t){
            oland++;
        }
    }
    cout << aland << endl;
    cout << oland << endl;
}


