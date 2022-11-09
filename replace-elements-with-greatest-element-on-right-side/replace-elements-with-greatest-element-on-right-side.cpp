class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
//         int len = arr.size();
//         int max = INT_MIN, flag = 0;;
        
//         for(int i = 0; i < len; i++)
//         {
//             flag = 0;
//             max = INT_MIN;
//             for(int j = i+1; j < len; j++)
//             {
//                 if(max < arr[j])
//                 {
//                     flag++;
//                     max = arr[j];
//                 }
                
//             }
//             if(flag >= 1)
//             {
//                 arr[i] = max;
//             }
//         }
        
//         arr[len-1] = -1;
        
//         return arr;
        
        int maxElement = -1;
        int i = arr.size() - 1;
        
        while(i >= 0)
        {
            int element = arr[i];
            arr[i] = maxElement;
            maxElement = max(maxElement, element);
            i--;
        }
        
        return arr;
    }
};