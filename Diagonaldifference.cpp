//difference of left and right diagonal in a matrix
int diagonalDifference(vector<vector<int>> arr) {
    int leftsum=0,rightsum=0;
    
    for(int i=0;i<arr.size();i++){
        leftsum+= arr[i][i*1];
        rightsum += arr[i][(arr.size()-1)-i];
    }
    
    int ans = abs(leftsum-rightsum);
    
    return ans;
}
