void setZeroes(vector<vector<int>>& matrix) {
    
        int m=matrix.size();
        int n=matrix[0].size();
        int x=1,y=1;// for 1st row and column
        
        //1st row
        for(int j=0;j<n;j++)
        {
            if(matrix[0][j]==0)
                x=0;
        }
        //1sst column
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]==0)
                y=0;
        }
        //inner matrix leaving 1st row and column 
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                //mark them in 1st r and c
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        //filling 0 corresponding to each 0 in row 1 and column 1
        for(int j=1;j<n;j++)
        {
            if(matrix[0][j]==0)
                for(int i=1;i<m;i++)
                    matrix[i][j]=0;
        }
         for(int i=1;i<m;i++)
        {
            if(matrix[i][0]==0)
                for(int j=1;j<n;j++)
                    matrix[i][j]=0;
        }
        //for 1st row
        if(x==0)
        {
            for(int j=0;j<n;j++)
                matrix[0][j]=0;
            
        }
        
        //for 1st column
        if(y==0)
        {
            for(int i=0;i<m;i++)
                matrix[i][0]=0;
            
        }      
    }
