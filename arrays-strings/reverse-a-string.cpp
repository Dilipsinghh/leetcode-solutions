#include <cassert>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = static_cast<int>(s.size()) - 1;

        while (left < right) {
            char temporary = s[left];
            s[left] = s[right];
            s[right] = temporary;
            ++left;
            --right;
        }
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution solution;
    vector<char> word{'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(word);
    assert(word == vector<char>({'o', 'l', 'l', 'e', 'h'}));

    vector<char> empty;
    solution.reverseString(empty);
    assert(empty.empty());
}
#endif
