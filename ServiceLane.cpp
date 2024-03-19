// A driver is driving on the freeway. The check engine light of his vehicle is on, and the driver wants to get service immediately. Luckily, a service lane runs parallel to the highway. It varies in width along its length.

// Paradise Highway

// You will be given an array of widths at points along the road (indices), then a list of the indices of entry and exit points. Considering each entry and exit point pair, calculate the maximum size vehicle that can travel that segment of the service lane safely.


vector<int> serviceLane(int n,vector<int>width, vector<vector<int>> cases) {
    
    vector<int> result;
    for(auto cas: cases){ //iterate over all cases
        int r = width[cas[0]];   //pehla element wo case ka i.e range ka start element
        for(int i = cas[0]; i <= cas[1]; i++){   //range me 2 hi rehte to cas[0] se leke cas[1] tak hi jayega
            r = min(r, width[i]);   //fir wo range me jo bhi minimum hai usko set kardo r ke barabar
        }
        result.push_back(r);     //push_back r
    }
    return result;

}
