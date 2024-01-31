// Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    
    long long min,max, sum=0;
    for(int i=0;i<arr.size();i++){
        sum+= arr[i];
        
        min = sum-arr[(arr.size()-1)]; //last element hata do
        
        max = sum- arr[0]; //first eement hata do
    }
    
    cout<<min<<" "<<max;
    

}
