# Best Time to Buy and Sell Stock

**LeetCode:** [Problem 121](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Approach

Scan prices from left to right. Keep the lowest price seen so far and calculate
the profit from selling at each current price. Save the largest profit found.
This only considers buying before selling.

## Time complexity

O(n), where n is the number of prices.

## Space complexity

O(1) extra space.

## Notes

If prices only decrease, the best choice is not to trade, so the result is
zero. Tests cover a profitable sequence, decreasing prices, and one price.
