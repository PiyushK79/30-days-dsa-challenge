// A child is playing a cloud hopping game. In this game, there are sequentially numbered clouds that can be thunderheads or cumulus clouds. The character must jump from cloud to cloud until it reaches the start again.

// There is an array of clouds,c  and an energy level 100. The character starts from c[0] and uses 1 unit of energy to make a jump of size k to cloud . If it lands on a thundercloud,c[0]=1 , its energy () decreases by 2 additional units. The game ends when the character lands back on cloud 0.

int jumpingOnClouds(vector<int> c, int k) {
    int energy=100;
    int start=0;
    int sizec=c.size();
     do {
         start=(start+k)%sizec;  //to stay in bound
         if (c[start]==0) {
             energy--;
         }
         else {
             energy-=3;
         }
     }
     //The loop continues until start becomes 0 again.
     while(start!=0);
    return energy;
}
