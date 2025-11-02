# 3 Marks

### **Q1. Explain how the DBMS architecture helps in handling the complex database.**

1. **Three-level architecture** (Internal, Conceptual, External) separates user view from physical storage.
2. **Data abstraction** hides complexity by showing only necessary details to the user.
3. **Data independence** allows changes in schema without affecting application programs.
4. **Efficient data access** through query optimization and indexing.
5. **Security and authorization** maintained through layers and access controls.
6. **Backup and recovery** features ensure data protection and reliability.

---

### **Q2. Explain the concept of different keys to identify records in an employee database. Illustrate with an example.**

1. **Primary Key:** Unique identifier for each record.
   Example: *EmpID* in Employee(EmpID, Name, Dept).
2. **Candidate Key:** All possible attributes that can be primary keys.
3. **Alternate Key:** Candidate key not chosen as primary key.
4. **Foreign Key:** Establishes relationship with another table.
5. **Composite Key:** Combination of two or more attributes (e.g., *EmpID + DeptID*).
6. **Super Key:** Set of one or more attributes that uniquely identify a record.

📘 *Example Table:*
Employee(EmpID, Name, DeptID, Salary) — *EmpID* → Primary Key, *DeptID* → Foreign Key.

---

### **Q3. Consider a relation and apply a many-to-many relationship between the given relation. Draw a simple diagram to illustrate this.**

1. **Many-to-many** means multiple records in one entity relate to multiple in another.
2. Represented using a **junction (bridge) table**.
3. Example: *Students* and *Courses* → A student can enroll in many courses, and a course has many students.
4. Use **Enrollment table** as a link: Enrollment(StudentID, CourseID).
5. Maintains referential integrity with foreign keys.
6. Simplifies complex associations.

📊 *Diagram:*

```
Student ───< Enrollment >─── Course
```
---

### **Q4. Draw an E-R diagram for an online shopping system. Include at least two entities, their attributes, and relationships.**

1. **Entities:** Customer, Product.
2. **Attributes:**

   * Customer → CustomerID, Name, Email
   * Product → ProductID, Name, Price
3. **Relationship:** Customer *places* Order → M:N relationship.
4. **Order** acts as associative entity → OrderID, Date.
5. **Primary/Foreign keys** connect entities.
6. Represents real-world shopping structure clearly.
---

### **Q5. Given Employee(EmpID, Name, Dept, Gender, Salary), write relational algebra expressions to:**

1. **Employees in HR & Finance:**
   σ(Dept = 'HR' ∨ Dept = 'Finance')(Employee)
2. **Salary > 50000:**
   σ(Salary > 50000)(Employee)
3. **Display Name & Dept:**
   π(Name, Dept)(Employee)
4. **IT dept & Salary > 95000:**
   σ(Dept='IT' ∧ Salary>95000)(Employee)
5. **Female employees in IT:**
   σ(Gender='Female' ∧ Dept='IT')(Employee)
6. **Male employees with Salary > 95000:**
   σ(Gender='Male' ∧ Salary>95000)(Employee)

---

### **Q6. Explain following relational algebra operations with examples (Union, Set Difference, Intersection).**

1. **Union (R ∪ S):** Combines tuples from both relations without duplicates.
   Example: R={1,2,3}, S={3,4} → R∪S={1,2,3,4}.
2. **Set Difference (R − S):** Returns tuples in R but not in S.
   Example: R−S={1,2}.
3. **Intersection (R ∩ S):** Tuples common to both relations.
   Example: {3}.
4. **All relations must be union-compatible.**
5. **Used in relational queries and data comparison.**
6. **Basic operation in relational algebra.**

---

### **Q7. Describe syntax, purpose and example of Cartesian product and Join operation in relational algebra.**

**Cartesian Product (×):**

1. Combines each tuple of one relation with all tuples of another.
2. Syntax: R × S.
3. Produces large relation (m × n).
4. Used as intermediate step for joins.
5. Example: Student × Course.
6. Can be filtered using selection condition.

**Join (⨝):**

1. Combines tuples based on related attributes.
2. Syntax: R ⨝<sub>Condition</sub> S.
3. Types: Natural, Inner, Outer.
4. Example: Student ⨝ StudentID=SID Marks.
5. Reduces redundancy.
6. Provides meaningful data combination.


