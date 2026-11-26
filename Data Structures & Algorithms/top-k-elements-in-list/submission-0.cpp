class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        std::unordered_map<int, int> freq;

       for(auto i : nums){
        freq[i]++;
       }

    int n = nums.size();

    std::vector<vector<int>> buckets(n + 1);

    for(auto& [num, count] : freq){
        buckets[count].push_back(num);
    }

    vector<int> result;
    for(int i = n; i >= 1; i--){
        for(int num : buckets[i]){
            result.push_back(num);
            if(result.size() == k){
                return result;
            }
        }
    }

    }
};
