// You have two strings of lowercase English letters. You can perform two types of operations on the first string:

// Append a lowercase English letter to the end of the string.
// Delete the last character of the string. Performing this operation on an empty string results in an empty string.
// Given an integer,k , and two strings, s and t, determine whether or not you can convert s to t by performing exactly k of the above operations on s. If it's possible, print Yes. Otherwise, print No.


string appendAndDelete(string s, string t, int k) {
    int count = 0;
    if (s.length() + t.length() <= k){
        return "Yes";
    }
    while (count < min(s.length(),t.length()) && s[count] == t[count]){
        count += 1;
    }
    
    int a = s.length() - count;
    int b = t.length() - count;
    
    if (a + b > k)
        return "No";
    else if ((k - (a + b))% 2 == 0)
        return "Yes";
    else
        return "No";
    
}
