// Given an array of integers, determine the minimum number of elements to delete to leave only elements of equal value.4

int equalizeArray(vector<int> arr) {
    map<int,int>mp;
    int max = INT_MIN;
    
    for(int i=0;i<arr.size();i++){
        //populate map
        mp[arr[i]]++;
    }
    
    for(auto it:mp){
        //get the element which is frequently occuring.
        if(it.second > max){
            max = it.second;
        }
    }
    
    //itne elements ko hatana padega 
    return arr.size()-max;
}
