// Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.


int migratoryBirds(vector<int> arr) {
    map<int,int>mp;
    int maxi=0;
    int ans=0;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second > maxi){
            ans = i.first;
            maxi=i.second;
        }
    }
    return ans;
}
