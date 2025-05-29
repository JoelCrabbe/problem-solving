#include <bits/stdc++.h>

using namespace std;


string kangaroo(int x1, int v1, int x2, int v2) {
     if(x2 > x1 && v2 > v1){
        return "NO";
    }
    float n = (float)(x2 - v2 + v1 - x1) / (v1 - v2); //arithmetic series -> set equal -> n is when they are equal
    if(n < 0 || (int) n != n){
        return "NO";
    }
    return "YES";
    

}


