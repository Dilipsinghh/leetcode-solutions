#include <cassert>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = static_cast<int>(nums.size()) - 1;

        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] == target) {
                return middle;
            }
            if (nums[middle] < target) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }

        return -1;
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution solution;
    vector<int> values{-1, 0, 3, 5, 9, 12};
    assert(solution.search(values, 9) == 4);
    assert(solution.search(values, 2) == -1);

    vector<int> empty;
    assert(solution.search(empty, 1) == -1);
}
#endif
