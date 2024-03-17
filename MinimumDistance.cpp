// The distance between two array values is the number of indices between them. Given , find the minimum distance between any pair of equal elements in the array. If no such value exists, return -1.

//My approach - 
int minimumDistances(vector<int> a) {

    int diff=INT_MAX;
    
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]==a[j]){
                diff = min(diff,abs(j-i));
            }
        }
    }
    
    if(diff==INT_MAX){
        return -1;
    }
    else{
        return diff;
    }

}



//Solutions - 
map<int,int>myMap;
int minDistance=INT_MAX;
for(int i=0;i<(int)a.size();i++){
if(myMap.find(a[i])!=myMap.end()){
 int distance =abs(i-myMap[a[i]]);
      minDistance=min(distance,minDistance);
}

         my Map[a[i]]=i;
}

if (minDistance==INT_MAX) return -1; else return minDistance;
