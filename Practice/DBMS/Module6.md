# Module 6

## Simple explanation of *Deadlock Handling in DBMS*:  

*What is Deadlock?*

- A *deadlock* occurs in a database when *two or more transactions are waiting for each other to release resources*, and *none of them can proceed*.  
- It’s like a *circular wait*, causing the system to *freeze those transactions*.

*Example:*

- Transaction T1 locks *Resource A* and wants *Resource B*.  
- Transaction T2 locks *Resource B* and wants *Resource A*.  
- Both wait for each other → *Deadlock occurs*.  


*Deadlock Handling Methods*

1. *Deadlock Prevention*
   - Design the system so that deadlocks *cannot occur*.  
   - Example: Impose a *lock ordering*; always acquire locks in a predefined order.  

2. *Deadlock Avoidance*
   - System *analyzes resource allocation* before granting a request.  
   - Example: *Wait-Die* or *Wound-Wait* schemes in which older transactions are given priority.  

3. *Deadlock Detection and Recovery*
   - Allow deadlocks to happen, *detect them*, and then recover.  
   - *Methods of Detection:*  
     - Wait-for graph → detects cycles  
   - *Recovery Options:*  
     - *Abort* one or more transactions involved  
     - *Rollback* to a safe state  

4. *Timeout*
- If a transaction waits for a resource too long, *it is aborted automatically*.  

*Key Points*

- Deadlocks *reduce system performance*.  
- DBMS must have *mechanisms* to detect, prevent, or recover from deadlocks.  
- Proper *locking protocols* and *transaction design* can minimize deadlocks.  

---
## Detailed explanation of Transaction Control with example .
*What is Transaction Control in DBMS?*

- *Transaction Control* refers to *commands and mechanisms* used to *manage transactions* in a database.  
- It ensures that transactions are executed *safely*, maintaining *ACID properties*.  
- These commands allow you to *commit, rollback, or save* your work in a controlled way.  

*Transaction Control Commands (TCL)*

In SQL/DBMS, the main *TCL commands* are:

*1. COMMIT*

- *Purpose:* Permanently saves all the changes made by the transaction into the database.  
- *Effect:* Once committed, the changes *cannot be undone*.  
- *Example:*  
```sql
UPDATE Account SET Balance = Balance - 100 WHERE Name = 'Alice';
UPDATE Account SET Balance = Balance + 100 WHERE Name = 'Bob';
COMMIT;
```
- Here, the transfer of $100 becomes *permanent* after COMMIT.  


*2. ROLLBACK*

- *Purpose:* Undo all changes made by the current transaction if something goes wrong.  
- *Effect:* Database returns to the *previous consistent state*.  
- *Example:*  
```sql
UPDATE Account SET Balance = Balance - 100 WHERE Name = 'Alice';
-- Suppose system fails here
ROLLBACK;
```
- Alice’s balance remains unchanged because the transaction was *rolled back*.  

*3. SAVEPOINT*

- *Purpose:* Creates a *checkpoint* within a transaction to which you can *rollback* later, instead of rolling back the whole transaction.  
- *Effect:* Useful for *partial undo*.  
- *Example:*  
```sql
SAVEPOINT sp1;
UPDATE Account SET Balance = Balance - 50 WHERE Name = 'Alice';
-- Something goes wrong
ROLLBACK TO sp1;
```
- Only changes after `sp1` are undone; previous changes *remain intact*.  

*4. SET TRANSACTION*

- *Purpose:* Sets the properties for the transaction, such as *read-only* or *isolation level*.  
- *Example:*  
```sql
SET TRANSACTION READ ONLY;
```
- Useful for controlling *concurrency* and *locking behavior*.

*How Transaction Control Works*

1. Transaction starts → Active state  
2. Operations performed → Partial results  
3. *COMMIT* → Changes saved permanently  
4. *ROLLBACK* → Changes undone if error occurs  
5. *SAVEPOINT* → Partial rollback to a checkpoint  

*Key Points*

- Transaction Control ensures *data integrity* and *ACID compliance*.  
- COMMIT and ROLLBACK are the most frequently used commands.  
- SAVEPOINT is optional but useful for *complex transactions*.  
---
## Simple explanation of *Transaction States in DBMS*:  

A *transaction* in a DBMS goes through several *states* during its life cycle. These states show the *progress and status* of the transaction.  

*1. Active*
- *Definition:* Transaction has started execution but *not yet completed*.  
- *Operations:* Read/Write operations are being performed.  
- *Example:* Deducting 100 from Alice’s account.  

