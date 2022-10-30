class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        int len = arr.size();
        bool flag = false;
        
        for(int i = 0; i < len-1; i++)
        {
            int no1 = arr[i];
            for(int j = i+1; j < len; j++)
            {
                int no2 = arr[j];
                if((no1 == (2 * no2)) || (no2 == (2 * no1)))
                {
                    flag = true;
                    break;
                }
            }
            if(flag == true)
            {
                break;
            }
        }
        return flag;
    }
};