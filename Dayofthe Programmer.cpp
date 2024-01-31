// Given a year, , find the date of the 256th day of that year according to the official Russian calendar during that year. Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is .

// For example, the given  = 1984. 1984 is divisible by 4, so it is a leap year. The 256th day of a leap year after 1918 is September 12, so the answer is 12.09.1984.


string dayOfProgrammer(int year) {
    string ans;
    if(year>=1700 && year<=1917){
        if(year%4==0){
            ans = "12.09."+ to_string(year);
        }
        else{
            ans = "13.09."+ to_string(year);
        }
    }
    else if(year==1918){   //keep this case in mind
        ans = "26.09."+ to_string(year);
    }
    else {
    if(((year%4==0) && (year%100!=0)) || year%400==0){
        ans = "12.09."+ to_string(year);
    }
    else{
        ans = "13.09."+ to_string(year);
    }
    }
    return ans;
}
