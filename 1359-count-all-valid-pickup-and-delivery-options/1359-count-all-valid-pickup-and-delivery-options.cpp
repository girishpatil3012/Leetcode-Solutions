class Solution {
public:
    // Define a constant MOD to be used for modulo arithmetic
    int MOD = 1e9 + 7;

    // Function to count valid orders
    int countOrders(int n) {
        // Initialize variables to store the number of places and the total sequence count
        long places = 2 * n; // There are 2 places for each item
        long seq = 1; // Initialize the sequence count to 1

        // Loop from n down to 1
        for (int i = n; i >= 1; i--) {
            // Calculate the sequence count for the current item
            // The formula below calculates the number of valid sequences for the current item
            // by multiplying the current sequence count by (places * (places - 1)) / 2
            // This formula assumes that you can choose any of the remaining 2 * n places
            // for the current item, and then any of the remaining 2 * n - 1 places for the next item,
            // divided by 2 to account for double-counting.
            seq = (seq * ((places * (places - 1)) / 2)) % MOD;

            // Decrement the number of available places by 2 for the next iteration
            places = places - 2;
        }
      
        // Return the final sequence count as an integer (modulo MOD)
        return (int)seq;
    }
};