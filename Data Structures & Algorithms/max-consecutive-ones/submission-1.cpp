class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=0;
        int start =0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
            start=i+1;
           }
           else{
            maximum= max(maximum,i-start+1);
           }
        }
        return maximum;
    }
};