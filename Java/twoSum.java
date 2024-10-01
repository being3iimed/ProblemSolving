// one pass HashMap
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> numHashMap = new HashMap<>();
        // HashMap => val : index 
        
        int l =nums.length;
        int i;
        
        // loop on the input array 
        for ( i = 0; i < l ; i++) {
            // find the complement that adds up to the target
            int comp = target - nums[i];

            // check if it is in the hashMap
            if (numHashMap.containsKey(comp)) {
                return new int[]{numHashMap.get(comp), i};
            }
            // in none, add it to the HashMap
            numHashMap.put(nums[i], i);       
        }
        // return empty integer array if there's no solution
        return new int[]{};

    }
}        
