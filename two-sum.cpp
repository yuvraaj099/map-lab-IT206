class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> ans;
            bool flag = true;
            for (int i = 0; i < nums.size() - 1; i++) {
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[i] + nums[j] == target) {
                        ans.push_back(i);
                        ans.push_back(j);
                        flag = false;
                        break;
                    }
                }
                if (!flag) {
                    break;
                }
            }
            return ans;
        }
    };
