class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int mi = *min_element(heights.begin(),heights.end());
        int ma = *max_element(heights.begin(),heights.end());
        unordered_map<int,int> umap;
        vector<int> clone(heights.size());
        for(int val:heights){
            umap[val]++;
        }
        int i = 0;
        for(int val = mi; val <= ma; ++val){
            while(umap[val]>0){
                clone[i] = val;
                i++;
                umap[val]--;
            }
        }
        int res = 0;
        for(int a=0; a<heights.size(); a++){
            if(heights[a] != clone[a])++res;
        }
        return res;
    }
};