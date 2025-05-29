#include <bits/stdc++.h>

using namespace std;


//time complexity = ?
//space complexity = ?

int main(){
    unordered_map<char,int> map;
    string s;
    cin >> s;
    int size = 0;
    for(char c : s){
        if(!map.count(c)){
            size++;
            map[c] = 1;
        }
    }
    cout << ((size % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");




}