class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int l = nums.size();
        int a = 0;
        int b = 1;

        while (b < l) {
            if (nums[a] != nums[b]) {
                k++;
                a++;
                nums[a] = nums[b];
            }
            b++;
        }

        return k;
    }
};
