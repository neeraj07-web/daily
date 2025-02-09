class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        // int count=0;
        // int n=nums.size();
        // for(int i=0;i<n-1;i++){
        //    for(int j=i+1;j<n;j++){
        //     if((j-i) != (nums[j]-nums[i])){
        //         count++;
        //     }
        //    }
        // }
        // return count;

        // approach 2 : using hash map
        // tc : O(n) and sc :O(n)

        int n = nums.size();

        long long result = 0;
        for(int i = 0; i < n; i++) {
            nums[i] = nums[i]-i;
        }

        unordered_map<int, int> mp;
        mp[nums[0]] = 1;

        for(int j = 1; j < n; j++) {
            int countOfNumsj = mp[nums[j]];

            int totalNumsBeforej = j;

            int badPairs = totalNumsBeforej - countOfNumsj;

            result += badPairs;

            mp[nums[j]]++;
        }

        return result;
    }
};