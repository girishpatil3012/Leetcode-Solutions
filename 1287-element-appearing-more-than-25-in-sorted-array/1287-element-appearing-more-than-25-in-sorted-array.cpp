class Solution {
public:
    int findSpecialInteger(vector<int>& arr)
    {
        int len = arr.size();
        if(len == 1)
            return 1;
        int retValue;
        int quarter = len/4;
        
        for(int i = 0; i < len - quarter; ++i)
        {
            if(arr[i] == arr[i + quarter])
            {
                retValue = arr[i];
            }
        }
        return retValue;
    }
};