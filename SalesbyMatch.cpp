// There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

int sockMerchant(int n, vector<int> ar) {
    map<int,int>mp;
    
    for(int i=0;i<ar.size();i++){
        mp[ar[i]]++;
    }
    int count=0;
    for(auto i:mp){
        if(i.second % 2 == 0){ //even num
            count += (i.second / 2);
        }
        else{  //odd num
            if(i.second > 2){
                count += (i.second - 1)/2 ;
            }
        }
    }
    
    return count;
}
