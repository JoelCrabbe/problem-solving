#include <bits/stdc++.h>

using namespace std;

int main(){
    int count = 0;
    int n;
    cin >> n;
    while(n--){
        int p,v,t;
        cin >> p >> v >> t;
        int sum = p + v + t;
        if(sum >= 2){
            count++;
        }
    }
    cout << count << endl;




    return 0;
}