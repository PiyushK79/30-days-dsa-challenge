// Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your task is to determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.

string catAndMouse(int x, int y, int z) {
    
    string ans ="";
    
    if(abs(x-z) > abs(y-z)){
        ans= "Cat B";
    }
    else if(abs(x-z) < abs(y-z)){
        ans = "Cat A";
    }
    else{
        ans = "Mouse C";
    }
    
    return ans;

}
