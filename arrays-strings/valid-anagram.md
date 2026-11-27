# Valid Anagram

**LeetCode:** [Problem 242](https://leetcode.com/problems/valid-anagram/)

## Approach

First compare the string lengths. Then count each lowercase letter in the
first string and subtract each letter in the second. The strings are anagrams
exactly when all counts return to zero.

## Time complexity

O(n), where n is the string length.

## Space complexity

O(1), using a fixed-size array of 26 letter counts.

## Notes

This solution follows the problem constraint that the strings contain
lowercase English letters. Tests cover a valid anagram, unequal lengths, and
two empty strings.
