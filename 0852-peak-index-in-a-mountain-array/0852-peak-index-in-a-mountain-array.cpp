class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int len = arr.size();
        int max_ele = INT_MIN, max_ind = -1;
        
        for(int i = 0; i < len; i++)
        {
            if(arr[i] > max_ele)
            {
                max_ele = arr[i];
                max_ind = i;
            }
        }
        return max_ind;
    }
};