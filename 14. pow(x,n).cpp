    double myPow(double x, int n) {
        double ans = 1.0;
        
        long long  nc = n;
        if(nc < 0)
            nc = -1*nc;
        
        while(nc)
        {
            if(nc%2)
            {
                ans = ans * x;
                nc = nc -1;
                
            }
            else
            {
                x=x*x;
                nc = nc /2;
            }
        }
        if(n<0)
        {
            ans = (double)(1.0) / (double)(ans);
        }
        return ans;
        
        
    }
