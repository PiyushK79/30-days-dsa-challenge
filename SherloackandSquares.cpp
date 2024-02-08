// Watson likes to challenge Sherlock's math ability. He will provide a starting and ending value that describe a range of integers, inclusive of the endpoints. Sherlock must determine the number of square integers within that range.


int squares(int a, int b) {
    int count=0;
    int lim1 = ceil(sqrt(a));
    int lim2 = floor(sqrt(b));
    
    if(lim1<=lim2){
        count = lim2-lim1+1;
    }
    
    return count;

}
