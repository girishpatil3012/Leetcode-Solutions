class Solution {
public:
    double average(vector<int>& salary) 
    {        
        int minX = INT_MAX, maxX = INT_MIN;
        int sum = 0;
        int size = salary.size();
        
        for(int i = 0; i < size; i++)
        {
            sum = sum + salary[i];
            minX = min(minX, salary[i]);
            maxX = max(maxX, salary[i]);
        }
        
        double avgSalary = (sum - minX - maxX) / ((size-2) * 1.0);
        
        if(size > 2)
        {
            return avgSalary;
        }
        else
        {
            return 0;
        }
    }
};