---

### **Q8. Describe rename operation in relational algebra.**

1. **Rename Operator (ρ):** Used to rename tables or attributes.
2. Syntax: ρ(NewName, Relation).
3. **Rename Result of Expression:** ρ(Result, σ(Salary>50000)(Employee)).
4. **Rename Attributes:** ρ(Name→EmployeeName)(Employee).
5. **Rename Both Relation and Attributes:** ρ(Emp(EmpID, EmpName))(Employee).
6. Helps in simplifying complex relational expressions.

---

### **Q9. Give Example of each set operation.**

1. **Union:** R ∪ S = Employees from HR or IT.
2. **Intersection:** R ∩ S = Employees common in HR and IT.
3. **Set Difference:** R − S = Employees in HR but not in IT.
4. **Cartesian Product:** R × S = Combines all possible pairs.
5. **Join:** R ⨝ S = Employees with department info.
6. **Division:** R ÷ S = Find employees who completed all projects.

---

### **Q10. What are data control commands in SQL explain with example.**

1. **DCL (Data Control Language)** manages access permissions.
2. **GRANT:** Gives user privileges.
   Example: `GRANT SELECT ON Student TO User1;`
3. **REVOKE:** Removes granted permissions.
   Example: `REVOKE SELECT ON Student FROM User1;`
4. Used by DBAs for security control.
5. Ensures authorized data access only.
6. Helps maintain integrity and confidentiality.

---

### **Q11. Explain use of GROUP BY with examples.**

1. Used to **group rows** having same column values.
2. Works with **aggregate functions** (SUM, COUNT, AVG).
3. Syntax: `SELECT Dept, AVG(Salary) FROM Employee GROUP BY Dept;`
4. Helps in **data summarization**.
5. Example: Finding total sales per region.
6. Returns one result per group instead of per record.

---

### **Q12. What are Recursive Queries?**

1. Used to **retrieve hierarchical data** (like employee-manager).
2. Implemented using **WITH RECURSIVE** clause in SQL.
3. Involves **base case** and **recursive step**.
4. Example: Finding all subordinates under a manager.
5. Useful for **tree or graph structures**.
6. Continues until no new records are found.


---

### **Q13. Explain 2NF with a proper example.**

1. **2NF (Second Normal Form)** removes **partial dependency** — when a non-key attribute depends only on part of a composite key.
2. A relation must be in **1NF** before converting to 2NF.
3. In 2NF, every non-key attribute should depend on the **whole primary key**.
4. Example:

   ```
   Student(CourseID, StudentID, CourseName, Grade)
   ```

   Here, *CourseName* depends only on *CourseID*, not on the full key (CourseID, StudentID).
5. Solution: Split into

   * Course(CourseID, CourseName)
   * Student(CourseID, StudentID, Grade)
6. Ensures data integrity and reduces redundancy.

---

### **Q14. Explain 3NF with proper examples.**

1. **3NF (Third Normal Form)** removes **transitive dependencies**.
2. A relation is in 3NF if it is in **2NF** and **no non-key attribute depends on another non-key attribute**.
3. Example:

   ```
   Employee(EmpID, DeptID, DeptName)
   ```

   Here, *DeptName* depends on *DeptID* (non-key), not directly on *EmpID*.
4. Solution: Split into two tables:

   * Employee(EmpID, DeptID)
   * Department(DeptID, DeptName)
5. Improves data consistency and avoids anomalies.
6. Ensures only key-based dependencies remain.


---

### **Q15. Illustrate with examples the importance of functional dependency in relational database design.**

1. **Functional dependency (FD)** defines relationship between attributes.
2. If *A → B*, then value of A determines B.
3. Helps in **identifying candidate keys**.
4. Used during **normalization** to remove redundancy.
5. Example: *EmpID → EmpName, DeptID*.
6. Ensures data consistency and integrity in database.


---

### **Q16. Explain Lossy Decomposition in detail with example.**

1. Occurs when decomposing a table **loses information** after joining back.
2. Opposite of **Lossless Decomposition**.
3. Example:

   ```
   R(A,B,C)
   Decompose → R1(A,B) and R2(B,C)
   ```

   If B is not a key, joining may produce extra tuples (wrong data).
