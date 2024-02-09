// David has several containers, each with a number of balls in it. He has just enough containers to sort each type of ball he has into its own container. David wants to sort the balls using his sort method.

// David wants to perform some number of swap operations such that:

// Each container contains only balls of the same type.
// No two balls of the same type are located in different containers.

string organizingContainers(vector<vector<int>> container) {
    int n=container.size();
    set<int> row,column;
    for(int i=0;i<n;i++){
        int temp=0;
        int r=0;
        for(int j=0;j<n;j++){
            r+=container[i][j];  //row sum
            temp+=container[j][i];  //col sum
        }
        //2 different sets for row and column and insert them
        row.insert(r);
        column.insert(temp);
    }
    //if equal then possible else not
    if(row==column){
        return "Possible";
    }
    else{
        return "Impossible";
    }
}
