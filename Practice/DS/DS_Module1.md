# Module 1
## 5 Marks Questions and Answers

### Q1. Define Abstract Data Type (ADT). Explain its importance in data structure design with an example.
**Answer:**  
An **Abstract Data Type (ADT)** is a mathematical model for data types, where data and operations on the data are defined abstractly, independent of implementation details.  
It specifies **what operations** can be performed but **not how** they are implemented.  

**Importance:**  
- Provides a clear interface for data manipulation.  
- Improves **modularity** and **code reusability**.  
- Enhances **data encapsulation**.  

**Example:**  
A **Stack ADT** defines operations like `push()`, `pop()`, and `peek()` without specifying how they are implemented (array or linked list).

---

### Q2. Differentiate between linear and non-linear data structures with suitable examples.
| **Basis** | **Linear Data Structure** | **Non-Linear Data Structure** |
|------------|---------------------------|-------------------------------|
| Arrangement | Elements are stored sequentially. | Elements are connected in a hierarchical or network manner. |
| Traversal | Traversed in a single level. | Traversed through multiple paths. |
| Examples | Array, Stack, Queue, Linked List | Tree, Graph |
| Memory Utilization | Simple and continuous | Complex and dynamic |
| Implementation | Easier | More complex |

---

### Q3. Explain any five basic operations performed on data structures.
**Answer:**  
1. **Traversal** – Accessing each data element once (e.g., visiting all array elements).  
2. **Insertion** – Adding a new element to the data structure.  
3. **Deletion** – Removing an element from the structure.  
4. **Searching** – Finding the location of an element.  
5. **Sorting** – Arranging data in a specific order (ascending/descending).


---

### Q4. What is a multidimensional array? Write a note on two-dimensional arrays with an example.
**Answer:**  
A **multidimensional array** is an array of arrays where data is stored in a tabular form.  

**Two-Dimensional Array:**  
A 2D array has rows and columns, used to represent matrices or tables.  

**Example:**
```c
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
````

Here, there are 2 rows and 3 columns. Access elements using `matrix[i][j]`.

---

### Q5. Write a short note on Array of Pointers and its uses in C programming.

**Answer:**
An **array of pointers** is a collection of pointers, where each pointer stores the address of another variable or array.

**Example:**

```c
char *names[] = {"Alice", "Bob", "Charlie"};
```

Each element of the array holds the address of a string.

**Uses:**

* Efficient handling of strings.
* Dynamic data access.
* Reduces memory usage.

---

### Q6. Explain the basic string manipulation operations with examples.

**Answer:**

1. **strcpy()** – Copies one string to another.

   ```c
   strcpy(dest, src);
   ```
2. **strcat()** – Concatenates two strings.

   ```c
   strcat(s1, s2);
   ```
3. **strlen()** – Returns length of a string.

   ```c
   len = strlen(str);
   ```
4. **strcmp()** – Compares two strings.

   ```c
   strcmp(s1, s2);
   ```
5. **strrev()** – Reverses a string.

---

## 10 Marks Questions and Answers

### Q1. What is an Abstract Data Type (ADT)? Explain characteristics, advantages, and examples.

**Answer:**
An **ADT** defines a data type by its behavior (operations, possible values) without specifying implementation.

**Characteristics:**

* Encapsulation of data and operations.
* Implementation independence.
* Promotes modularity.

**Advantages:**

* Reduces complexity.
* Increases reusability.
* Easier debugging and maintenance.

**Examples:**

1. **Stack ADT** – `push()`, `pop()`, `peek()`.
2. **Queue ADT** – `enqueue()`, `dequeue()`.
3. **List ADT** – `insert()`, `delete()`, `find()`.

---

### Q2. Discuss the types of data structures. Compare linear and non-linear data structures with examples.

**Answer:**
**Types of Data Structures:**

1. **Linear Data Structures** – Elements arranged sequentially.

   * Examples: Array, Stack, Queue, Linked List.
2. **Non-linear Data Structures** – Hierarchical or network connections.

   * Examples: Tree, Graph.

**Comparison:**

| **Feature**    | **Linear**   | **Non-linear** |
| -------------- | ------------ | -------------- |
| Structure      | Sequential   | Hierarchical   |
| Traversal      | Single level | Multiple paths |
| Examples       | Array, Stack | Tree, Graph    |
| Implementation | Simple       | Complex        |

**Applications:**

* Linear: Used in CPU scheduling, data buffering.
* Non-linear: Used in databases, file systems.

---

### Q3. Describe various operations performed on arrays with examples.

**Answer:**

1. **Traversal:**
   Access each element.

   ```c
   for(i=0; i<n; i++) printf("%d", arr[i]);
   ```
2. **Insertion:**
   Add element at a position.

   ```c
   for(i=n; i>=pos; i--) arr[i]=arr[i-1];
   arr[pos]=value;
   ```
3. **Deletion:**
   Remove element from a position.
4. **Searching:**

   * **Linear Search:** Sequentially check elements.
   * **Binary Search:** Works on sorted arrays.
5. **Sorting:**

   * **Bubble Sort, Selection Sort** etc., arrange elements in order.

---

### Q4. Explain multidimensional arrays in detail. How is memory allocated for two-dimensional arrays?

**Answer:**
A **multidimensional array** stores data in multiple dimensions (rows, columns).

**Example:**

```c
int arr[2][3] = {{1,2,3},{4,5,6}};
```

* Memory stored **row-wise (row-major order)**.
* Address formula:

  ```
  LOC(A[i][j]) = Base + ((i * total_columns) + j) * size_of_element
  ```

**Uses:**

* Storing matrices, tables, images, etc.

---

### Q5. Write a detailed note on string manipulation functions in C with examples.

**Answer:**

1. **strcpy(dest, src)** – Copies string `src` to `dest`.
2. **strcat(s1, s2)** – Concatenates `s2` to `s1`.
3. **strlen(str)** – Returns length of string.
4. **strcmp(s1, s2)** – Compares two strings; returns 0 if equal.
5. **strrev(str)** – Reverses the string.
6. **strlwr(str)** / **strupr(str)** – Converts to lower/upper case.

**Example:**

```c
#include <string.h>
#include <stdio.h>

int main() {
  char s1[20] = "Hello";
  char s2[] = "World";
  strcat(s1, s2);
  printf("Concatenated: %s", s1);
  return 0;
}
```
