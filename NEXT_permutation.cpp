void(vector<int>&nums){
    int n=.nums.size();
    int breakpoint=-1;
    for(int i=n-1;i>0;i--){
        if(nums[i]>nums[i-1]){
            breakpoint = i-1;
            break;
        }
    }
    //no breakpoint
    if(breakpoint<0){
        sort(nums.begin(),nums.end());
    }
    for(i=n-1;i>breakpoint;i--){
        if(nums[i]>nums[breakpoint]){
            swap(nums[i],nums[breakpoint]);
            reverse(nums.begin()+breakpoint+1,nums.end());//because its already sorted in desending manner
            break;
        }
    }
}