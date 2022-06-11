    int majorityElement(vector<int>& nums) {
        
        
        // Moore's Algorithm
        
        int cnt = 0;
        
        int maj_element;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(cnt == 0)
            {
                maj_element = nums[i];
            }
            
            if(nums[i] == maj_element)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        
        int freq=0;
        
        for(auto i : nums)
        {
            if(i == maj_element)
            {
                freq++;
            }
        }
        
        if(freq > nums.size()/2)
            return maj_element;
        else
            return -1;
        
    }
