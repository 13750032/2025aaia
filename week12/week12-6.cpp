//week12-6.cpp
//Leetcode 1920. Build Array from Rermutation
//��for�j��A��}�Cans[i]=nums[nums[i]]
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N=nums.size();//�}�C���j�p
        vector<int> ans(N);//ans���j�p�A�ON�C�p�߬O��A��
        for(int i=0;i<N;i++){
            ans[i]=nums[nums[i]];//�D�حn�A���o��
        }
        return ans;
    }
};
