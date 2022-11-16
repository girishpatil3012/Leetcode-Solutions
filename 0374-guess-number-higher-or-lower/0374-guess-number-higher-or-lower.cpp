/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) 
    {
        int max_no = n, min_no = 1, picked = 0;
        
        while(true)
        {
            int middle = (max_no - min_no) / 2 + min_no;
            
            int no = guess(middle);
            if(no == 0)
            {
                picked = middle;
                break;
            }
            else if(no == 1)
            {
                min_no = middle + 1;
            }
            else 
            {
                max_no = middle - 1;
            }
        }
        return picked;
    }
};