*2. Partially Committed*
- *Definition:* Transaction has executed its *final operation* but *not yet committed* to the database.  
- *Example:* Alice’s account is debited, but the amount is *not yet added* to Bob’s account.  

*3. Committed*
- *Definition:* Transaction *successfully completed* and all changes are *permanently saved* in the database.  
- *Example:*100 successfully transferred from Alice to Bob.  


*4. Failed*
- *Definition:* Transaction *cannot proceed* due to some error (constraint violation, system crash, etc.).  
- *Effect:* Database may need to *rollback* to previous consistent state.  
- *Example:* Bob’s account number doesn’t exist.  

*5. Aborted*
- *Definition:* Transaction has *rolled back* after failure, *no changes* are reflected in the database.
- *Example:* After failure, Alice’s $100 is *restored* to her account.  

*6. Terminated*
- *Definition:* Transaction is *either committed or aborted*, i.e., *completed*.  

*Summary Table*

| State               | Meaning |
|--------------------|---------|
| Active             | Transaction started |
| Partially Committed| Final operation done, not yet permanent |
| Committed          | Changes permanently saved |
| Failed             | Transaction cannot continue |
| Aborted            | Rolled back after failure |
| Terminated         | Transaction completed (committed/aborted) |

Diagram :

<img alt="image" src="https://github.com/user-attachments/assets/def26341-4094-41cc-ba1e-766e3b67b26d" />


---
## Simple explanation of transactions in DBMS with an example:  

*What is a Transaction?*

- A *transaction* is a *unit of work* performed on a database.  
- It is a sequence of *one or more operations* (like read, write, update) that must be *executed completely or not at all*.  
- Ensures *data consistency* in the database.

*Key Properties (ACID)*

1. *Atomicity* – All operations of a transaction happen, or none happen.  
2. *Consistency* – Database remains in a valid state before and after the transaction.  
3. *Isolation* – Transactions don’t interfere with each other.  
4. *Durability* – Once a transaction is committed, it remains even after a system crash.

*Example: Bank Transfer*

Suppose *Alice transfers 100 to Bob*:

1. Check Alice’s balance →500  
2. Deduct 100 from Alice →400  
3. Add 100 to Bob →600  

- If *all steps succeed*, transaction is *committed*.  
- If *any step fails* (like system crash), the transaction is *rolled back* and balances remain unchanged.

*Summary*

| Concept       | Meaning                                     |
|---------------|--------------------------------------------|
| Transaction   | A complete unit of work                     |
| Commit        | Save changes permanently                    |

---
## ACID Properties of Transactions

*ACID* stands for *Atomicity, Consistency, Isolation, Durability*. These are the key properties that make database transactions *reliable and safe*.

*1. Atomicity (All or Nothing)*

- *Definition:*  
  A transaction is *atomic*, meaning it is *indivisible*. Either *all operations succeed* or *none happen*.  

- *Example:*  
  Alice transfers 100 to Bob. Steps:  
  1. Deduct100 from Alice  
  2. Add $100 to Bob, If step 2 fails (e.g., system crash), *step 1 is rolled back*, so Alice’s account is not debited.  


*2. Consistency*

- *Definition:*  
  The database *remains in a valid state* before and after the transaction. All *constraints and rules* must be satisfied.  

- *Example:*  
  - Balance of a bank account should *never go negative*.  
  - If a transaction violates this rule, it is *not allowed* and database stays consistent.

*3. Isolation*

- *Definition:*  
  Multiple transactions can run *concurrently*, but they *should not affect each other’s results*.  

- *Example:*  
  - Two people try to withdraw money at the same time from the same account.
  - Isolation ensures that the *final balance is correct*, as if transactions were executed *one after another*.


*4. Durability*

- *Definition:*  
  Once a transaction is *committed*, its changes are *permanent*, even if the system crashes.  

- *Example:*  
  - After transferring100 from Alice to Bob and committing, the changes *remain in the database*, even if the power fails immediately after.

*Summary Table*

| Property      | Meaning                                   | Example                                     |
|---------------|-------------------------------------------|--------------------------------------------|
| Atomicity     | All or nothing                            | Alice’s 100 transfer either fully succeeds or fails |
| Consistency   | Database remains valid                     | Account balance never goes negative       |
| Isolation     | Transactions don’t interfere with each other | Two withdrawals on same account handled correctly |
| Durability    | Committed changes are permanent           |100 transfer remains even after crash    |

