class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
        int len = plants.size(), steps = 0, count = capacity;
        
        for(int i = 0; i < len; i++)
        {
            if(count >= plants[i])
            {
                steps++;
            }
            else 
            {
                steps += i;
                steps += i + 1;
                count = capacity;
            }
            count = count - plants[i];
        }
        return steps;
    }
};