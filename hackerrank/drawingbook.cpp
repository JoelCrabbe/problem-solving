#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p){
    int front_flips,back_flips = 0;

    if(p % 2 == 0){
        front_flips = p / 2;
        back_flips = (n - p) / 2;
    }
    else{
        front_flips = (p - 1) / 2;
        back_flips = (n - p + 1) / 2;
    }
    return min(front_flips, back_flips);
}

int main(){

    cout << pageCount(5,4) << endl;







    return 0;
}