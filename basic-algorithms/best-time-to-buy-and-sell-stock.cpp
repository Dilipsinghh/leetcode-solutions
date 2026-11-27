#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice = prices[0];
        int bestProfit = 0;

        for (int i = 1; i < static_cast<int>(prices.size()); ++i) {
            bestProfit = max(bestProfit, prices[i] - lowestPrice);
            lowestPrice = min(lowestPrice, prices[i]);
        }

        return bestProfit;
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution solution;
    vector<int> risingThenFalling{7, 1, 5, 3, 6, 4};
    assert(solution.maxProfit(risingThenFalling) == 5);

    vector<int> decreasing{7, 6, 4, 3, 1};
    assert(solution.maxProfit(decreasing) == 0);

    vector<int> onePrice{5};
    assert(solution.maxProfit(onePrice) == 0);
}
#endif
