class Solution {
public:
    void merge_procedure(vector<int> &nums, int p, int q, int r)
    {
        vector<int> a1(q-p+1, 0);
        vector<int> a2(r-q, 0);
        int len1 = q - p + 1;
        int len2 = r - q;
        
        for(int i = 0; i < len1; ++i)
            a1[i] = nums[p+i];
        for(int i = 0; i < len2; ++i)
            a2[i] = nums[q+1+i];
        
        int i = 0 , j = 0, k = 0;
        
        while(true)
        {
            if(a1[i] <= a2[j])
            {
                nums[p+k] = a1[i];
                i++;
                k++;
                if(i == len1)
                {
                    while(j < len2)
                    {
                        nums[p+k] = a2[j];
                        j++;
                        k++;
                    }
                    break;
                }
            }
            else 
            {
                nums[p+k] = a2[j];
                j++;
                k++;
                if(j == len2)
                {
                    while(i < len1)
                    {
                        nums[p+k] = a1[i];
                        i++;
                        k++;
                    }
                    break;
                }
            }
        }
    }
    
    void merge_sort(vector<int> &nums, int p, int r)
    {
        int q = 0;
        if(p >= r)
        {
            return;
        }
        q = (p + r) / 2;
        merge_sort(nums, p, q);
        merge_sort(nums, q+1, r);
        merge_procedure(nums, p, q, r);
    }
    
    vector<int> sortArray(vector<int>& nums) 
    {
        int len = nums.size();
        merge_sort(nums, 0, len-1);
        
        return nums;
    }
};