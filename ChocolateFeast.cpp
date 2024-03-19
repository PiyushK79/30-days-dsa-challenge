// Little Bobby loves chocolate. He frequently goes to his favorite  store, Penny Auntie, to buy them. They are having a promotion at Penny Auntie. If Bobby saves enough wrappers, he can turn them in for a free chocolate.
// He has  to spend, bars cost , and he can turn in  wrappers to receive another bar. Initially, he buys  bars and has  wrappers after eating them. He turns in  of them, leaving him with , for  more bars. After eating those two, he has  wrappers, turns in  leaving him with  wrapper and his new bar. Once he eats that one, he has  wrappers and turns them in for another bar. After eating that one, he only has  wrapper, and his feast ends. Overall, he has eaten  bars.

int chocolateFeast(int n, int c, int m) {
    
    int wrappers_eat=n/c;       //initially itne hi le sakega wo chocolate bars or bars
  
    int chocolates=wrappers_eat;   //bars will be equal to wrappers
    while(wrappers_eat>=m){        //jab tak minimum se kam hai tabtak while loop chalate jao
     chocolates+=wrappers_eat/m;      //add usme jitne usne khaye bars
      wrappers_eat=(wrappers_eat%m)+wrappers_eat/m;     //jitne wrapers bache aur abtak kitne khaye wo add karo
    }
    return chocolates;

}
