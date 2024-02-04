// Lily likes to play games with integers. She has created a new game where she determines the difference between a number and its reverse. For instance, given the number 12, its reverse is 21. Their difference is 9..

// She decides to apply her game to decision making. She will look at a numbered range of days and will only go to a movie on a beautiful day.

//privately written code
int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
}  

//Complete this function
int beautifulDays(int i, int j, int k) {
    int count=0;
    
    for(int p=i;p<=j;p++){
        int temp = reverseDigits(p);
        
        if((abs(p-temp))%k == 0){
            count++;
        }
    }
    
    return count;
}
