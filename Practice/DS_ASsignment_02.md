## Q1. Explain different types of binary trees with examples.

A **binary tree** is a tree data structure where each node has at most two children, referred to as the left child and the right child.

### Types of Binary Trees

1.  **Full Binary Tree (Strictly Binary Tree)**
    * A binary tree in which every node has either **zero or two children**. No node has exactly one child.
    * **Example:**
        * The root has two children (B and C).
        * Node B has two children (D and E).
        * Node C has two children (F and G).
        * Nodes D, E, F, G are leaf nodes (zero children).
        
2.  **Perfect Binary Tree**
    * A binary tree in which **all internal nodes have two children**, and **all leaf nodes are at the same level** (or depth).
    * **Note:** A perfect binary tree is always a full binary tree and a complete binary tree.
    * **Example:** Same structure as the full binary tree example above, if D, E, F, and G are all at the same level.

3.  **Complete Binary Tree**
    * A binary tree in which **every level, except possibly the last, is completely filled**, and all nodes in the last level are **as far left as possible**.
    * **Example:**
        * Level 0 (Root A) is full.
        * Level 1 (B, C) is full.
        * Level 2 (D, E, F, G) is the last level. If we remove G, the tree is still complete because the nodes (D, E, F) are as far left as possible.
        
4.  **Balanced Binary Tree**
    * A binary tree in which the **difference between the height of the left subtree and the height of the right subtree for every node is at most 1**.
    * **Example:** **AVL Tree** and **Red-Black Tree** are examples of balanced binary search trees. The example construction in Q6 for an AVL tree is an illustration.

5.  **Degenerate (or Skewed) Binary Tree**
    * A binary tree where **every parent node has only one child**. This essentially makes the tree behave like a linked list.
    * **Example:**
        * Root A has child B (Right Skewed).
        * Node B has child C.
        * Node C has child D.
        * (A $\rightarrow$ B $\rightarrow$ C $\rightarrow$ D)

***

## Q2. If we construct a binary search tree by inserting the following data sequentially, then what is the height of the tree formed: 71 32 12 82 45 91 38 70 40 61. If the binary search tree is constructed by inserting this data in sorted order, then what will be the height of that tree.

The given sequential data for insertion is: **71, 32, 12, 82, 45, 91, 38, 70, 40, 61**.

### Part 1: Sequential Insertion

A Binary Search Tree (BST) must satisfy the property that for any node, all values in its left subtree are less than the node's value, and all values in its right subtree are greater.

**Construction Steps (Height measured as the number of edges on the longest path from the root to a leaf, where a single node tree has a height of 0):**

1.  **Insert 71:** (Root: 71)
2.  **Insert 32:** Left of 71.
3.  **Insert 12:** Left of 32.
4.  **Insert 82:** Right of 71.
5.  **Insert 45:** Right of 32.
6.  **Insert 91:** Right of 82.
7.  **Insert 38:** Left of 45.
8.  **Insert 70:** Right of 45, Left of 71 (already covered by 45), Right of 32 (already covered by 45). Wait, 70 > 32 and 70 > 45, so it should be Right of 45. *Correction*: 70 > 32, 70 > 45 (No, 70 is not an existing node).
    * Path for 70: $71 \rightarrow$ Left (32) $\rightarrow$ Right (45) $\rightarrow$ Right of 45. **(70)**
9.  **Insert 40:** Right of 32, Left of 45, Right of 38. **(40)**
10. **Insert 61:** Right of 32, Right of 45, Left of 70. **(61)**

**Final Tree Structure:**

* **Level 0:** 71
* **Level 1:** 32 (L), 82 (R)
* **Level 2:** 12 (L of 32), 45 (R of 32), 91 (R of 82)
* **Level 3:** 38 (L of 45), 70 (R of 45)
* **Level 4:** 40 (R of 38), 61 (L of 70)

The longest path is: $71 \rightarrow 32 \rightarrow 45 \rightarrow 38 \rightarrow 40$ (length 4) or $71 \rightarrow 32 \rightarrow 45 \rightarrow 70 \rightarrow 61$ (length 4).

The **height of the tree formed is 4**.

***

### Part 2: Sorted Insertion

If the data is inserted in sorted order, the data is: **12, 32, 38, 40, 45, 61, 70, 71, 82, 91**.

