#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll sum = n*(n+1) / 2;
    ll t = n - 1;
    ll newsum = 0;
    while(t--){
        int x;
        cin >> x;
        newsum += x;
    }
    cout << sum - newsum << endl;








    return 0;
}