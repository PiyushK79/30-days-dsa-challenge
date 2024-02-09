// Taum is planning to celebrate the birthday of his friend, Diksha. There are two types of gifts that Diksha wants from Taum: one is black and the other is white. To make her happy, Taum has to buy  black gifts and  white gifts.

// The cost of each black gift is  units.
// The cost of every white gift is  units.
// The cost to convert a black gift into white gift or vice versa is  units.
// Determine the minimum cost of Diksha's gifts.


long taumBday(int b, int w, int bc, int wc, int z) {
    long cost_white = min(bc + z, wc);
    long cost_black = min(wc + z, bc);
    
    long ans = cost_white * w + cost_black * b;
    return ans;
}
