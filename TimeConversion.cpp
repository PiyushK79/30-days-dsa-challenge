// Given a time in -hour AM/PM format, convert it to military (24-hour) time.

// Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
// - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.


string timeConversion(string s) {
    
    // int hours=stoi(s);
    // if (s[8]=='P'){
    //     if(hours!=12){
    //         s[0]+=1;
    //         s[1]+=2;
    //     }
    // }
    // else {
    //     if(hours==12){
    //         s[0]='0';
    //         s[1]='0';
    //     }
    // }
    // s.erase(s.size()-1,2);
    // return s;
    
    
    string ans;
    
    string hrs = s.substr(0,2);
    
    int newhr = stoi(hrs) + 12;
    
    if(stoi(hrs)<12 && s[8]=='P'){
    if(newhr==24){
        ans = "00" + s.substr(2,6);
    }
    else{
        hrs = to_string(newhr);
    
        ans = hrs + s.substr(2,6);
    }
    }
    else if(s[8]=='A' && stoi(hrs)==12){
        
        ans = "00" + s.substr(2,6);
    }
    else{
        ans = s.substr(0,8);
    }
    
    return ans;
    
}
