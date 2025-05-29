#include <bits/stdc++.h>
using namespace std;


string catAndMouse(int x, int y, int z) {
    int adiff = abs(x-z);
    int bdiff = abs(y-z);
    if(adiff == bdiff) return "Mouse C";
    
    return adiff < bdiff ? "Cat A" : "Cat B";


}




int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);









    return 0;
}