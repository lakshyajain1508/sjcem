# Module 1
## 1. Differentiate linear and non linear data structures with examples.

| Feature | Linear Data Structure | Non-Linear Data Structure |
| :--- | :--- | :--- |
| **Definition** | Data elements are arranged sequentially, with each element connected to its predecessor and successor. | Data elements are arranged hierarchically or non-sequentially; one element can be connected to multiple others. |
| **Arrangement** | Single-level, forming a straight line. | Multi-level, forming branches or networks. |
| **Traversal** | Single run (easy to traverse). | Complex traversal (requires visiting multiple paths/levels). |
| **Memory** | Can use either contiguous (like Arrays) or scattered (like Linked Lists) memory. | Primarily uses scattered memory (non-contiguous). |
| **Use Case** | Ideal for simple lists, task scheduling, or implementing temporary data storage. | Ideal for modeling real-world relationships, hierarchies, and complex networks. |
| **Examples** | **Arrays**, **Linked Lists**, **Stacks**, **Queues** | **Trees**, **Graphs**, **Hash Tables** |

***

### Simple Examples & Analogy

#### Linear Data Structure Analogy: A Single-File Line 🚶‍♂️🚶‍♀️
Imagine a line of people waiting for a bus. Each person (data element) is connected to only the person in front of them and the person behind them. You can visit everyone by walking the line once.

* **Array:** People standing shoulder-to-shoulder, in fixed, pre-assigned spots.
* **Queue:** People entering the line from the back and leaving from the front (First-In, First-Out).
* **Stack:** A stack of plates: the last plate placed on top is the first one you take off (Last-In, First-Out).

#### Non-Linear Data Structure Analogy: A Family Tree or a Map 🌳🗺️
Imagine a family tree or a road map.

* **Tree:** A **family tree** where a parent (node) can have multiple children (branches), and to see everyone, you must go down through multiple generations (levels).
* **Graph:** A **road map** where a city (node) can be connected to many other cities by various roads (edges). There are multiple paths to get from point A to point B.

## 2. Compare traversal operation in linear and non linear data structure.

#### Comparison of Traversal Operations

| Feature | Linear Data Structures (Arrays, Linked Lists, Stacks, Queues) | Non-Linear Data Structures (Trees, Graphs) |
| :--- | :--- | :--- |
| **Nature** | **Sequential** and **Direct**. Elements are connected in a single path (one-to-one relationship). | **Non-Sequential** and **Complex**. Elements can have multiple neighbors (one-to-many or many-to-many relationship). |
| **Methods** | Usually a single, simple method: **Iteration**. Start at the beginning and follow the single link/index to the next element until the end is reached. | Requires specialized algorithms to manage branching and cycles: **Depth-First Search (DFS)**, **Breadth-First Search (BFS)**, and variations (like Inorder, Preorder, Postorder for Trees). |
| **Completeness** | Traversal is inherently **complete** in a single run, as you simply visit every element from first to last. | Traversal is complete only if the algorithm is correctly implemented to ensure all nodes are visited and none are missed, especially in complex graphs with cycles. |
| **Requirement** | Only needs a **starting point** (e.g., the first element/root node). | Needs both a **starting point** and a **way to track visited nodes** (e.g., a "visited" array or set) to prevent infinite loops in structures with cycles (like Graphs). |
| **Complexity** | Generally $O(n)$, where $n$ is the number of elements, as each element is visited exactly once in a simple loop. | Also typically $O(V+E)$ for Graphs (V vertices, E edges) or $O(n)$ for Trees, but the underlying implementation is more complex due to recursion or explicit use of Stacks/Queues. |

***

Analogy

Think of **Linear Traversal** as **walking down a hallway** 🚶. You start at one end, and you simply move forward to the next door until you reach the end.

