class Solution {
public:
    int findLatestStep(vector<int>& arr, int m) 
    {
        int len = arr.size();
        if(m == len) 
            return m;
        set<int> s;
        s.insert(0); 
        s.insert(len+1);
        
        int steps = len-1;
        
        for(int i = len-1; i >= 0; i--)
        {
            int num = arr[i];
            s.insert(num);
            std::set<int>::iterator itr; 
            itr = s.find(num);
            int nxt = *(++itr); 
            itr--;   
            int prev = *(--itr);  
            if(nxt-num-1 == m || num-prev-1 == m) 
                return steps;       
            steps--;
        }
        return -1;
    }
};