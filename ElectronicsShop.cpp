// A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a give budget. Given price lists for keyboards and USB drives and a budget, find the cost to buy them. If it is not possible to buy both items, return -1.


int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int ans = -1;
    
    for(int i=0;i<keyboards.size();i++){
        for(int j=0;j<drives.size();j++){
            int sum = keyboards[i]+drives[j];
            if(sum <= b){
                ans = max(ans,sum);
            }
    }
    }
    
    return ans;

}
