// We define a magic square to be an  matrix of distinct positive integers from  to  where the sum of any row, column, or diagonal of length  is always equal to the same number: the magic constant.


int formingMagicSquare(vector<vector<int>> s) {
    int mgMatrix [8][3][3] = {
    {{8, 1, 6},
    {3, 5, 7},
    {4, 9, 2}},
    
    {{6, 1, 8}, 
    {7, 5, 3},
    {2, 9, 4}},
    
    {{4, 9, 2},
    {3, 5, 7},
    {8, 1, 6}},
    
    {{2, 9, 4},
    {7, 5, 3}, 
    {6, 1, 8}},
     
    {{8, 3, 4}, 
    {1, 5, 9}, 
    {6, 7, 2}},
     
    {{4, 3, 8},
    {9, 5, 1},
    {2, 7, 6}},
     
    {{6, 7, 2},
    {1, 5, 9},
    {8, 3, 4}},
     
    {{2, 7, 6},
    {9, 5, 1},
    {4, 3, 8}}  };

    int minCost = 81;
    for (int k = 0; k < 8; k++) {
        int currCost = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            currCost += abs(s[i][j] - mgMatrix[k][i][j] );
    }
    if (currCost < minCost)
        minCost = currCost;
    }
    return minCost  ;
}
