class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        long int m = 2*n;
        long int temp;
        
        for(long int i=n; i<=m; ++i)
        {
            if(i%2==0 && i%n==0)
            {
                temp = i;
                break;
            }
        }
        
        return temp;
    }
};
