#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m){
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(i + m - 1 < s.size()){
            int sum = 0;
            for(int j = i; j <= i + m - 1; j++){
                sum += s[j];
            }
            if(sum == d){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> s = {2,2,1,3,2};
    int d = 4;
    int m = 2;
    cout << birthday(s,d,m) << endl;




    return 0;
}
