# Move Zeroes

**LeetCode:** [Problem 283](https://leetcode.com/problems/move-zeroes/)

## Approach

Keep an index for the next position where a non-zero value belongs. Scan the
vector from left to right and swap each non-zero value into that position.
This keeps the order of the non-zero values and moves zeroes to the end.

## Time complexity

O(n), where n is the vector length.

## Space complexity

O(1) extra space; the vector is changed in place.

## Notes

The local tests verify stable order, an all-zero vector, and an empty vector.