**Construction Steps:**

1.  **Insert 12:** (Root: 12)
2.  **Insert 32:** Right of 12.
3.  **Insert 38:** Right of 32.
4.  **Insert 40:** Right of 38.
5.  ...and so on.

The tree will be a **degenerate (skewed) binary tree** where every new node is inserted as the right child of the previous one.

**Final Tree Structure:** $12 \rightarrow 32 \rightarrow 38 \rightarrow 40 \rightarrow 45 \rightarrow 61 \rightarrow 70 \rightarrow 71 \rightarrow 82 \rightarrow 91$

The number of nodes $n=10$. The height of a degenerate tree with $n$ nodes is $n-1$.

The **height of that tree will be $10 - 1 = 9$**.

***

## Q3. The preorder traversal of a binary search tree T is 23 12 11 9 6 45 32 67 56. What are the inorder and postorder traversals of the tree T?

The **Preorder traversal** of a Binary Search Tree (BST) is: **23, 12, 11, 9, 6, 45, 32, 67, 56**.

### 1. Inorder Traversal

The **Inorder traversal** of any Binary Search Tree is always the **sorted list of its elements**.

Given the keys: 23, 12, 11, 9, 6, 45, 32, 67, 56.

The sorted list is: **6, 9, 11, 12, 23, 32, 45, 56, 67**.

The **Inorder traversal is: 6, 9, 11, 12, 23, 32, 45, 56, 67**.

***

### 2. Postorder Traversal

To find the Postorder traversal (Left, Right, Root), we first need to construct the BST from the Preorder traversal (Root, Left, Right).

**Construction:**

1.  **Root is 23** (First element of Preorder).
2.  Split the remaining Preorder sequence into Left Subtree (L) and Right Subtree (R) based on the BST property: L < Root < R.
    * Preorder remaining: **12, 11, 9, 6** (Left Subtree elements, all < 23)
    * Preorder remaining: **45, 32, 67, 56** (Right Subtree elements, all > 23)

3.  **Left Subtree (Preorder: 12, 11, 9, 6):**
    * Root is 12.
    * L of 12: 11, 9, 6 (all < 12)
    * R of 12: None.
    * *Recurse on (11, 9, 6):* Root 11. L: 9, 6. R: None.
    * *Recurse on (9, 6):* Root 9. L: 6. R: None.
    * *Recurse on (6):* Root 6.

4.  **Right Subtree (Preorder: 45, 32, 67, 56):**
    * Root is 45.
    * L of 45: 32 (32 < 45)
    * R of 45: 67, 56 (both > 45)
    * *Recurse on (67, 56):* Root 67. L: 56. R: None.

**Postorder Traversal (Left, Right, Root):**

* Traverse Left Subtree: (6, 9, 11, 12)
    * Postorder of (6): 6
    * Postorder of (9, 6): 6, 9
    * Postorder of (11, 9, 6): 6, 9, 11, 12
* Traverse Right Subtree: (32, 56, 67, 45)
    * Postorder of (32): 32
    * Postorder of (67, 56): 56, 67
    * Postorder of (45, 32, 67, 56): 32, 56, 67, 45
* Root: 23

The **Postorder traversal is: 6, 9, 11, 12, 32, 56, 67, 45, 23**.

***

## Q4. Construct binary trees from the given traversals:
### 1. Inorder: 35, 26, 93, 21, 68 ; Preorder: 68, 21, 93, 26, 35
### 2. Inorder: 16, 22, 31, 15, 46, 77, 19 ; Preorder: 15, 22, 16, 31, 77, 46, 19
### 3. Inorder: 4, 5, 6, 11, 19, 23, 43, 50, 54, 98 ; Postorder: 4, 6, 5, 19, 11, 50, 98, 54, 43, 23

A unique binary tree can be constructed from its **Inorder traversal** and either its **Preorder** or **Postorder** traversal.

### Part 1: Inorder & Preorder

* **Inorder:** 35, 26, 93, **21**, 68
* **Preorder:** **68**, 21, 93, 26, 35

1.  **Root:** The first element of Preorder is the Root: **68**.
2.  **Split Inorder:** Find 68 in Inorder.
    * Left Subtree Inorder: 35, 26, 93, 21
    * Right Subtree Inorder: None
