class Solution {
public:
    int maxConsecutiveAnswers(string keys, int k)
    {
        int i = 0, j = 0, len = keys.size(), res = 1, ts = 0, fs = 0;
        while (j < len) {
            if
                (keys[j++] == 'T') ts++;
            else 
                fs++;
            while (min(ts, fs) > k) 
            {
                if 
                    (keys[i++] == 'T') 
                    ts--;
                else 
                    fs--;
            }
            res = max(res, j - i);
        }
        return res;
    }
};