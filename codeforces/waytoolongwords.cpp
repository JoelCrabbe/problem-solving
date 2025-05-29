#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    while(n--){
        string word;
        cin >> word;
        if(word.length() > 10){
            int diff = word.length() - 2;
            cout << word[0] << diff << word[word.length() - 1] << endl;  
        }
        else{
            cout << word << endl;
        }
    }


    return 0;
}