3.  **Split Preorder:**
    * Left Subtree Preorder: 21, 93, 26, 35
    * Right Subtree Preorder: None

4.  **Left Subtree (Inorder: 35, 26, 93, 21 | Preorder: 21, 93, 26, 35):**
    * Root is 21 (First in Preorder).
    * Split Inorder (35, 26, 93, **21**):
        * Left Inorder: 35, 26, 93
        * Right Inorder: None
    * Split Preorder (21, **93, 26, 35**):
        * Left Preorder: 93, 26, 35
        * Right Preorder: None

5.  **Left of 21 (Inorder: 35, 26, 93 | Preorder: 93, 26, 35):**
    * Root is 93.
    * Split Inorder (35, 26, **93**):
        * Left Inorder: 35, 26
        * Right Inorder: None
    * Split Preorder (**26, 35**):
        * Left Preorder: 26, 35
        * Right Preorder: None

6.  **Left of 93 (Inorder: 35, 26 | Preorder: 26, 35):**
    * Root is 26.
    * Split Inorder (35, **26**):
        * Left Inorder: 35
        * Right Inorder: None
    * Split Preorder (**35**):
        * Left Preorder: 35
        * Right Preorder: None

7.  **Left of 26 (Inorder: 35 | Preorder: 35):** Root is 35.

**Structure 1 (First set):**

| Node | Parent | Child Type |
| :--- | :----- | :--------- |
| **68** | None | Root |
| **21** | 68 | Left |
| **93** | 21 | Left |
| **26** | 93 | Left |
| **35** | 26 | Left |

*Note: The traversals seem mismatched or lead to a highly skewed tree. Let's recheck the second set.*

### [cite_start]Part 2: Inorder & Preorder [cite: 9]

* **Inorder:** 16, **22**, 31, **15**, 46, 77, 19
* **Preorder:** **15**, 22, 16, 31, 77, 46, 19

1.  **Root:** **15**.
2.  **Split Inorder (16, 22, 31, 15, 46, 77, 19):**
    * Left Inorder: 16, 22, 31
    * Right Inorder: 46, 77, 19
3.  **Split Preorder (15, 22, 16, 31, 77, 46, 19):**
    * Left Preorder: 22, 16, 31
    * Right Preorder: 77, 46, 19

4.  **Left Subtree (Inorder: 16, 22, 31 | Preorder: 22, 16, 31):**
    * Root is **22**.
    * Split Inorder (16, **22**, 31): L: 16, R: 31
    * Split Preorder (22, **16, 31**): L: 16, R: 31

5.  **Right Subtree (Inorder: 46, 77, 19 | Preorder: 77, 46, 19):**
    * Root is **77**.
    * Split Inorder (46, **77**, 19): L: 46, R: 19
    * Split Preorder (77, **46, 19**): L: 46, R: 19

**Final Structure 2:**

| Node | Parent | Child Type |
| :--- | :----- | :--------- |
| **15** | None | Root |
| **22** | 15 | Left |
| **77** | 15 | Right |
| **16** | 22 | Left |
| **31** | 22 | Right |
| **46** | 77 | Left |
| **19** | 77 | Right |

***

### [cite_start]Part 3: Inorder & Postorder [cite: 10]

* **Inorder:** 4, 5, 6, 11, 19, **23**, 43, 50, 54, 98
* **Postorder:** 4, 6, 5, 19, 11, 50, 98, 54, 43, **23**

1.  **Root:** The last element of Postorder is the Root: **23**.
2.  **Split Inorder (4, 5, 6, 11, 19, 23, 43, 50, 54, 98):**
    * Left Inorder: 4, 5, 6, 11, 19
    * Right Inorder: 43, 50, 54, 98
3.  **Split Postorder (4, 6, 5, 19, 11, 50, 98, 54, 43, 23):**
    * Left Postorder (5 elements): 4, 6, 5, 19, 11
    * Right Postorder (4 elements): 50, 98, 54, 43

4.  **Left Subtree (Inorder: 4, 5, 6, 11, 19 | Postorder: 4, 6, 5, 19, 11):**
    * Root is **11** (Last in Left Postorder).
    * Split Inorder (4, 5, 6, **11**, 19): L: 4, 5, 6; R: 19
    * Split Postorder (**4, 6, 5**, **19**, 11): L: 4, 6, 5; R: 19

