    void rotate(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0 ; i<row ; i++ )
        {
            for(int j=0 ; j<col ; j++)
            {
                if(j>i)
                {
                    swap(matrix[i][j] , matrix[j][i]);
                }
            }
        }
        
        // ab column wise sare elements swap , scol se ecol tak
        
        int scol = 0;
        int ecol = col-1;
        
        while(scol<ecol)
        {
            for(int i=0 ; i<row ; i++)
            {
                swap(matrix[i][scol] , matrix[i][ecol]);
            }
            scol++;
            ecol--;
        }
        
    }
