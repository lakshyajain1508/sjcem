## Main types of DBMS (Database Management Systems):

1. *Hierarchical DBMS*
- Data is organized in a *tree-like structure* (parent-child).
- One parent can have many children, but each child has only one parent.

*Example:* IBM's IMS  
*Use case:* File systems, legacy systems


2. *Network DBMS*
- Data is organized as *records and sets* (many-to-many relationships).
- More flexible than hierarchical.

*Example:* Integrated Data Store (IDS)  
*Use case:* Telecom, complex relationships


3. *Relational DBMS (RDBMS)*
- Data is stored in *tables (relations)* with rows and columns.
- Uses SQL for querying.

*Example:* MySQL, Oracle, PostgreSQL, SQL Server  
*Use case:* General-purpose, modern applications

4. *Object-Oriented DBMS (OODBMS)*
- Data is stored as *objects*, like in object-oriented programming.
- Supports inheritance, encapsulation, etc.

*Example:* db4o, ObjectDB  
*Use case:* CAD/CAM, multimedia applications

comparison table of DBMS types:

| *Type*             | *Data Structure*       | *Relationship*         | *Example*           | *Use Case*                        |
|----------------------|--------------------------|---------------------------|------------------------|--------------------------------------|
| *Hierarchical DBMS*| Tree (Parent → Child)     | One-to-many               | IBM IMS               | Legacy systems, file systems         |
| *Network DBMS*     | Graph (Records & Sets)    | Many-to-many              | IDS, IDMS             | Telecom, complex networks            |
| *Relational DBMS*  | Tables (Rows & Columns)   | Based on keys (PK/FK)     | MySQL, Oracle, SQL Server | General-purpose, web apps         |
| *Object-Oriented DBMS* | Objects (like in OOP) | Inheritance, encapsulation| ObjectDB, db4o        | CAD/CAM, multimedia, AI              |

---
## Data Abstraction:

*Definition:*  
Data abstraction means *hiding complex details* of how data is stored or managed and only showing the *necessary level* of detail to the user.

*Levels of Data Abstraction:*

1. *Physical Level:*  
   - How data is actually stored (files, indexes, blocks)  
   - Lowest level

2. *Logical Level:*  
   - What data is stored and relationships (tables, attributes)  
   - Middle level

3. *View Level:*  
   - What part of data is visible to users (views, query results)  
   - Highest level
--- 
## Data Independence:

*Definition:*  
Data independence means that *changes in one level* of schema *don’t affect* other levels.

*Types:*

1. *Logical Data Independence:*  
   - Changes in logical schema (like adding a column)  
   - Don’t affect external views

2. *Physical Data Independence:*  
   - Changes in physical storage (like changing file format)  
   - Don’t affect logical schema

Summary:

| Concept           | Focus                          |
|------------------|---------------------------------|
| Data Abstraction | Hides storage details via levels|
| Data Independence| Protects users from schema changes|
