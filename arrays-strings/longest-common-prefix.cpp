#include <cassert>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string prefix = strs[0];
        for (int i = 1; i < static_cast<int>(strs.size()); ++i) {
            while (strs[i].compare(0, prefix.size(), prefix) != 0) {
                prefix.pop_back();
                if (prefix.empty()) {
                    return "";
                }
            }
        }

        return prefix;
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution solution;
    vector<string> words{"flower", "flow", "flight"};
    assert(solution.longestCommonPrefix(words) == "fl");

    vector<string> noSharedPrefix{"dog", "racecar", "car"};
    assert(solution.longestCommonPrefix(noSharedPrefix).empty());

    vector<string> noWords;
    assert(solution.longestCommonPrefix(noWords).empty());
}
#endif