Think of **Non-Linear Traversal** as **exploring a maze or a cavern system** 🧭. You need a strategy (like always turning right or marking passages) to make sure you visit every single room and don't get lost in a loop.
*** 
## 3. Analyze the concept of Abstract Data Types (ADT) and how they differ from concrete data structures. with examples of ADTs such as List, Stack, and Queue.
An **Abstract Data Type (ADT)** is a conceptual model or a mathematical specification of a data type, defined only by the **operations** that can be performed on it and the **behavior** of those operations, **without specifying how the data is stored or how the operations are implemented.**

In simple terms, an ADT defines the **"What"** (the interface or contract) and hides the **"How"** (the implementation details). This principle is fundamental to data abstraction and object-oriented programming.

---

## ADT vs. Concrete Data Structure

The core difference lies in the level of abstraction and focus:

| Feature | Abstract Data Type (ADT) | Concrete Data Structure |
| :--- | :--- | :--- |
| **Focus** | **Behavior** (The interface or "What" it does). | **Implementation** (The physical arrangement or "How" it works). |
| **Concept** | Theoretical, mathematical model. **Language-independent**. | Practical, programming-language-specific implementation. |
| **Goal** | **Data Abstraction** and Information Hiding. | **Memory Management** and performance optimization. |
| **Examples** | **List, Stack, Queue, Set, Map.** | **Array, Linked List, Hash Table, Binary Tree.** |
| **Flexibility** | A single ADT can have **multiple** implementations. | A single data structure can implement **multiple** ADTs. |

**Analogy:**
* An **ADT** is like a **Blueprint** for a house: it defines the rooms (data) and the doorways (operations) but not the actual construction materials (implementation).
* A **Data Structure** is like the **physical house** built using that blueprint: it specifies whether the walls are brick (Array) or wood (Linked List).

---

## Examples of Abstract Data Types (ADTs)

### 1. List ADT

The List ADT is an ordered sequence of elements. Its definition is based purely on the operations it supports:

| Operation | Behavior |
| :--- | :--- |
| $\text{insert}(i, \text{item})$ | Puts an item at a specified index $i$. |
| $\text{remove}(i)$ | Deletes the element at index $i$. |
| $\text{get}(i)$ | Retrieves the element at index $i$. |
| $\text{size}()$ | Returns the number of elements. |

**Concrete Implementations:**
* **Array:** Uses a contiguous block of memory. $\text{get}(i)$ is very fast $\mathbf{O(1)}$, but $\text{insert}(i)$ or $\text{remove}(i)$ requires shifting elements, which is slow $\mathbf{O(n)}$.
* **Linked List:** Uses nodes connected by pointers. $\text{insert}(i)$ or $\text{remove}(i)$ can be faster if the position is known $\mathbf{O(1)}$, but $\text{get}(i)$ is slow $\mathbf{O(n)}$ because it must traverse the list.

***

### 2. Stack ADT 🧱

The Stack ADT is a linear collection of elements that follows the **Last-In, First-Out (LIFO)** principle. It restricts all insertions and deletions to one end, called the **Top**.

| Operation | Behavior |
| :--- | :--- |
| $\text{push}(\text{item})$ | Adds an item to the **Top** of the stack (Insertion). |
| $\text{pop}()$ | Removes and returns the item from the **Top** (Deletion). |
| $\text{peek}()$ | Returns the item at the Top **without removing it**. |
| $\text{isEmpty}()$ | Checks if the stack has any elements. |

**Concrete Implementations:**
* **Array:** A simple array can be used, with an index variable tracking the $\text{Top}$. This is efficient for both $\text{push}$ and $\text{pop}$ operations, which are typically $\mathbf{O(1)}$.
* **Singly Linked List:** A linked list where the insertions and deletions only happen at the $\text{Head}$ (which represents the $\text{Top}$). This also provides $\mathbf{O(1)}$ performance for core operations.

***

### 3. Queue ADT 🧍

The Queue ADT is a linear collection of elements that follows the **First-In, First-Out (FIFO)** principle. It restricts insertions to one end (the **Rear**) and deletions to the other end (the **Front**).

