# 2 marks Answer
### 1. List two advantages of disadvantages of database Management System.

Advantages: 
1. Reduces data redundancy.
2. Provides data security and privacy.
3. Enables data sharing among multiple users.
4. Ensures data integrity and consistency.

Disadvantages: 
1. High cost of hardware and software.
2. Requires skilled personnel to manage.
3. Complex backup and recovery process.
4. Performance may be slow for small databases.

### 2. Explain any four types of attributes with examples of each.

1.  Simple Attribute: Cannot be divided. e.g., Name, Age.
2.  Composite Attribute: Can be divided into parts. e.g., FullName =
    (FirstName, LastName).
3.  Derived Attribute: Derived from other attributes. e.g., Age from
    DateOfBirth.
4.  Multivalued Attribute: Can have multiple values. e.g., Phone
    Numbers.

### 3. Describe the purpose of foreign key and primary key with an example.

-   Primary Key: Uniquely identifies each record in a table. Example:
    StudentID in Student table.
-   Foreign Key: Establishes relationship between two tables. Example:
    StudentID in Marks table refers to Student table.
-   Ensures referential integrity.
-   Prevents invalid data insertion.

### 4. Explain different E-R notations on ER diagrams.

1.  Entity: Represented by rectangle.
2.  Attributes: Represented by oval.
3.  Relationship: Represented by diamond.
4.  Lines: Connect entities and relationships.

### 5. Describe the purpose of the Selection Operation in relational algebra. Illustrate your explanation with a relevant example.

1.  Used to select specific rows from a relation.
2.  Applies a condition to filter records.
3.  Symbol: σ_condition(Relation).
4.  Example: σ_Age\>20(Student).

### 6. Summarise the concept of the Intersection Operation in relational algebra and demonstrate its use with an example.

1.  Returns tuples common in two relations.
2.  Symbol: R ∩ S.
3.  Both relations must be union-compatible.
4.  Example: Students in CS ∩ Maths.

### 7. Explain Join operation in relational algebra and apply it using an example.

1.  Combines related tuples from two relations.
2.  Condition based on common attributes.
3.  Types: Inner, Outer, Natural Join.
4.  Example: Student ⨝ StudentID=SID Marks.

### 8. Describe the method to rename a relation and its attributes. Support your explanation with an example.

1.  Symbol: ρ (rho).
2.  Used to rename table or attributes.
3.  Syntax: ρ(NewName, Relation).
4.  Example: ρ(S, Student).

### 9. Name two widely recognized SQL standards.

1.  SQL-89 (ANSI SQL).
2.  SQL-92 (ISO SQL).
3.  SQL:1999 (SQL3).
4.  SQL:2003 (Modern extensions).

### 10. What is the significance of NULL values in databases?

1.  Represents missing or unknown data.
2.  Not equal to zero or blank.
3.  Affects comparison operations.
4.  Used to indicate unavailable information.

### 11. What is Groupby?

1.  Groups rows with same values in specified columns.
2.  Used with aggregate functions (SUM, AVG, COUNT).
3.  Syntax: SELECT Dept, AVG(Salary) FROM Employee GROUP BY Dept;
4.  Helps summarize data.

### 12. State the work of check constraint in SQL in one line.

1.  Ensures data in a column meets specific condition.
2.  Example: CHECK (Age \>= 18).
3.  Maintains data accuracy.
4.  Prevents invalid entries.

### 13. Define data redundancy and its impact on database.

1.  Duplication of data in multiple places.
2.  Increases storage usage.
3.  Leads to inconsistency.
4.  Reduces efficiency and speed.

### 14. Define the term 'normal form.'

1.  A stage in database normalization.
2.  Removes redundancy and anomalies.
3.  Follows specific rules (1NF, 2NF, 3NF, BCNF).
4.  Improves data organization.

### 15. Define what is anomaly in database normalisation.

1.  Problems due to improper table design.
2.  Types: Insertion, Deletion, Update anomalies.
3.  Caused by data redundancy.
4.  Resolved by normalization.

### 16. Define the term Lossless decomposition in database.

1.  Splitting a relation without losing data.
2.  Ensures reconstruction of original table.
3.  Maintains data consistency.
4.  Property of good normalization.

### 17. Explain the factors that affect the cost of a query.

1.  Size of data and number of records.
2.  Index usage and type.
3.  Disk I/O operations.
4.  CPU processing time.

### 18. Describe the two methods used in the Selection operation during query processing.

1.  Linear Search: Scans all tuples sequentially.
2.  Binary Search: Uses index to locate quickly.
3.  Based on availability of index.
4.  Binary is faster for sorted data.

### 19. Summarise the purpose of transforming a relational expression in a query.

1.  Simplifies query for better performance.
2.  Allows optimizer to choose best plan.
3.  Reduces computation cost.
4.  Produces equivalent but efficient query.

### 20. List and explain the factors to consider when choosing an evaluation plan for a query.

1.  Available indexes and access paths.
2.  Size of intermediate relations.
3.  Cost of I/O and CPU time.
4.  Availability of memory and resources.

### 21. Define Transaction. Explain the operations to access the data items in transaction.

1.  A unit of work in database.
2.  Follows ACID properties.
3.  Operations: Read(X) and Write(X).
4.  Example: Transfer money between accounts.

### 22. Summarise the concept of ROLLBACK and SAVEPOINT commands in SQL.

1.  ROLLBACK: Undo all changes since last commit.
2.  SAVEPOINT: Marks a partial point for rollback.
3.  Helps recover from errors.
4.  Ensures data consistency.

### 23. Describe the purpose of Time-stamp Based Protocols.

1.  Ensures serializability using timestamps.
2.  Each transaction has unique timestamp.
3.  Conflicts resolved using timestamps.
4.  Prevents deadlocks automatically.

### 24. Explain Deadlock Detection.

1.  Occurs when two transactions wait for each other.
2.  Detected using Wait-for Graph.
3.  System identifies circular waits.
4.  One transaction is rolled back to break deadlock.
