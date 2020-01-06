class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {

		sort(nums.begin(), nums.end());
		int target;
		vector<vector<int>> threesum;
		for (int i = 0; i<nums.size(); i++)
		{
			if (i>0 && nums[i] == nums[i - 1]) continue;
			if ((target = nums[i])>0) break;
			int l = i + 1;
			int r = nums.size() - 1;
			while (l<r)
			{
				if (target + nums[l] + nums[r]>0) r--;
				else if (target + nums[l] + nums[r]<0) l++;
				else
				{
					threesum.push_back({ target,nums[l],nums[r] });
					l++;
					r--;
					while ((nums[l] == nums[l - 1]) && l<r) l++;
					while ((nums[r] == nums[r + 1]) && r>l) r--;
				}
			}
		}
		return threesum;
	}
};
