class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int win = 0, winner = *max_element(arr.begin(), arr.end()), mx = arr[0]; 
        if(winner == arr[0] || k > arr.size())    return winner; // If the first element is maximum or k is greater than size of array then return maximum.
// This is because if k>arr.size() then we will reach the maximum element somwhow and then it will always be the maximum for all comparisons
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i]==winner)    break; // If we reach the maximum then break because it will always be the maximum
            if(arr[i] > mx){
                mx = arr[i];
                win = 0;
            }
            if(++win == k)  return mx; //If win_count=k then return the current max number
        }
        return winner;
    }
};