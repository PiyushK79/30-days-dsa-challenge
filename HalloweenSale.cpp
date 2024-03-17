// You wish to buy video games from the famous online video game store Mist.

// Usually, all games are sold at the same price,  dollars. However, they are planning to have the seasonal Halloween Sale next month in which you can buy games at a cheaper price. Specifically, the first game will cost  dollars, and every subsequent game will cost  dollars less than the previous one. This continues until the cost becomes less than or equal to  dollars, after which every game will cost  dollars. How many games can you buy during the Halloween Sale?


//Approach 1-
int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int count=0;

    while (s >= p){  //budget ke andar hai
        count += 1;             // 1 item to ayega hi, increase if budget ke andar
        s -= p;                // budget mese p ko ghatao
        if (p > m)              // m ke niche nhi jana toh till p>m
            p = max(p - d, m);        // p-d and m ke max ko p me update karo.  Ye update upar jake subract ho raha hai.
    }
            
    return count;

}




//Approach 2 - 
 int spend_budget = 0;
  int n =0;
  
  while(spend_budget<=s)
  {
      spend_budget += p;
       n++;
      if(p-d>=m)
      {
          p = p-d;
      }
      else 
      {
          p = m;
      }
      
  }
return --n;
}