| Operation | Behavior |
| :--- | :--- |
| $\text{enqueue}(\text{item})$ | Adds an item to the **Rear** of the queue (Insertion). |
| $\text{dequeue}()$ | Removes and returns the item from the **Front** (Deletion). |
| $\text{peek}()$ | Returns the item at the Front **without removing it**. |
| $\text{isEmpty}()$ | Checks if the queue has any elements. |

**Concrete Implementations:**
* **Circular Array:** An array where the $\text{Front}$ and $\text{Rear}$ indices wrap around to efficiently use memory. This gives $\mathbf{O(1)}$ performance for $\text{enqueue}$ and $\text{dequeue}$.
* **Singly Linked List:** A linked list with pointers to both the $\text{Head}$ (Front) and the $\text{Tail}$ (Rear). This also ensures $\mathbf{O(1)}$ performance for both core operations.

# Module 4
## 1. Explain the difference between a B Tree and a B+ Tree with suitable diagram.
B-Trees and B+ Trees are both self-balancing tree structures optimized for disk-based storage systems like databases and file systems. Their primary purpose is to minimize disk I/O operations (accessing data on the disk) by keeping the tree shallow.

The key differences lie in **where the data is stored** and **how sequential data access is handled**.

#### Key Differences

| Feature | B-Tree | B+ Tree |
| :--- | :--- | :--- |
| **Data Storage** | Data pointers (records) can be stored in **both internal (non-leaf) nodes AND leaf nodes.** | Data pointers (records) are stored **ONLY in leaf nodes**. Internal nodes store **keys only**. |
| **Internal Nodes** | Store a key and its corresponding data pointer. | Store **only keys and child pointers**. No data. |
| **Duplicate Keys** | Keys may or may not be repeated in lower levels. | **All keys** are duplicated in the leaf nodes, which contain the actual data. |
| **Sequential Access** | Difficult. Requires a complete **in-order traversal** of all levels of the tree. | Excellent. Leaf nodes are linked together to form a **sequential linked list**, allowing for a fast, linear scan of all data records. |
| **Search Time** | Faster if the target is found in an internal node ("early exit"). | Slower on average because search **must always traverse to the leaf node** to find the data. |
| **Space Utilization** | Lower "fan-out" (fewer child pointers per node) because internal nodes are burdened with data pointers. | Higher "fan-out" (more keys/pointers per internal node) because internal nodes are smaller, leading to a shallower tree. |
| **Typical Use** | Indexing systems where random access is dominant and internal data is frequently accessed. | **Database Indexing (most common)** and file systems, where range queries (sequential access) are common. |

---

#### Structural Comparison (with Diagram)

### B-Tree

In a B-Tree, when a key is stored in an internal node, the data associated with that key is stored right there with it.

* **To find data:** The search can terminate at **any node** (root, internal, or leaf).



---

#### B+ Tree

In a B+ Tree, **all data is collected at the leaf level**. The internal nodes serve only as an index or "roadmap" for navigating to the correct leaf node.

* **To find data:** The search **always goes down to the leaf node**.
* **Sequential Access:** The linked list connecting all leaf nodes allows for highly efficient range queries (e.g., "Find all records between key 10 and key 50").



---

The advantage of the B+ Tree's high fan-out and linked leaves has made it the **default indexing structure** for most modern database systems (like MySQL and PostgreSQL).


# Module 6 
## 1. Define Linear Search and explain how it works.
A **Linear Search**, also known as a **Sequential Search**, is the simplest method for finding an element within a list or array. It works by checking every single element in the data structure, one after the other, until a match for the target value is found or the entire list has been searched.

It's called "linear" because it goes through the data in a straight line or sequential fashion.

***

#### How Linear Search Works

The algorithm is straightforward and does not require the data to be sorted beforehand. Here is the step-by-step process:

