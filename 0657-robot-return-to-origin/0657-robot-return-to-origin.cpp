class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int Vertical = 0;
        int Horizontal = 0;
        
        for(auto ch : moves)
        {
            switch(ch)
            {
                case 'U':
                    Vertical++;
                    break;
                case 'D':
                    Vertical--;
                    break;
                case 'R':
                    Horizontal++;
                    break;
                case 'L':
                    Horizontal--;
                    break;
            }
        }
        
        if(Vertical == 0 && Horizontal == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};