5.  **Right Subtree (Inorder: 43, 50, 54, 98 | Postorder: 50, 98, 54, 43):**
    * Root is **43** (Last in Right Postorder).
    * Split Inorder (**43**, 50, 54, 98): L: None; R: 50, 54, 98
    * Split Postorder (**50, 98, 54**, 43): L: None; R: 50, 98, 54

6.  **Left of 11 (Inorder: 4, 5, 6 | Postorder: 4, 6, 5):** Root is **5**. L: 4; R: 6.
7.  **Right of 11 (Inorder: 19 | Postorder: 19):** Root is **19**.
8.  **Right of 43 (Inorder: 50, 54, 98 | Postorder: 50, 98, 54):** Root is **54**. L: 50; R: 98.

**Final Structure 3:**

| Node | Parent | Child Type |
| :--- | :----- | :--------- |
| **23** | None | Root |
| **11** | 23 | Left |
| **43** | 23 | Right |
| **5** | 11 | Left |
| **19** | 11 | Right |
| **50** | 54 | Left (of 54) |
| **98** | 54 | Right (of 54) |
| **4** | 5 | Left |
| **6** | 5 | Right |
| **54** | 43 | Right |

***

## Q5. [cite_start]Binary Search Tree Construction and Traversals [cite: 11]

The **Preorder traversal** of the BST is: **67, 34, 12, 45, 38, 60, 80, 78, 95, 90**.

### 1. Construct the BST

1.  **Insert 67:** (Root: 67)
2.  **Insert 34:** Left of 67.
3.  **Insert 12:** Left of 34.
4.  **Insert 45:** Right of 34.
5.  **Insert 38:** Right of 34 $\rightarrow$ Left of 45.
6.  **Insert 60:** Right of 34 $\rightarrow$ Right of 45.
7.  **Insert 80:** Right of 67.
8.  **Insert 78:** Left of 80.
9.  **Insert 95:** Right of 80.
10. **Insert 90:** Right of 80 $\rightarrow$ Left of 95.

**Final Tree Structure:**

* **Root:** 67
* **L of 67:** 34, **R of 67:** 80
* **L of 34:** 12, **R of 34:** 45
* **L of 45:** 38, **R of 45:** 60
* **L of 80:** 78, **R of 80:** 95
* **L of 95:** 90, **R of 95:** None

### 2. Inorder Traversal

The **Inorder traversal** of a BST is the elements in **sorted order**.

Keys: 12, 34, 38, 45, 60, 67, 78, 80, 90, 95.

The **Inorder traversal is: 12, 34, 38, 45, 60, 67, 78, 80, 90, 95**.

### 3. Postorder Traversal

The **Postorder traversal** is (Left Subtree, Right Subtree, Root).

1.  **Traverse Left Subtree of 67 (Root 34):**
    * Postorder of $34$: (12) (38, 60, 45) **34**
    * Postorder of $45$: (38) (60) **45**
    * Result: **12, 38, 60, 45, 34**
2.  **Traverse Right Subtree of 67 (Root 80):**
    * Postorder of $80$: (78) (90, 95) **80**
    * Postorder of $95$: (90) **95**
    * Result: **78, 90, 95, 80**
3.  **Root:** **67**

The **Postorder traversal is: 12, 38, 60, 45, 34, 78, 90, 95, 80, 67**.

***

## Q6. [cite_start]Construct an AVL Tree [cite: 13]

An **AVL tree** is a self-balancing BST where the **balance factor** (Height of Left Subtree - Height of Right Subtree) for every node is **-1, 0, or 1**. We insert the values sequentially and perform rotations to maintain the balance property.

Values: **23, 34, 12, 11, 6, 2, 45, 4, 25, 24**.

**Insertion Steps (L = Left Rotation, R = Right Rotation, LR = Left-Right, RL = Right-Left):**

