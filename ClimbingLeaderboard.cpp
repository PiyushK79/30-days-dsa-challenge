// An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses Dense Ranking, so its leaderboard works like this:

// The player with the highest score is ranked number 1  on the leaderboard.
// Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.


vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    int leng=player.size();
    int rankleng=ranked.size();
    vector <int> result(leng,0);
    vector<int> ranks(rankleng,0);
    ranks[0]=1;
    for (int i = 1; i < rankleng; i++) {
        if (ranked[i] == ranked[i - 1]) {
            ranks[i] = ranks[i - 1]; //dono ka rank same kardo
        } else {
            ranks[i] = ranks[i - 1] + 1;  //warna rank badha do i.e pichle wale rank se ek jyada
        }
    }
    //piche se dekhna suru karo
    
    int j=rankleng-1;
    for(int i=0;i<leng;i++){
        
        while (j>=0&&player[i]>=ranked[j]) {
            //agar player ka score jyada hai to rank jyada chahiye isilie j ko 1 se piche leke aao i.e j--;
            j--;
        }
        //result me value store karte jao
        
        result[i] = (j >= 0) ? ranks[j] + 1 : 1;
    }
    return result;
    
    
}
