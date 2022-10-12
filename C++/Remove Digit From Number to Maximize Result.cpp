class Solution {
public:
    string removeDigit(string number, char digit) {
        string temp, ans;
        for(int i=0;i<number.size();++i)
        {
            if(digit == number[i]){
                temp = number;
                temp.erase(temp.begin()+i);
                ans = max(temp, ans);
            }
            
        }
        
        return ans;
        
    }
    
    
};
