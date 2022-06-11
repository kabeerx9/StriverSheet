// memoization --->    

int f(int i , int j , vector<int>&cuts)
    {
        if(i>j)
            return 0;
        
        int mini = 1e9;
        
        for(int ind = i ; ind<=j ; ind++)
        {
            long long cost = cuts[j+1] - cuts[i-1] + f(i,ind-1,cuts) + f(ind+1,j,cuts);
            
            if(cost < mini)
                mini = cost;

        }
        
        return mini;
    }
    
    
    int minCost(int n, vector<int>& cuts) {
        
        int c = cuts.size();
        
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        
        sort(cuts.begin(),cuts.end());
        
        
        
        return f(1,c,cuts);
        
        
        
    }


// TABULATION --->
    
    int minCost(int n, vector<int>& cuts) {
        
        int c = cuts.size();
        
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        
        sort(cuts.begin(),cuts.end());
        
        
        vector<vector<int>>dp(c+2,vector<int>(c+2,0));
        
        // return f(1,c,cuts);
        
        for(int i=c ; i>=1 ; i--)
        {
            for(int j=1 ; j<=c ; j++)
            {
                // base case
                if(i > j)
                    continue;
                int mini = 1e9;
        
                for(int ind = i ; ind<=j ; ind++)
                {
                    long long cost = cuts[j+1] - cuts[i-1] + dp[i][ind-1] + dp[ind+1][j];

                    if(cost < mini)
                        mini = cost;

                }

                dp[i][j] = mini;
                
            }
        }
        
        return dp[1][c];
        
        
        
    }
