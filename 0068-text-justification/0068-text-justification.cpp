class Solution {
public:
    vector<string> fullJustify(vector<string>& w, int width) {
        vector<string> ans;
        int word=0;//stores the sum of word length starting from index
        int index=0;//words from index to current_index not added yet
        for(int i=0;i<w.size();i++){
            if(word+i-index+w[i].size()<width){//i-index gives number of positions to add space
                word+=w[i].size();
            }
            else{
                string temp=w[index];
                if(word+w[i].size()+i-index>width)i--;//current index can't be added
                else word+=w[i].size();//current index can be addded so add its length
                int spaces=i-index;//number of positions to add space
                if(spaces==0){//only one word
                    while(temp.size()<width)temp+=" ";
                }else{
                    int extra=width-word;//length to be filled by spaces
                    int every=extra/spaces;
                    int left=extra%spaces;
                    //Example: if there are 10 spaces to be filled in 4 positions,
                    //every=(10/4)->2, left=(10%4)->2;
                    //so all 4 positions will have 2 spaces, 
                    //and left two positions will have exta 1 space.
                    string ss="";
                    for(int k=0;k<every;k++)ss+=" ";
                    for(int j=index+1;j<=i;j++){
                        if(left)temp+=" ",left--;
                        temp+=ss+w[j];
                    }
                }
                ans.push_back(temp);
                word=0;
                index=i+1;
            }
        }
        if(index<w.size()){//if some words are remaining for the last line.
            string temp=w[index];
            for(int j=index+1;j<w.size();j++){
                temp+=" "+w[j];
            }
            while(temp.size()<width)temp+=" ";  
            ans.push_back(temp);
        }
        return ans;
    }
};