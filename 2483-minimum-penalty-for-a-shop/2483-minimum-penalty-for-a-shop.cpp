class Solution {
public:
    int bestClosingTime(string customers) 
    {
        int len = customers.length(), index = 0, maxi = 0;
        pair<int,int> counter = {0,0};
        
        for(int i = 0; i < len; i++)
        {
            if(customers[i] == 'Y')
            {
                counter.first++;
                counter.second = i+1;
            }
            else
            {
                counter.first--;
                counter.second = i;
            }
            
            if(counter.first > maxi)
            {
                index = counter.second;
            }
            maxi = max(maxi, counter.first);
        }
        return index;
    }
};