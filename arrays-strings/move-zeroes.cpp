#include <cassert>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nextNonZero = 0;

        for (int current = 0; current < static_cast<int>(nums.size()); ++current) {
            if (nums[current] != 0) {
                int temporary = nums[current];
                nums[current] = nums[nextNonZero];
                nums[nextNonZero] = temporary;
                ++nextNonZero;
            }
        }
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution solution;
    vector<int> mixed{0, 1, 0, 3, 12};
    solution.moveZeroes(mixed);
    assert(mixed == vector<int>({1, 3, 12, 0, 0}));

    vector<int> allZeroes{0, 0};
    solution.moveZeroes(allZeroes);
    assert(allZeroes == vector<int>({0, 0}));

    vector<int> empty;
    solution.moveZeroes(empty);
    assert(empty.empty());
}
#endif
