# Reverse a String

**LeetCode:** [Problem 344](https://leetcode.com/problems/reverse-string/)

## Approach

Use two indexes, one at the beginning and one at the end. Swap the characters
at those indexes and move both indexes toward the center.

## Time complexity

O(n), where n is the number of characters.

## Space complexity

O(1) extra space; the input vector is changed in place.

## Notes

The method has LeetCode's required `void reverseString(vector<char>& s)`
signature. Local tests include an odd-length word and an empty vector.
