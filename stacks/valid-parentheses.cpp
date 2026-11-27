#include <cassert>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> openingBrackets;

        for (char bracket : s) {
            if (bracket == '(' || bracket == '[' || bracket == '{') {
                openingBrackets.push_back(bracket);
            } else {
                if (openingBrackets.empty()) {
                    return false;
                }

                char opening = openingBrackets.back();
                openingBrackets.pop_back();
                if ((bracket == ')' && opening != '(') ||
                    (bracket == ']' && opening != '[') ||
                    (bracket == '}' && opening != '{')) {
                    return false;
                }
            }
        }

        return openingBrackets.empty();
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution solution;
    assert(solution.isValid("()[]{}"));
    assert(!solution.isValid("(]"));
    assert(solution.isValid(""));
    assert(!solution.isValid("("));
}
#endif
