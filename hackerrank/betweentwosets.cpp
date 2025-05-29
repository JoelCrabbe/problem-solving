#include <bits/stdc++.h>

using namespace std;

int check_divisible(vector<int> a, vector<int> b, int min, int max){
    int ans = 0;
    for(int j = max; j <= min; j++){
        bool ok = true;
        for(int i : a){
            if(j % i != 0) ok = false;
        }
        if(ok){
            for(int k : b){
                if(k % j != 0) ok = false;
        }
        }
        if(ok) ans++;
}
    return ans;
}

int getTotalX(vector<int> a, vector<int> b){
    int max = a[0], min = b[0];
    for(int i = 1; i < a.size(); i++){
        if(a[i] > max) max = a[i];
    }
    for(int i = 1; i < b.size(); i++){
        if(b[i] < min) min = b[i];
    }
    return check_divisible(a,b,min,max);
}

int main(){
    vector<int> a = {3,4};
    vector<int> b = {24,48};
    cout << getTotalX(a,b) << endl;
    return 0;
}
