// 考量4情形
// 1. 目標值在Array所有元素之前  [0, -1]
// 2. 目標值=Array中某一元素  return middle;
// 3. 目標值插入Array中的位置 [left, right]，return  right + 1
// 4. 目標值在Array所有元素後的情况 [left, right]， return right + 1
// 
// 要求O(Log(n)) => BinarySearch
// Runtime: 8 ms, faster than 39.38% of C++ online submissions for Search Insert Position.
// Memory Usage: 9.8 MB, less than 23.25% of C++ online submissions for Search Insert Position.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1; // 注意區間: 左閉右閉 [left, right]
        int middle = left + ((right - left) >> 1);// 防止溢出 等於(left + right)/2
        
        while (left <= right) { // 当left==right，區間[left, right]依然有效
            middle = left + ((right - left) >> 1);
            if (nums[middle] > target) {
                right = middle - 1; // target 在左，所以[left, middle - 1]
            } else if (nums[middle] < target) {
                left = middle + 1; // target 在右，所以[middle + 1, right]
            } else {
                return middle;
            }
        }
        return right + 1;
    }
};