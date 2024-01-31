// Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.

// Lily decides to share a contiguous segment of the bar selected such that:

// The length of the segment matches Ron's birth month, and,
// The sum of the integers on the squares is equal to his birth day.
// Determine how many ways she can divide the chocolate.


int birthday(vector<int> s, int d, int m) {
  //Method 1-
    // int count=0; 
    
    // for(int i=0;i<s.size();i++){
    //     int sum=0;
        
    //     for(int j=0;j<m;j++){
    //         sum += s[i+j];
    //     }
    //     if(sum == d){
    //         count++;
    //     }
    // }
    
    // return count; 


  //Method 2- accumulate gives the sum
    
    if(s.size() < m) return 0;
    int su = accumulate(s.begin(), s.begin() + m, 0), result = 0;
    if(su == d) result++;
    for(int i = m; i < s.size(); i++){
      //sliding window
        su += s[i];
        su -= s[i-m];
        if(su == d) result++;
    }
    return result;
}
