// Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using the information given below, determine the number of apples and oranges that land on Sam's house.

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int m = apples.size();
    int n = oranges.size();
    
    for(int p=0;p<m;p++){
        apples[p] += a; 
    }
    for(int q=0; q<n;q++){
        oranges[q] += b;
    }
    
    int applefreq = 0, orangefreq =0 ;
    
    for(auto i:apples){
        if(i>= s && i<=t){
            applefreq++;
        }
    }
    
    for(auto i:oranges){
        if(i>= s && i<=t){
            orangefreq++;
        }
    }
    
    cout<<applefreq<<endl;
    cout<<orangefreq<<endl;
}
