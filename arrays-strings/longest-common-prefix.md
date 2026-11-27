# Longest Common Prefix

**LeetCode:** [Problem 14](https://leetcode.com/problems/longest-common-prefix/)

## Approach

Start with the first string as the candidate prefix. For each remaining
string, shorten the candidate from the end until it matches the beginning of
that string. If it becomes empty, there is no common prefix.

## Time complexity

O(S), where S is the total number of characters compared across the strings.

## Space complexity

O(1) extra space, not counting the returned prefix.

## Notes

An empty input list returns an empty string. Local tests cover a shared
prefix, no shared prefix, and an empty list.
