// John Watson knows of an operation called a right circular rotation on an array of integers. One rotation operation moves the last array element to the first position and shifts all remaining elements right one. To test Sherlock's abilities, Watson provides Sherlock with an array of integers. Sherlock is to perform the rotation operation a number of times then determine the value of the element at a given position.

// For each array, perform a number of right circular rotations and return the values of the elements at the given indices.


vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
  //method 1 -
  //(but fails for long datatype)
  
        // rotate(a.begin(),a.begin()+a.size()-k,a.end());
        
        // vector<int>ans;
        
        // for(int i=0;i<queries.size();i++){
        //     ans.push_back((a[queries[i]]));
        // }
        
        // return ans;

//method 2 -
        vector<int>res;
        
        for(int i=0;i<k;i++){
            a.insert(a.begin(),a.back() );
            a.pop_back();
        }
        
        for(auto it:queries){
            res.push_back(a[it]);
        }
        
        return res;
}
