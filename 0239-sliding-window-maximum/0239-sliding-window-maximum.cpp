class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>=n) return {*max_element(nums.begin(),nums.end())};
       vector<int>ans;
       deque<int>dq;
      
    
       int j=0,i=0;
       while(j<n){
       while(!dq.empty()&& dq.back()<nums[j]) dq.pop_back(); //remove all the elements in queue which are smller than the element we are comparing with in nums
       dq.push_back(nums[j]);  //add the element in the queue
       if(j-i+1<k) j++;        //move the window side
       else if(j-i+1==k){           
           ans.push_back(dq.front());  //queue front stores the ans(the max element in window)
           if(dq.front()==nums[i]) dq.pop_front();   //slide the window by removing the prev elemnt of nums if exist in queue
           j++;i++;
       }
       
       }
       return ans;
    }
};