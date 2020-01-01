//153. Find min in rotated sorted array, O(n)
class Solution {
    public int findMin(int[] nums) {
    	int n = nums.length;
    	if (n == 0){
    		return 0;
    	}
    	if (n == 1){
    		return nums[0];
    	}
    	int min = nums[0];
    	for (int i = 1; i < n; i++){
    		if (nums[i] < min){
    			return nums[i];
    		} 
    	}
    	return min;
    }
}