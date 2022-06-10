    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin() , intervals.end());
        
        if(intervals.size() <=1)
            return intervals;
        
        vector<vector<int>>output;
        
        output.push_back(intervals[0]);
        
        for(int i=1 ; i<intervals.size() ; i++)
        {
            if(output.back()[1] >= intervals[i][0])
            {
                output.back()[1] = max(output.back()[1] , intervals[i][1]);
                
            }
            else
                output.push_back(intervals[i]);
        }
        
        return output;
    }
