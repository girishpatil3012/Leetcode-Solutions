class Solution {
public:
    static int minKBitFlips(vector<int>& nums, int k) {
        const int n = nums.size();
    //    bitset<100000> flipped=0;  // Track where flips are made
        int cnt=0;  
        bool flip_x=0;
        
        for (int i = 0; i < n; i++) {
            if (i>=k) 
                flip_x^= (nums[i-k]>>8);// outside of sized k window
            if (nums[i]==flip_x) {  // Need to flip this window
                if (i+k > n) 
                    return -1;  // Not enough elements to flip
    
                nums[i]|=(1<<8);  // Mark the flip
                flip_x=!flip_x;  // flip 
                cnt++;
            }
        }
        return cnt;
    }
};





auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();