# Binary Search

**LeetCode:** [Problem 704](https://leetcode.com/problems/binary-search/)

## Approach

Maintain the part of the sorted array where the target may still be. Check the
middle value each time and discard the half that cannot contain the target.
Stop when the target is found or the search range becomes empty.

## Time complexity

O(log n), where n is the number of values.

## Space complexity

O(1) extra space.

## Notes

The input must be sorted in ascending order. The method returns `-1` when the
target is absent. Tests cover a match, a missing value, and an empty array.
