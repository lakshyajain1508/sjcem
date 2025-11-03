# Module 6

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

