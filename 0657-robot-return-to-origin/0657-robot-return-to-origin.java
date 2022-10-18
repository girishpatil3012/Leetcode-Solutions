class Solution {
    public boolean judgeCircle(String moves) 
    {
        int vertical = 0;
        int horizontal = 0;
        char arr[] = moves.toCharArray();
        
        for(char ch : arr)
        {
            if(ch == 'U')
            {
                vertical++;
            }
            else if(ch == 'D')
            {
                vertical--;
            }
            else if(ch == 'R')
            {
                horizontal++;
            }
            else if(ch == 'L')
            {
                horizontal--;
            }
        }
        
        if(vertical == 0 && horizontal == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}