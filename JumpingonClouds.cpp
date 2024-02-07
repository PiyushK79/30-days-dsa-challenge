// There is a new mobile game that starts with consecutively numbered clouds. Some of the clouds are thunderheads and others are cumulus. The player can jump on any cumulus cloud having a number that is equal to the number of the current cloud plus 1 or 2. The player must avoid the thunderheads. Determine the minimum number of jumps it will take to jump from the starting postion to the last cloud. It is always possible to win the game.

// For each game, you will get an array of clouds numbered 0 if they are safe or 1 if they must be avoided.


int jumpingOnClouds(vector<int> c) {
    int res=0, index=0;
    
    while(index < c.size()-1){
        //agar wo index pe 1 hai to index ko 1 se badha do
        if(c[index+2]==1){
            index++;
        }
        else{ 
            //warna 2 se index aage badha do kyuki 0 hi rahega n wo
            index += 2;
        }
      //number of iterations mil jayenge
        res ++;
    }
    
    return res;
}