| Keys Inserted | Resulting Tree | Balance Factor & Rotation |
| :--- | :--- | :--- |
| **23, 34** | 23 (Root), 34 (R of 23) | Balanced |
| **12** | 12 (L of 23) | Balanced |
| **11** | 11 (L of 12) | **Unbalanced at 23** (BF=2: $12 \rightarrow 11$ is the path). RR Rotation on 23. |
| | **$\rightarrow$ Rotate R at 23:** **12** (Root), 23 (R), 11 (L of 12) | Balanced |
| **6** | 6 (L of 11) | Balanced |
| **2** | 2 (L of 6) | **Unbalanced at 12** (BF=2: $12 \rightarrow 11 \rightarrow 6 \rightarrow 2$). RR Rotation on 12. |
| | **$\rightarrow$ Rotate R at 12:** **6** (Root), 12 (R), 2 (L) | Balanced |
| | *New Tree:* 6 (Root), 2 (L), 12 (R). R of 12: 23. R of 23: 34. | |
| **45** | 45 (R of 34) | Balanced |
| **4** | 4 (R of 2) | Balanced |
| **25** | 25 (L of 34) | **Unbalanced at 23** (BF=-2: $23 \rightarrow 34 \rightarrow 45$). LR Rotation on 23. |
| | **$\rightarrow$ Rotate L at 34:** 23 (Root), 34 (R) $\rightarrow$ 23 (Root), 34 (R) $\rightarrow$ 23 (Root), 45 (R) | *Correction:* The violation is $23 (-2) \rightarrow 34 (-1) \rightarrow 45 (0)$. This is an **LR rotation on the subtree rooted at 23**. No, it's a simple **L rotation at 23**. |
| | **$\rightarrow$ Rotate L at 23:** **34** (Root), 23 (L), 45 (R). L of 23: 25. | *No, this is wrong.*
| | **Re-evaluation of $\mathbf{25}$ insertion:** $25$ is L of $34$. Tree is: $6(0) \rightarrow 2(1), 12(1)$. $12 \rightarrow 23(-2), 34(-1)$. $34 \rightarrow 25(0), 45(0)$. |
| | **Violation at 23 (BF=-2):** Path $23 \rightarrow 34 \rightarrow 45$. This is an **LL rotation on 34**. No, **L rotation at 23**. $23$ moves to $L$ of $34$. $34$ is the new root. $25$ stays as $L$ of $34$. $45$ is $R$ of $34$. Wait, **25 is L of 34**. |
| | **Correct Rotation:** The unbalance is $23 \rightarrow 34 \rightarrow 45$ is a path of all Right moves. This is an **RL case**. *Parent 23 (BF=-2) $\rightarrow$ Child 34 (BF=-1).* **L Rotation at 23**. |
| | $\rightarrow$ New subtree root 34. 23 becomes L of 34. 25 becomes R of 23. $45$ remains R of $34$. |
| | *The nodes 23, 25, 34, 45, 6, 2, 12, 11, 4* | |
| **24** | 24 (L of 25) | **Unbalanced at 34** (BF=2). Path: $34 \rightarrow 23 \rightarrow 25 \rightarrow 24$. LL rotation on 23. |
| | **$\rightarrow$ Rotate R at 23:** **25** (new root). $23$ is $L$ of $25$. $24$ is $R$ of $23$. $34$ is $R$ of $25$. |

**Final AVL Tree (Inorder Traversal: 2, 4, 6, 11, 12, 23, 24, 25, 34, 45):**

* **Root:** 12
* **L of 12:** 6, **R of 12:** 34
* **L of 6:** 2, **R of 6:** 11
* **R of 2:** 4
* **L of 34:** 25, **R of 34:** 45
* **L of 25:** 23
* **R of 23:** 24

***

## Q7. [cite_start]Graph Traversal (DFS and BFS) [cite: 14]

The graph is undirected. Adjacency List:
* **A:** B, D, E
* **B:** A, C, E
* **C:** B, E, F, G
* **D:** A, E
* **E:** A, B, C, D, F
* **F:** C, E, G
* **G:** C, F

### 1. Depth First Search (DFS)

DFS explores as far as possible along each branch before backtracking. Assuming **alphabetical order** for unvisited neighbors.

