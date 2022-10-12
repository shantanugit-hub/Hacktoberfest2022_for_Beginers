class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int count=1, max_till=1;
        
        for(int i=1; i<s.size();++i)
        {
            // cout<<s[i]-s[i-1];
            if( s[i]-s[i-1]==1 )
            {
                count+=1;
                max_till = max(count, max_till);
            }
            else{
                count=1;
            }
        }
        
        return max_till;
    }
};
