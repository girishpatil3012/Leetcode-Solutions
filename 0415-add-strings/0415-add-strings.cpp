class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        if(num1 == "0")
        {
            return num2;
        }
        
        if(num2 == "0") 
        {
            return num1;
        }

        int i = num1.length() - 1; 
        int j = num2.length() - 1; 
        
        if(i < j)
        { 
            swap(num1,num2); swap(i,j);
        } 
        
        int carry = 0; 
        while(i >= 0 && j >= 0)
        {
            int x = num1[i]-'0'; 
            int y = num2[j]-'0'; 
            int sum = x + y + carry; 
            carry = sum/10; 
            
            if(sum >= 10)
            { 
                sum = sum % 10;
            } 
            
            num1[i] = sum + '0'; 
            
            i--;
            j--;
        }
        
        while(carry && i >= 0)
        {
            int x = num1[i] - '0';
            int sum = x + carry;
            carry = sum/10;
            if(sum >= 10) sum = sum%10;
            num1[i] = sum + '0';
            i--;
        }
        
        if(carry)
        {
            num1 = '1' + num1;
        }
        
        return num1;
    }
};