4. Causes inconsistency and data duplication.
5. To avoid, decomposition must preserve **functional dependencies**.
6. Always prefer **lossless decomposition** during normalization.


---

### **Q17. Given query:**

```
SELECT name, age, language 
FROM Persons 
WHERE name LIKE "R%" AND age > 15;
```

**Draw parse tree and give relational algebra expressions.**

1. **Relational Algebra Expression:**
   π(name, age, language)(σ(name LIKE "R%" ∧ age>15)(Persons))
2. **σ (Selection)** filters rows based on condition.
3. **π (Projection)** selects specific columns.
4. **Parse Tree Steps:**

   * Root: π(name, age, language)
   * Child: σ(name LIKE "R%" ∧ age>15)
   * Leaf: Persons
5. Execution: Filter → Project → Display.
6. Ensures efficient query processing.


---

### **Q18. What is external sorting? Explain with an example of external sort-merge algorithm.**

1. **External sorting** is used when data doesn’t fit in main memory.
2. Divides data into **sorted runs** using internal sort.
3. Then **merges** those runs into one sorted file.
4. Example: Sort 1GB file using 100MB RAM → create 10 runs, then merge.
5. **Sort-Merge Steps:**

   * Phase 1: Create sorted subfiles.
   * Phase 2: Merge subfiles iteratively.
6. Used in database query processing and indexing.


---

### **Q19. List and explain optimization techniques used in join operation.**

1. **Nested Loop Join Optimization:** Use index on inner relation.
2. **Hash Join:** Uses hash tables for faster matching.
3. **Sort-Merge Join:** Sort both relations before joining.
4. **Join Reordering:** Change order of joins for performance.
5. **Predicate Pushdown:** Apply selection before join.
6. **Parallel Join Execution:** Divide join tasks across processors.


---

### **Q20. How following transformation rules are used to convert a given query into equivalent forms?**

**(1) Join reordering, (2) Predicate Pushdown, (3) Projection Pushdown)**

1. **Join Reordering:** Change sequence of joins without affecting output to reduce cost.
2. **Predicate Pushdown:** Apply `WHERE` conditions early to reduce intermediate tuples.
3. **Projection Pushdown:** Select only needed columns to minimize data size.
4. All are **query optimization techniques**.
5. Result remains same, but performance improves.
6. Used by query optimizer automatically.

---

### **Q21. Describe the significance of ACID properties to describe the behavior of a transaction.**

1. **Atomicity:** Transaction must execute completely or not at all.
2. **Consistency:** Database remains in a valid state after transaction.
3. **Isolation:** Concurrent transactions don’t affect each other.
4. **Durability:** Once committed, changes persist even after failure.
5. Ensures **data reliability** in multi-user environments.
6. Core principle of all database transactions.

---

### **Q22. Give example of serial schedule and equivalent serial schedule with respect to conflict serializability.**

1. **Serial Schedule:** Transactions execute one after another (T1 → T2).
2. **Non-Serial Schedule:** Transactions interleave but must maintain consistency.
3. **Conflict Serializable:** Equivalent to a serial schedule in effect.
4. Example:

   * T1: Read(A), Write(A)
   * T2: Read(B), Write(B)
5. If no conflicting operations, schedule is conflict serializable.
6. Checked using **precedence graph** (no cycles → serializable).

---

### **Q23. Summarise the steps involved in executing a transaction using time-stamped protocol.**

1. Each transaction gets a **unique timestamp (TS)**.
2. System maintains **read_TS(X)** and **write_TS(X)** for each data item X.
3. **Read rule:** If TS(T) < write_TS(X) → transaction rolled back.
4. **Write rule:** If TS(T) < read_TS(X) → rollback; else proceed.
5. Ensures **serializability** based on timestamp order.
6. Prevents deadlock because no waiting occurs.


---

### **Q24. List and explain different methods to prevent deadlock with an example.**

1. **Deadlock Prevention:** Use ordering or time-stamping to avoid cycles.
2. **Wait-Die Scheme:** Older transaction waits; younger aborts.
3. **Wound-Wait Scheme:** Older transaction preempts younger.
4. **Timeouts:** Abort transaction if waiting too long.
5. **Resource Ordering:** Lock resources in a fixed sequence.
6. Example: Use timestamp rules to prevent circular wait.

---

