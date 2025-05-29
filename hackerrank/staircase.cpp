#include <bits/stdc++.h>

using namespace std;


string multiply_string(string s, int count){
    string result = "";
    for(int i = 0; i < count; i++){
            result.append(s);
    }
return result;}


void staircase(int n){
    int spaces = 6;
    for(int i = 1; i <= n; i++){
        cout << multiply_string(" ",spaces).append(multiply_string("#",i)) << endl;
        spaces--;
        //cout << multiply_string("#", i) << endl;
    }
}




int main(){

    staircase(6);

    return 0;
}
