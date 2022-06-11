# Solution 1 , using memoization 

int f(int i , int j , vector<int>&arr , vector<vector<int>>&dp)
{
    if(i == j)
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int mini = 1e9;
    
    for(int k=i ; k<j ; k++)
    {
        int steps = arr[i-1] * arr[k] * arr[j] + f(i,k,arr,dp) + f(k+1,j,arr,dp);
        
        mini = min(steps,mini);
    }
    
    return dp[i][j] = mini;
}


int matrixMultiplication(vector<int> &arr, int N)
{
    // Write your code here.
    
    vector<vector<int>>dp(N+1,vector<int>(N+1,-1));
    
    return f(1,N-1,arr,dp);    
}



# Solution 2 , using Tabulation --->

int matrixMultiplication(vector<int> &arr, int N)
{
    // Write your code here.
    
    vector<vector<int>>dp(N+1,vector<int>(N+1,0));
    
    // base case if i==j return 0 , no need here as it is already 0 
    
    // changing parameters now 
    
    for(int i=N-1 ; i>=1 ; i--)
    {
        for(int j=i+1 ; j < N; j++)
        {
                int mini = 1e9;
    
                for(int k=i ; k<j ; k++)
                {
                    int steps = arr[i-1] * arr[k] * arr[j] + dp[i][k] + dp[k+1][j];

                    mini = min(steps,mini);
                }

                dp[i][j] = mini;
            
        }
    }
    return dp[1][N-1];
}
