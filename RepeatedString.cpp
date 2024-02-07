// There is a string,s , of lowercase English letters that is repeated infinitely many times. Given an integer, n, find and print the number of letter a's in the first  letters of the infinite string.

long a_count(string s){
    //function to count number of a
    return count(s.begin(),s.end(),'a');
}

long repeatedString(string s, long n) {
    //Write your code here
    long ans;
    
    //pehle agar 10 hai usse divide karo size ko i.e 3 to pehle 6 ki substring me number of a mil jayenge after count se multiply karne ke baad.
    
    ans = n/s.size() * a_count(s);
    
    //usime fir agar modulo kardo size se to bache wali string ke liye number of a mil jayenge.
    
    ans+=a_count(s.substr(0,n%s.size()));
  
    return ans;
}
