// An integer  is a divisor of an integer  if the remainder of .

// Given an integer, for each digit that makes up the integer determine whether it is a divisor. Count the number of divisors occurring within the integer.


int findDigits(int n) {
    int count=0;
    int temp = n;
    
    while(n){
        int rem = n%10;
        
        if(rem!=0 && (temp%rem)==0){
            count++;
        }
        n /= 10;
    }
    
    return count;
}
