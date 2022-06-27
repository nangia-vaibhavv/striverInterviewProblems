class Solution{
    public:
     int maxLen(vector<int>&A, int n)
    {  
        // on^2
        int maxL=0;
        for(int i=0;i<n;i++)
        {
           int curr_sum=0;
            for(int j=i;j<n;j++)
            {
                curr_sum+=A[j];
                if(curr_sum==0)
                {
                    maxL=max(maxL,j-i+1);
                }
            }
        }
        return maxL;
   
    // unordered_map<int, int> presum;

    // int sum = 0; // Initialize the sum of elements
    // int max_len = 0; // Initialize result

    // // Traverse through the given array
    // for (int i = 0; i < n; i++) {
    //     // Add current element to sum
    //     sum += A[i];
    //     if (sum == 0)
    //         max_len = i + 1;

    //     // Look for this sum in Hash table
    //     if (presum.find(sum) != presum.end()) {
    //         // If this sum is seen before, then update max_len
    //         max_len = max(max_len, i - presum[sum]);
    //     }
    //     else {
    //         // Else insert this sum with index in hash table
    //         presum[sum] = i;
    //     }
    // }

    // return max_len;
    }

};