| Starting Vertex | DFS Traversal |
| :--- | :--- |
| **A** | A $\rightarrow$ B $\rightarrow$ C $\rightarrow$ E $\rightarrow$ D $\rightarrow$ F $\rightarrow$ G |
| **B** | B $\rightarrow$ A $\rightarrow$ D $\rightarrow$ E $\rightarrow$ C $\rightarrow$ F $\rightarrow$ G |
| **C** | C $\rightarrow$ B $\rightarrow$ A $\rightarrow$ D $\rightarrow$ E $\rightarrow$ F $\rightarrow$ G |
| **D** | D $\rightarrow$ A $\rightarrow$ B $\rightarrow$ C $\rightarrow$ E $\rightarrow$ F $\rightarrow$ G |
| **E** | E $\rightarrow$ A $\rightarrow$ B $\rightarrow$ C $\rightarrow$ F $\rightarrow$ G $\rightarrow$ D |
| **F** | F $\rightarrow$ C $\rightarrow$ B $\rightarrow$ A $\rightarrow$ D $\rightarrow$ E $\rightarrow$ G |
| **G** | G $\rightarrow$ C $\rightarrow$ B $\rightarrow$ A $\rightarrow$ D $\rightarrow$ E $\rightarrow$ F |

### 2. Breadth First Search (BFS)

BFS explores all neighbors at the present depth before moving on to the nodes at the next depth level. Assuming **alphabetical order** for neighbors.

| Starting Vertex | BFS Traversal |
| :--- | :--- |
| **A** | A $\rightarrow$ B, D, E $\rightarrow$ C, F $\rightarrow$ G |
| **B** | B $\rightarrow$ A, C, E $\rightarrow$ D, F, G |
| **C** | C $\rightarrow$ B, E, F, G $\rightarrow$ A, D |
| **D** | D $\rightarrow$ A, E $\rightarrow$ B, C, F $\rightarrow$ G |
| **E** | E $\rightarrow$ A, B, C, D, F $\rightarrow$ G |
| **F** | F $\rightarrow$ C, E, G $\rightarrow$ A, B, D |
| **G** | G $\rightarrow$ C, F $\rightarrow$ B, E $\rightarrow$ A, D |

***

## Q8. [cite_start]Hashing with Linear Probing [cite: 15, 16]

* **Array Size (m):** 17
* **Hash Function:** $h(k) = k \pmod{m} = k \pmod{17}$
* **Collision Resolution:** Linear Probing: $h_i(k) = (h(k) + i) \pmod{m}$, where $i = 0, 1, 2, \dots$
* **Keys:** **96, 39, 31, 42, 86, 90, 104, 65, 69, 122, 124**

| Key (k) | $h(k) = k \pmod{17}$ | Probe ($i$) | Final Index | Collision? |
| :--- | :--- | :--- | :--- | :--- |
| **96** | 11 | 0 | 11 | No |
| **39** | 5 | 0 | 5 | No |
| **31** | 14 | 0 | 14 | No |
| **42** | 8 | 0 | 8 | No |
| **86** | 1 | 0 | 1 | No |
| **90** | 5 | 1 | 6 | Yes (at 5) $\rightarrow$ 6 |
| **104** | 2 | 0 | 2 | No |
| **65** | 14 | 1 | 15 | Yes (at 14) $\rightarrow$ 15 |
| **69** | 1 | 1 | 3 | Yes (at 1) $\rightarrow$ 2 (occupied) $\rightarrow$ 3 |
| **122** | 3 | 1 | 4 | Yes (at 3) $\rightarrow$ 4 |
| **124** | 5 | 2 | 7 | Yes (at 5) $\rightarrow$ 6 (occupied) $\rightarrow$ 7 |

**Final Hash Table (Size 17):**

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Value** | - | 86 | 104 | 69 | 122 | 39 | 90 | 124 | 42 | - | - | 96 | - | - | 31 | 65 | - |

***

## Q9. [cite_start]Hashing with Quadratic Probing [cite: 17, 18]

* **Array Size (m):** 17
* **Hash Function:** $h(k) = k \pmod{17}$
* **Collision Resolution:** Quadratic Probing: $h_i(k) = (h(k) + i^2) \pmod{m}$, where $i = 0, 1, 2, \dots$
* **Keys:** **86, 92, 35, 27, 38, 82, 100, 61, 65, 120, 118**

