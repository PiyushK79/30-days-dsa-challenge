// Given a sequence of integers , a triplet  is beautiful if:
// i<j<k and arr[j]-arr[i]=d and arr[k]-arr[j]=d;

// Given an increasing sequenc of integers and the value of , count the number of beautiful triplets in the sequence.


int beautifulTriplets(int d, vector<int> arr) {
     int count = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        int x = arr[i] + d;
        int y = x + d;
        
        if (find(arr.begin(), arr.end(), x) != arr.end() && find(arr.begin(), arr.end(), y) != arr.end()) {
            count++;
        }
}

return count;

}
