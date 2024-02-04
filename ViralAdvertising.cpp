// HackerLand Enterprise is adopting a new viral advertising strategy. When they launch a new product, they advertise it to exactly  people on social media.

// On the first day, half of those 5 people (i.e.,floor(5/2) like the advertisement and each shares it with 3 of their friends. At the beginning of the second day,2*3 =6  people receive the advertisement.


int viralAdvertising(int n) {
  //method 1 -
    // int recipients = 5;
    // int sum =2;
    // for(int i=0;i<n-1;i++){
    //     int liked = floor(recipients/2) ;
    //     int shared = liked*3;

    //     sum += floor(shared/2);
          
    //     recipients = shared;
    // }
    // return sum;

  
  //method 2-
    int ans = 0, people = 5;
    for(int i=0; i<n; i++)
    {
        people /= 2;
        ans += people;
        people *= 3;
    }
    return ans;
}
