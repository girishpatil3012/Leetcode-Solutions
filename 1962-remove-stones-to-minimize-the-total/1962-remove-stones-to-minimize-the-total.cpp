class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) 
    {
        priority_queue<int> qp; 
        int x = 0, sum=0;
        
        for(auto a:piles)
        {
            qp.push(a);
        }
            
        while(k--)
        {
            x=qp.top();
            qp.pop(); 
            x-=floor(x/2);  
            qp.push(x);   
        }
        
        while(!qp.empty())
        {
            sum += qp.top();
            qp.pop();    
        }
        return sum;
    }
};