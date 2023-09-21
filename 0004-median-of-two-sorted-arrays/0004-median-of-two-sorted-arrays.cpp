class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
       // declare a vector in which nums1 and nums2 can be mergerd 
        vector<int> finalarr;

        //merging both nums1 and nums2 in the finalarr vector
        finalarr.insert(finalarr.end(), nums1.begin(), nums1.end());
        finalarr.insert(finalarr.end(), nums2.begin(), nums2.end());

        //in order to find median of the merged vector 
        sort(finalarr.begin(), finalarr.end());

        int n = finalarr.size();

        double med;

        if(n%2 == 0){
            int mid1 = finalarr[n/2];
            int mid2 = finalarr[n/2 - 1];

            med = double(mid1 + mid2)/2;
        }
        else{
            med = double(finalarr[n/2]);
        }

        return med;

    }
};