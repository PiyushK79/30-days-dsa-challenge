// Given a sequence of  integers,  where each element is distinct and satisfies . For each  where , that is  increments from  to , find any integer  such that  and keep a history of the values of  in a return array.

vector<int> permutationEquation(vector<int> p) {
    map <int,int> mapped;
    vector<int> ans;
    for(int i=0; i<p.size(); i++){
        //populate map with their indexes
        //0 se start kiya pr question me 1-based indexing hai isiliye +1;
        mapped[p[i]]=i+1;
    } 
    
    for(int i=0;i<p.size();i++){
        //because p[p(y)] dia hai
        ans.push_back(mapped[mapped[i+1]]);
    }
    
    return ans;
}
