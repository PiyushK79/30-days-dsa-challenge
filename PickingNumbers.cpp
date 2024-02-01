// Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to 1.

int pickingNumbers(vector<int> a) {
    vector <int> b(100);  //as our range is below 100.

    for(int i = 0; i < a.size(); i++)
    {
        b[a[i]]++;
    }
    int maxi = 0;
    for(int i = 0; i < 99; i++)
    {
        
        if(maxi < b[i]+b[i+1])
        {
            maxi = b[i] + b[i+1];
        }
    }
    return maxi;
}
