class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count_one=0;
        bool is_odd= (s[s.size()-1]=='1' ? true : false);

        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                count_one++;
            }
        }
        
        for(int i=0; i<s.size()-1; i++){
            if(count_one>1){
                s[i]='1';
                count_one--;
            }
            else{
                s[i]='0';
            }
        }
        if(!is_odd){
            s[s.size()-1]='1';
        }

        return s;
    }
};