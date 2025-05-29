#include <bits/stdc++.h>

using namespace std;

//this code was correct but feels quite messy and inefficient

int migratoryBirds(vector<int> arr) {
    map<int,int> map;
    for(int i = 0; i < arr.size(); i++){
        if(!map.count(arr[i])) map[arr[i]] = 1;
        else map[arr[i]]++;
    }
    //loops through array adding element and how many times it appears
    int maxValue = map[arr[0]];
    for(int i = 1; i < arr.size(); i++){
        if(map[arr[i]] > maxValue) maxValue = map[arr[i]];
    } //we have found the max value in the map
    vector<int> maxes;
    for(int i = 0; i < arr.size(); i++){
        if(map[arr[i]] == maxValue) maxes.push_back(arr[i]);
    }
    //now we have a vector containing the most frequent elements and we need to return the smallest element in this vector
    return *min_element(maxes.begin(), maxes.end());
}


int main(){
    vector<int> arr = {1,2,2,3,4};
    cout << migratoryBirds(arr) << endl;






    return 0;
}