#include <bits/stdc++.h>

using namespace std;

int candle_func(vector<int> candles){
    map<int, int> map;
    for(auto candle : candles){
        if(map.count(candle)) map[candle]++;
        else map[candle] = 1;
    }
    return map.rbegin()->second; //return count of largest key in map
}


