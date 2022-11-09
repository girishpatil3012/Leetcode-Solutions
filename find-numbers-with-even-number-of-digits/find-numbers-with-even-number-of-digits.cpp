class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int len = nums.size();
        int count = 0;
        
        for(int i = 0; i < len; i++)
        {
            int temp = nums[i];
            int digit_count = 0;
            while(temp != 0)
            {
                digit_count++;
                temp = temp / 10;
            }
            
            if(digit_count % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};