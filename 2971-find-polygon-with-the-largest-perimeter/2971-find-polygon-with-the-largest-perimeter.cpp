class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        long long perimeter = 0, sides = n;
        
        // Consider the largest polygon with all the sides at first
        for(auto it: nums) 
            perimeter += it;

        for(int i=n-1; i>=2; i--){
            if(perimeter <= 2*nums[i]){
                perimeter -= nums[i];
                sides--;
            }
            else break;
        }

        // if sides is 2 then return -1 
        if(sides == 2) 
            return -1;
        // else return the largest perimeter
        return perimeter;
    }
};