1.  **Start at the Beginning:** The search begins at the first element (index 0) of the list.
2.  **Compare:** The algorithm compares the current element with the **target value** (the element you are looking for).
3.  **Match Found:**
    * If the current element **matches** the target value, the search is successful, and the algorithm returns the position (index) of that element and stops.
4.  **Continue Search:**
    * If the current element does **not** match the target, the algorithm moves to the next element in the list and repeats the comparison process.
5.  **End of List:**
    * If the algorithm reaches the end of the list and the target element has not been found, the search is unsuccessful, and it typically returns a special value (like -1 or a null indicator) to signify that the element is not present.

### Example

List: $\mathbf{[10, 5, 20, 15, 8]}$
Target Value: **15**

| Step | Index | Element | Comparison ($Element == 15$?) | Result |
| :---: | :---: | :---: | :---: | :--- |
| **1** | 0 | 10 | $10 \neq 15$ (False) | Move to next |
| **2** | 1 | 5 | $5 \neq 15$ (False) | Move to next |
| **3** | 2 | 20 | $20 \neq 15$ (False) | Move to next |
| **4** | **3** | **15** | $\mathbf{15 = 15}$ (True) | **Match Found!** |

The search stops at step 4 and returns index 3.

## Efficiency (Time Complexity)

Linear Search is one of the least efficient algorithms for large datasets, as its performance scales directly with the size of the list ($n$).

* **Best Case: $\mathbf{O(1)}$**
    * The target element is the very **first** item in the list. Only one comparison is needed.
* **Worst Case: $\mathbf{O(n)}$**
    * The target element is the **last** item in the list, or the element is **not present** at all. The algorithm must check all $n$ elements.
* **Average Case: $\mathbf{O(n)}$**
    * On average, the algorithm has to check about half of the elements ($\frac{n+1}{2}$).

Linear search is most practical for lists that are **small** or **unordered**, as it requires no sorting or pre-processing.
## 2. Define Binary Search and explain how it works.
**Binary Search** is an **efficient** searching algorithm used to find the position of a target value within a **sorted** array or list.

It works on the principle of **"divide and conquer,"** repeatedly dividing the search interval in half. This approach drastically reduces the number of comparisons needed compared to a Linear Search.

***

#### How Binary Search Works (Step-by-Step)

Binary Search *requires* the input list to be sorted.

1.  **Define the Search Space:** Start by defining the entire list as the initial search interval, setting a **low** index (start of the list) and a **high** index (end of the list).
2.  **Find the Middle Element:** Calculate the **middle index** ($mid$) of the current search interval.
3.  **Compare:** Compare the element at the $mid$ index with the **target value** you are searching for.
    * **Case 1: Match!** If the middle element equals the target, the search is successful, and the algorithm returns the $mid$ index.
    * **Case 2: Target is Smaller.** If the middle element is **greater** than the target, the target must be in the **lower (left) half** of the list (since the list is sorted). The algorithm then updates the **high** index to be one position less than $mid$ ($high = mid - 1$). The upper half is discarded.
    * **Case 3: Target is Larger.** If the middle element is **smaller** than the target, the target must be in the **upper (right) half** of the list. The algorithm updates the **low** index to be one position more than $mid$ ($low = mid + 1$). The lower half is discarded.
4.  **Repeat:** The process repeats from Step 2 with the new, reduced search interval (the remaining half).
5.  **Termination:** The search continues until a match is found (Case 1) or the **low** index exceeds the **high** index, which means the target value is not present in the list.

#### Example Walkthrough

List: $\mathbf{[2, 5, 8, 12, 16, 23, 38, 56, 72, 91]}$ (10 elements)
Target Value: **23**

| Step | Low Index | High Index | Middle Index (mid) | Element at mid | Comparison | New Search Space |
| :--: | :-------: | :--------: | :----------------: | :------------: | :--------: | :--------------- |
| **1** | 0 | 9 | $4$ | $16$ | $16 < 23$ | Target must be in the right half. |
| **2** | $4+1 = 5$ | 9 | $7$ | $56$ | $56 > 23$ | Target must be in the left half. |
| **3** | 5 | $7-1 = 6$ | $5$ | $23$ | **$23 = 23$** | **Match Found!** |