| Key (k) | $h(k) = k \pmod{17}$ | Probe ($i^2$) | Final Index | Collision? |
| :--- | :--- | :--- | :--- | :--- |
| **86** | 1 | 0 | 1 | No |
| **92** | 7 | 0 | 7 | No |
| **35** | 1 | $1^2=1$ | 2 | Yes (at 1) $\rightarrow$ 2 |
| **27** | 10 | 0 | 10 | No |
| **38** | 4 | 0 | 4 | No |
| **82** | 14 | 0 | 14 | No |
| **100** | 15 | 0 | 15 | No |
| **61** | 10 | $1^2=1$ | 11 | Yes (at 10) $\rightarrow$ 11 |
| **65** | 14 | $1^2=1$ | 15 | Yes (at 14) $\rightarrow$ 15 (occupied) $\rightarrow 14+2^2=18 \equiv 1$ (occupied) $\rightarrow 14+3^2=23 \equiv 6$ |
| **120** | 1 | $2^2=4$ | 5 | Yes (at 1) $\rightarrow$ 2 (occupied) $\rightarrow 5$ |
| **118** | 16 | 0 | 16 | No |

*Note on 65:* $i=0$: $14 \pmod{17} \rightarrow$ occupied (82). $i=1$: $(14+1^2) \pmod{17} = 15 \pmod{17} \rightarrow$ occupied (100). $i=2$: $(14+2^2) \pmod{17} = 18 \pmod{17} = 1 \rightarrow$ occupied (86). $i=3$: $(14+3^2) \pmod{17} = 23 \pmod{17} = 6$.

**Final Hash Table (Size 17):**

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Value** | - | 86 | 35 | - | 38 | 120 | 65 | 92 | - | - | 27 | 61 | - | - | 82 | 100 | 118 |

***

## Q10. [cite_start]Hashing with Double Hashing [cite: 19, 20, 21]

* **Array Size (m):** 17
* **Hash Function 1:** $h_1(k) = k \pmod{17}$
* **Hash Function 2:** $h_2(k) = (k \pmod{7}) + 1$
* **Collision Resolution:** Double Hashing: $h_i(k) = (h_1(k) + i \cdot h_2(k)) \pmod{m}$, where $i = 0, 1, 2, \dots$
* **Keys:** **94, 37, 29, 40, 84, 88, 102, 63, 67, 120, 122**

| Key (k) | $h_1(k) = k \pmod{17}$ | $h_2(k) = (k \pmod{7}) + 1$ | Final Index | Collision? |
| :--- | :--- | :--- | :--- | :--- |
| **94** | 9 | 4 + 1 = 5 | 9 | No |
| **37** | 3 | 2 + 1 = 3 | 3 | No |
| **29** | 12 | 1 + 1 = 2 | 12 | No |
| **40** | 6 | 5 + 1 = 6 | 6 | No |
| **84** | 16 | 0 + 1 = 1 | 16 | No |
| **88** | 3 | $i=1$: $(3+1\cdot 5)\pmod{17}=8$ | 8 | Yes (at 3). $h_2(88) = 4+1=5$. Index 8. |
| **102** | 0 | 4 + 1 = 5 | 0 | No |
| **63** | 12 | $i=1$: $(12+1\cdot 1)\pmod{17}=13$ | 13 | Yes (at 12). $h_2(63) = 0+1=1$. Index 13. |
| **67** | 16 | $i=1$: $(16+1\cdot 5)\pmod{17}=4$ | 4 | Yes (at 16). $h_2(67) = 4+1=5$. Index 4. |
| **120** | 1 | 1 + 1 = 2 | 1 | No |
| **122** | 3 | $i=2$: $(3+2\cdot 3)\pmod{17}=9$. $i=3$: $(3+3\cdot 3)\pmod{17}=12$. $i=4$: $(3+4\cdot 3)\pmod{17}=15$ | 15 | Yes (at 3, 8). $h_2(122) = 3+1=4$. $i=1$: $(3+1\cdot 4)\pmod{17}=7$. |

*Note on 122:* $h_1(122)=3$. $h_2(122)=4$.
* $i=0$: 3 $\rightarrow$ occupied (37).
* $i=1$: $(3+1\cdot 4) \pmod{17} = 7$. $\rightarrow$ Final Index 7.

**Final Hash Table (Size 17):**

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Value** | 102 | 120 | - | 37 | 67 | - | 40 | 122 | 88 | 94 | - | - | 29 | 63 | - | - | 84 |
