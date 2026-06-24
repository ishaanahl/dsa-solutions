class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = nums.size();
        int a = 0;
        int b = l-1;
        int k = 0;

        while (a <= b) {
            if (nums[b] == val) {
                b--;
                k++;
            }
            else if (nums[a] == val) {
                nums[a] = nums[b];
                a++;
                b--;
                k++;
            } 
            else {
                a++;
            }
        }

        return l-k;
    }
};
