class Solution {
public:
     vector<int>v;
     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
     {
        vector<int>ans(queries.size(),0);
        v=nums;

        sort(v.begin(),v.end());    
        int len1 = v.size();
        for(int i = 1; i < len1; i++)  
        {
           v[i]+=v[i-1];	
        }
        int len2 = queries.size();
        for(int i = 0; i < len2; i++)
        {
          ans[i] = getans(queries[i])+1;	
        }       
        return ans;
     }
    
     int getans(int limited_sum)     
     {
        int start = 0;
        int end = v.size()-1;
        int ans=-1;
        while(start<=end)
        {
            int mid = (start+end)/2;

            if(v[mid]<=limited_sum)
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
     }
};