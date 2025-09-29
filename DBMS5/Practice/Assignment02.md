

## **1. Explain the importance of PRIMARY KEY and NOT NULL constraint. Write a query to create the STUDENT table with SID as PRIMARY KEY, Name as NOT NULL, Age, Gender as it's attributes.**

**Theory**

* **PRIMARY KEY**:

  * Uniquely identifies each record in a table.
  * Cannot contain `NULL` values.
  * Ensures **entity integrity**.

* **NOT NULL**:

  * Ensures a column cannot be left blank.
  * Prevents incomplete data.

**Example**

```sql
CREATE TABLE STUDENT (
    SID INT PRIMARY KEY,
    Name VARCHAR(50) NOT NULL,
    Age INT,
    Gender CHAR(1)
);

INSERT INTO STUDENT VALUES (1, 'Aryan', 18, 'M');
INSERT INTO STUDENT VALUES (2, 'Sourav', 19, 'M');
INSERT INTO STUDENT VALUES (3, 'Priya', 18, 'F');
```

**Output**

| SID | Name   | Age | Gender |
| --- | ------ | --- | ------ |
| 1   | Aryan  | 18  | M      |
| 2   | Sourav | 19  | M      |
| 3   | Priya  | 18  | F      |

⚠️ Error if:

* Duplicate `SID` inserted → `PRIMARY KEY` violation.
* `NULL` in Name → `NOT NULL` violation.

---

## **2. Explain the concept of an JOIN with example.**

**Theory**

* A **JOIN** combines rows from two tables based on a common column.
* Types:

  * **INNER JOIN** → Only matching rows.
  * **LEFT JOIN** → All from left table + matched from right.
  * **RIGHT JOIN** → All from right table + matched from left.
  * **FULL JOIN** → All rows from both tables.

**Example**

STUDENTS Table:

| SID | Name   |
| --- | ------ |
| 1   | Aryan  |
| 2   | Sourav |
| 3   | Priya  |

COURSES Table:

| CourseID | SID | CourseName |
| -------- | --- | ---------- |
| 101      | 1   | DBMS       |
| 102      | 2   | OS         |
| 103      | 1   | Networks   |

```sql
SELECT STUDENTS.Name, COURSES.CourseName
FROM STUDENTS
INNER JOIN COURSES ON STUDENTS.SID = COURSES.SID;
```

**Output**

| Name   | CourseName |
| ------ | ---------- |
| Aryan  | DBMS       |
| Aryan  | Networks   |
| Sourav | OS         |

---

## **3. Define Normalization. Explain all forms with an example.**

**Theory**

* **Normalization** = Organizing data to reduce redundancy and improve integrity.
* **Normal Forms**:

  * **1NF**: Atomic values, no repeating groups.
  * **2NF**: 1NF + no partial dependency.
  * **3NF**: 2NF + no transitive dependency.
  * **BCNF**: Every determinant is a super key.
  * **4NF**: No multi-valued dependency.

**Example**

Unnormalized Table:

| StudentID | StudentName | Course | Instructor |
| --------- | ----------- | ------ | ---------- |
| 1         | Aryan       | DBMS   | Dr. Mehta  |
| 1         | Aryan       | OS     | Dr. Sharma |
| 2         | Priya       | DBMS   | Dr. Mehta  |

✅ **1NF** → Already atomic.
✅ **2NF** → Split student and enrollment:

STUDENT

| StudentID | StudentName |
| --------- | ----------- |
| 1         | Aryan       |
| 2         | Priya       |

ENROLLMENT

| StudentID | Course |
| --------- | ------ |
| 1         | DBMS   |
| 1         | OS     |
| 2         | DBMS   |

✅ **3NF** → Remove transitive dependency (Course → Instructor):

COURSE

| Course | Instructor |
| ------ | ---------- |
| DBMS   | Dr. Mehta  |
| OS     | Dr. Sharma |

---

## **4. "A relation R(StudentID, CourseID, Instructor, RoomNo) has the functional dependencies:**
- StudentID → CourseID
- CourseID → Instructor
- Instructor → RoomNo
- Decompose R into smaller relations to remove redundancy.
  
`Answer:- `

**Theory**

* A **Functional Dependency (FD)** is a relation between attributes.
* If `X → Y`, then value of `X` determines value of `Y`.
* **Decomposition** breaks a relation into smaller ones.

**Example**
R(StudentID, CourseID, Instructor, RoomNo)
FDs:

1. StudentID → CourseID
2. CourseID → Instructor
3. Instructor → RoomNo

**Decomposition:**

* R1(StudentID, CourseID)
* R2(CourseID, Instructor)
* R3(Instructor, RoomNo)

✅ Reconstruction possible (lossless).

---

## **5. Demonstrate whether your decomposition is lossless or lossy.**

**Theory**

* **Lossless**: No data is lost after decomposition.
* **Lossy**: Data is lost or extra tuples appear after join.

**Rule**: If a common attribute is a **key** in one relation → decomposition is **lossless**.

**Example (from above)**

* R1(StudentID, CourseID) → StudentID is key.
* R2(CourseID, Instructor) → CourseID is key.
* R3(Instructor, RoomNo) → Instructor is key.

✅ So decomposition is **lossless**.

---

## **6. Exaplain TCL commands with an example.**

**Theory**

* **COMMIT** → Save changes.
* **ROLLBACK** → Undo changes.
* **SAVEPOINT** → Create a rollback point.

**Example**

ACCOUNTS (Before):

| AccountNo | Balance |
| --------- | ------- |
| 1         | 2000    |
| 2         | 1500    |

```sql
BEGIN;

UPDATE ACCOUNTS SET Balance = Balance - 500 WHERE AccountNo = 1;
SAVEPOINT S1;

UPDATE ACCOUNTS SET Balance = Balance + 500 WHERE AccountNo = 2;

ROLLBACK TO S1;  -- Undo last update
COMMIT;
```

**Output (After)**

| AccountNo | Balance |
| --------- | ------- |
| 1         | 1500    |
| 2         | 1500    |

---

## **7. Compare Deadlock Detection and Deadlock Prevention techniques in DBMS. Analyze their advantages and disadvantages with suitable examples.”**

**Theory**

* **Deadlock**: Two transactions wait for each other’s resources.

* **Detection**:

  * Deadlocks are allowed.
  * System checks periodically (wait-for graph).
  * If cycle exists → one transaction aborted.

* **Prevention**:

  * Deadlocks avoided using protocols.
  * Example: **Wait-Die** or **Wound-Wait** (timestamp-based).

**Example**

T1: Locks A → waits for B
T2: Locks B → waits for A

* **Detection**: System detects cycle (T1 ↔ T2) → aborts one.
* **Prevention (Wait-Die)**:

  * If T1 is older → waits.
  * If younger → aborted & restarted.

---

