// A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the characters have a maximum height they can jump. There is a magic potion they can take that will increase their maximum jump height by 1 unit for each dose. How many doses of the potion must the character take to be able to jump all of the hurdles. If the character can already clear all of the hurdles, return 0.


int hurdleRace(int k, vector<int> height) {
    //sort in descending order
    sort(height.begin(), height.end(), greater<int>());
    int ans;
    if(k> height[0]){
        ans =0;
    }
    else{
        ans = abs(k-height[0]);
    }
    
    return ans;
}
