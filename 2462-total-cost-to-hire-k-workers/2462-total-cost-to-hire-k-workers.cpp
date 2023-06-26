/*
Approach is to store the candidates from front and back in two diff. priority queue.
Then remove the smallest cost candidate among both the queue and push a new candidate to the same
queue from where we removed last time.
*/
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long ans = 0;
        priority_queue<int, vector<int>, greater<int>> pqf, pqb;  // pqf - front pq,stores cost from front ; pqb -  back pq, stores cost from back
        int i = 0, j = costs.size() - 1;
        while( i < candidates && i <= j){  //push first and last candidate cost to both pq
            pqf.push(costs[i]);
            if(i != j) pqb.push(costs[j]);
            i++; j--;
        }
        int lastpop = 0; //keep track of which pq is used last, 0 - taken from front pq, 1 - taken from back pq
        
        //get smallest cost
        if(pqb.size() == 0 || (pqf.size() != 0 && pqf.top() <= pqb.top() ) ){
            ans += pqf.top(); pqf.pop();
            lastpop = 0;
        }else{
            ans += pqb.top(); pqb.pop();
            lastpop = 1;
        }
        
        while(--k){
            if(i <= j){   //push new cost to pq
                if(lastpop == 0 ) { pqf.push(costs[i]);  ++i; }
                else { pqb.push(costs[j]); --j; }
            }
            
            //get smallest cost
            if(pqb.size() == 0 || (pqf.size() != 0 && pqf.top() <= pqb.top() ) ){
                ans += pqf.top(); pqf.pop();
                lastpop = 0;
            }else{
                ans += pqb.top(); pqb.pop();
                lastpop = 1;
            }
        }
        return ans;
    }
};