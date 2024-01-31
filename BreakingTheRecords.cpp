// Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

vector<int> breakingRecords(vector<int> scores) {
    
    int start1 = scores[0];
    int start2 = scores[0];
    int mini =0,maxi=0;
    vector<int> count(2,0);
    
    for(int i=1;i<scores.size();i++){
        if(start1 < scores[i]){
            start1 = scores[i];
            count[0]++;
        }
        else if(start2 > scores[i]){
            start2= scores[i];
            count[1]++;
        }
    }
    
    return count;
}
