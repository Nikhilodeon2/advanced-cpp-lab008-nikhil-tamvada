# Binary Search Tree Analysis

For a tree of `n` nodes and height `h`, insertion, search, removal, and minimum or
maximum lookup take O(h) time. A balanced tree has height O(log n), so these
operations are O(log n) on average. A skewed tree has height O(n), making them
O(n) in the worst case; inserting already sorted values can produce this shape.
The best case for search is O(1), when the requested value is at the root.

In-order, pre-order, and post-order traversals visit every node, so each takes
O(n) time. Height calculation also takes O(n), because it examines both
subtrees. The recursive operations use O(h) call-stack space; a balanced tree
needs O(log n), while a skewed tree needs O(n). Traversals additionally return
a vector containing n values.

Recursive implementations follow the tree structure directly and are concise.
Iterative implementations can avoid call-stack growth by using explicit stacks,
but require additional bookkeeping. Neither approach balances this BST, so
operation efficiency depends on its shape. A self-balancing tree is preferable
when guaranteed logarithmic operations are required.
