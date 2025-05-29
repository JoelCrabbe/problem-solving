#include <bits/stdc++.h>

using namespace std;
/*


10 : 4 / 2 = 2
20 : 3 / 2 = 1
30 : 1 / 2 = 0
50 : 1 / 2 = 0
so return 3

*/

int sockMerchant(int n, vector<int> ar) {                
    map<int,int> map;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(!map.count(ar[i])) map[ar[i]] = 1;
        else map[ar[i]]++;
    }
    for(auto i : map){
        count += i.second / 2;
    } 

return count;
}

int main(){
    vector<int> ar = {10,20,20,10,10,30,50,10,20};
    cout << sockMerchant(ar.size(), ar) << endl;





    return 0;
}