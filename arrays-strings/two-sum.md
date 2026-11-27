# Two Sum

**LeetCode:** [Problem 1](https://leetcode.com/problems/two-sum/)

## Approach

Scan the numbers once while keeping each previously seen value and its index
in a hash map. For each number, look up the value needed to reach the target.
Checking before inserting the current value ensures an element is not paired
with itself.

## Time complexity

O(n) average, where n is the number of values.

## Space complexity

O(n) for the hash map.

## Notes

The function returns the two indices, as required by LeetCode. The local tests
cover a standard pair and a pair made from duplicate values.
