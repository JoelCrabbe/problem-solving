#include <bits/stdc++.h>

using namespace std;

string dayOfProgrammer(int year){ //need to find 256th day of the year either 12th or 13th september 12 = leap year

    if(year >= 1700 && year <= 1917){ //julian calendar
        string stringYear = to_string(year);
        string day_month_leap= "12.09.";
        string day_month = "13.09.";
        bool isLeapYearJ = (year % 4 == 0);
        if(isLeapYearJ){
            return day_month_leap.append(stringYear);
        }
        return day_month.append(stringYear);    
    }
    else if(year > 1918){ //gregorian calendar
        string stringYear = to_string(year);
        string day_month_leap= "12.09.";
        string day_month = "13.09.";
        bool isLeapYearG = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
        if(isLeapYearG){
            return day_month_leap.append(stringYear);
        }
        return day_month.append(stringYear);

    }
    //the year is 1918
    return "26.09.1918";
}

int main(){
    int year = 2016;
    cout << dayOfProgrammer(year) << endl;




    return 0;
}
