#include <cassert>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        vector<int> counts(26, 0);
        for (char letter : s) {
            ++counts[letter - 'a'];
        }
        for (char letter : t) {
            --counts[letter - 'a'];
        }

        for (int count : counts) {
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution solution;
    assert(solution.isAnagram("anagram", "nagaram"));
    assert(!solution.isAnagram("a", "ab"));
    assert(solution.isAnagram("", ""));
}
#endif
