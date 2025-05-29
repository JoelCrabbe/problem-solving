#include <bits/stdc++.h>

using namespace std;
//when height first becomes negative we want to increment valley count and then only increment it again if height becomes zero and goes negative again

int countingValleys(int steps, string path) { //D for downwards
    int valleyCount = 0; int height = 0;
    bool inValley = true;
    for(char c : path){
        if(c == 'D') height--;
        else height++;
        if(height < 0 && inValley){
            valleyCount++;
            inValley = false;
        }
        else if(height == 0){
            inValley = true;

        }
    }


return valleyCount;
}


int main(){
    cout << countingValleys(8,"DDUUUUDD") << endl;




    return 0;
}