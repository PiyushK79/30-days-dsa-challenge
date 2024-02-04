// Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {

 int res = 0;
    if (y1 > y2) res = 10000;
    if (m1 > m2 && y1 == y2) res = 500 * (m1 - m2);
    if (d1 > d2 && m1 == m2 && y1 == y2) res = 15 * (d1 - d2);

    return res;


    
    // int ans;
    
    // if(d1<=d2 && m1<=m2 && y1<=y2){
    //     ans =0;
    // }
    // else if(d1>d2 && m1==m2 && y1==y2){
    //     ans = 15*(d1-d2);
    // }
    // else if(d1>d2 && m1>m2 && y1==y2){
    //     ans = 500*(m1-m2);
    // }
    // else if(m1>m2 && y1==y2){
    //     ans = 500*(m1-m2);
    // }
    // else if(d1>d2 && m1>m2 && y1>y2){
    //     ans = 10000;
    // }
    // else if(y1<= y2){
    //     ans =0;
    // }
    // else if(y1>y2){
    //     ans = 10000;
    // }
    
    // return ans;
    
   
}
