// You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

int birthdayCakeCandles(vector<int> candles) {
    map<int,int> mp;

    for(auto i:candles){
        mp[i]++;
    }
    
    int ans=0,maxi=INT_MIN;
    for(auto i:mp){
        ans = max(maxi,i.second);
    }
    
    return ans;
}
