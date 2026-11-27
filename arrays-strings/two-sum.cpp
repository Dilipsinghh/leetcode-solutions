#include <cassert>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexByValue;

        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            int needed = target - nums[i];
            auto match = indexByValue.find(needed);
            if (match != indexByValue.end()) {
                return {match->second, i};
            }
            indexByValue[nums[i]] = i;
        }

        return {};
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution solution;
    vector<int> first{2, 7, 11, 15};
    assert(solution.twoSum(first, 9) == vector<int>({0, 1}));

    vector<int> withDuplicates{3, 3};
    assert(solution.twoSum(withDuplicates, 6) == vector<int>({0, 1}));
}
#endif
