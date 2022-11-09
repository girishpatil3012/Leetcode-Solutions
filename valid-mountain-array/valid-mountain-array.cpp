class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int hill = 0, valley = 0;
        int size = arr.size();
        
        for (int i = 1; i < size - 1; i++) 
        {
            if (arr[i - 1] == arr[i] or arr[i] == arr[i + 1])
            {
                return false;
            }  
            if (arr[i - 1] < arr[i] and arr[i] > arr[i + 1])
            {
                hill++;
            }
            if (arr[i - 1] > arr[i] and arr[i] < arr[i + 1])
            {
                valley++;
            }      
        }
        return hill == 1 and valley == 0;
    }
};