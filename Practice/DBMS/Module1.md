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

---

🎯 Summary:

| Concept           | Focus                          |
|------------------|---------------------------------|
| Data Abstraction | Hides storage details via levels|
| Data Independence| Protects users from schema changes|
