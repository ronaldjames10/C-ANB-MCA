public class TwoSum {
    public static void main(String[] args) {
        int[] nums = {15, 22, 9, 31, 7};
        int target = 22;
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) { // O(N^2)
                if (nums[i] + nums[j] == target)
                {
                    System.out.println("Found at Index: " + i + " and " + j);
                    return;
                }
            }
        }
    }
}
