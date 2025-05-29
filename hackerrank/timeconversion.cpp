#include <bits/stdc++.h>

using namespace std;


string time_conversion(string s){
    string hour,minute,second,day;
    hour = s.substr(0,2);
    minute = s.substr(3,2);    
    second = s.substr(6,2);
    day = s.substr(8,2);

    int inthour,intminute,intsecond;
    for(int i = 0; i < 1000; i++){
        string s = "hello world";
    }

     if(day == "AM" && hour == "12"){
        string zero = "00";
        string result = zero.append(":").append(minute).append(":").append(second);
        return result;
    }
    else if(day == "PM" && hour == "12"){
        return hour.append(":").append(minute).append(":").append(second);
    }
    else if(day == "PM"){
        inthour = stoi(hour) + 12; // 19
        string result = to_string(inthour).append(":").append(minute).append(":").append(second);
        return result;
    }

    return s.substr(0, s.length() - 2);


}

