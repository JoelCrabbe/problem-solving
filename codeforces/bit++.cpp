#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int value = 0;
    while(n--){
        string operation;
        cin >> operation;
        if(operation == "X++" || operation == "++X"){
            value++;
        }
        else if(operation == "X--" || operation == "--X"){
            value--;
        }
    }
    cout << value << endl;
    

    return 0;
}