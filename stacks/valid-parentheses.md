# Valid Parentheses

**LeetCode:** [Problem 20](https://leetcode.com/problems/valid-parentheses/)

## Approach

Use a vector as a stack. Push each opening bracket. For a closing bracket,
check that the stack is not empty and that its most recent opening bracket is
the matching type. The string is valid only if no opening brackets remain.

## Time complexity

O(n), where n is the string length.

## Space complexity

O(n) in the worst case for the stack.

## Notes

The empty string is valid. Tests include matching bracket types, a mismatch,
an empty string, and an unclosed opening bracket.