The search successfully returns the index **5** in just three steps.

***

#### 🚀 Performance (Time Complexity)

Binary search is significantly faster than Linear Search for large lists.

* **Time Complexity: $\mathbf{O(\log n)}$** (Logarithmic Time)
    * Because the search space is cut in half with every comparison, the number of steps required to find an element grows very slowly as the list size ($n$) increases.
    * *Example:* A list of 1 million elements ($n=1,000,000$) requires at most 20 comparisons ($\log_2 1,000,000 \approx 19.9$).
* **Space Complexity: $\mathbf{O(1)}$** (Constant Space)
    * The algorithm only needs a few variables (low, high, mid) to track indices, regardless of the input size.

## 3. Discuss the advantages and disadvantages of Linear Search compared to Binary Search.
The choice between **Linear Search** and **Binary Search** depends primarily on the **state (sorted or unsorted)** and **size** of the data set, as well as the frequency of search operations. Binary Search offers superior performance on large data, but only if the data is sorted.

***

#### Comparison of Advantages and Disadvantages

#### Linear Search

| Advantages | Disadvantages |
| :--- | :--- |
| **No Precondition:** Works on **unsorted** arrays/lists. | **Slow for Large Data:** Worst-case and average-case time complexity is $\mathbf{O(n)}$, making it slow for large datasets. |
| **Simple to Implement:** Requires very little code and is easy to understand. | **Inefficient for Multiple Searches:** If the same list needs to be searched many times, the repeated $\mathbf{O(n)}$ checks are very inefficient. |
| **Works on Any Structure:** Can be used on non-random-access structures like **Linked Lists**. | **Does Not Use Structure:** Cannot leverage the benefits of a sorted list to speed up the search. |
| **Low Overhead:** The simple loop structure has minimal overhead, making it faster than Binary Search for **very small arrays** (typically less than 15-20 elements). | |

---

##### Binary Search

| Advantages | Disadvantages |
| :--- | :--- |
| **Extremely Fast:** Time complexity is $\mathbf{O(\log n)}$, meaning search time grows very slowly with list size. It's the standard for large, static data. | **Requires Sorted Data:** The biggest drawback is that the data **must be sorted** before searching can begin. |
| **Efficient for Multiple Searches:** The one-time cost of sorting ($\mathbf{O(n \log n)}$) is quickly paid off if you perform many searches ($\mathbf{O(\log n)}$ each). | **Pre-sorting Overhead:** If you only search once, the initial sorting time ($\mathbf{O(n \log n)}$) will be slower than a single Linear Search ($\mathbf{O(n)}$). |
| **Highly Scalable:** Maintains high efficiency even as the data set scales to millions or billions of elements. | **Random Access Required:** Requires the ability to jump to any index (the middle element), which makes it inefficient or impossible for structures like **Linked Lists**. |

***

#### When to Use Which Algorithm

| Scenario | Recommended Algorithm | Rationale |
| :--- | :--- | :--- |
| **Small Array** (e.g., $n < 20$) | **Linear Search** | Simplicity and low overhead make it marginally faster than Binary Search due to the simpler code and lack of sorting requirement. |
| **Unsorted Data** (single search) | **Linear Search** | Sorting first ($\mathbf{O(n \log n)}$) would be much slower than simply searching ($\mathbf{O(n)}$). |
| **Large, Sorted Array** (multiple searches) | **Binary Search** | Its $\mathbf{O(\log n)}$ complexity offers massive performance gains over $\mathbf{O(n)}$ for large $n$. |
| **Linked List** | **Linear Search** | Linked Lists do not allow for efficient random access to find the middle element, a requirement for Binary Search. |
