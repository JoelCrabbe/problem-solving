#include <bits/stdc++.h>

using namespace std;



void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i = 0; i < bill.size(); i++){
        sum += bill[i];
    }
    int annashouldpay = (sum - bill[k]) / 2;
    if(b == annashouldpay) cout << "Bon Appetit" << endl;
    else{
        cout << b - annashouldpay << endl;
    }

}

int main(){
    vector<int> bill = {3,10,2,9};
    int k = 1;
    int b = 12;
    bonAppetit(bill,k,b);







    return 0;
}