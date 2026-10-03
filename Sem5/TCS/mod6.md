# TCS Module 6 — Undecidability 🚨

## Exam-Day Crash Course | Simple English + Real-Life Examples

Don't worry, Laksh. This module looks difficult, but **most of it is based on a few simple ideas**. If you understand the difference between **Decidable, RE, Undecidable, Halting Problem, Rice's Theorem and PCP**, you can handle most theory questions.

Your notes cover **Module 6: Undecidability**, including Decidability/Undecidability, Recursively Enumerable Languages, Halting Problem, Rice's Theorem and Post Correspondence Problem. 

---

# 1. First understand the BIG picture

Think of computer problems in 3 levels:

```text
                 ALL LANGUAGES
                      │
        ┌─────────────┴─────────────┐
        │                           │
   Turing-Acceptable            Non-Turing-Acceptable
        │
        │
   ┌────┴─────────┐
   │              │
 Decidable       RE but
 / Recursive     Undecidable
```

### In simple words:

### 🟢 Decidable

A computer program can **always give an answer**.

### 🟡 RE / Recursively Enumerable

A computer can confirm **YES**, but for NO it may run forever.

### 🔴 Undecidable

There is **no algorithm/Turing Machine that can always give the correct answer and halt**.

Your notes show the relationship between these classes on page 1. 

---

# 2. Decidability

## Simple Definition

> A language is **decidable** if there is a Turing Machine that accepts and halts on every string.

In other words:

**Input → Machine → YES/NO → Machine always stops**

Your notes define a decidable language using a Turing machine that accepts and halts on every input string. 

### Real-life example

Imagine a college attendance system:

You enter:

> Student ID = 123

The system checks the database.

It always gives:

> **Present / Absent**

and stops.

This is like a **decidable problem**.

---

## Exam Definition ✍️

> **A language L is called decidable if there exists a Turing Machine M which accepts every string in L and rejects every string not in L, and M halts on every input string.**

### Remember:

**DECIDABLE = ALWAYS HALTS**

---

# 3. Decision Problem

A **decision problem** is a problem whose answer is simply:

> **YES or NO**

Examples from your notes include:

### Example 1

Given a DFA and a word:

> Does the DFA accept the word?

Answer:

**YES / NO**

### Example 2

Given a DFA:

> Does it accept any word?

Answer:

**YES / NO**

### Example 3

Given two DFAs:

> Do they accept the same language?

Answer:

**YES / NO**

These examples are listed in your notes on page 2. 

---

# 4. Undecidable Language

Now the important opposite.

## Simple Definition

> A language/problem is **undecidable** if there is no Turing Machine that can correctly answer YES/NO for every input and halt every time.

### Real-life analogy

Imagine asking:

> "Will this particular computer program EVER stop running?"

For some programs, you can check.

But in general, there is **no universal algorithm that can correctly determine this for every possible program and input**.

This leads directly to the **Halting Problem**.

---

## Exam Definition ✍️

> **A decision problem is undecidable if there is no Turing Machine that can decide it for every possible input.**

Your notes also explain that if a language is not even partially decidable, then no Turing Machine exists for that language. 

---

# 5. Three Terms You MUST Know

This is very important for the exam.

| Term                            | Simple meaning                    | Does TM always halt? |
| ------------------------------- | --------------------------------- | -------------------- |
| **Decidable / Recursive (REC)** | YES and NO both can be determined | ✅ Yes                |
| **RE / Recursively Enumerable** | YES can be confirmed              | ❌ Not necessarily    |
| **Undecidable**                 | No algorithm can always decide it | ❌ No                 |

---

# 6. Recursive Language (REC)

## Simple Definition

A language is **recursive** if a Turing Machine:

* accepts strings belonging to the language
* rejects strings not belonging to the language
* **halts in both cases**

So:

```text
Input
  ↓
Turing Machine
  ↓
YES → HALT
NO  → HALT
```

Your notes state that for a recursive language, the Turing machine accepts all strings in the language and rejects all strings not in it, halting every time. 

### Real-life example

Google login:

```text
Enter password
       ↓
Check password
   ↙       ↘
Correct   Wrong
  ↓         ↓
Login     Reject
```

It doesn't normally say:

> "I'll check forever."

It gives an answer.

---

# 7. Recursively Enumerable Language — RE

This is slightly different.

## Simple Definition

> A language is **Recursively Enumerable (RE)** if there exists a Turing Machine that accepts every string belonging to the language, but for strings not belonging to it, the machine may run forever.

### Main idea:

**YES → guaranteed**

**NO → maybe never stops**

---

## Example

Suppose we have a program that checks:

> "Does this program eventually print HELLO?"

If it eventually prints HELLO:

```text
YES → HALT
```

But if it never prints HELLO:

```text
Maybe it keeps running forever
```

So we can confirm YES, but cannot necessarily confirm NO.

---

# 8. Semi-Decidable Language

Another name you should remember:

> **Semi-decidable ≈ Recursively Enumerable (RE)**

Your notes call this **partially decidable / semi-decidable**. 

### Easy memory trick:

```text
DECIDABLE:
YES → STOP
NO  → STOP

RE:
YES → STOP
NO  → MAY RUN FOREVER
```

---

# 9. Relationship between REC and RE

This is a very important theory point.

### Every Recursive language is RE.

But:

### Every RE language is NOT necessarily Recursive.

In notation:

```text
REC ⊂ RE
```

Think:

```text
         RE
 ┌─────────────────┐
 │                 │
 │    REC          │
 │   ┌───────┐     │
 │   │       │     │
 │   └───────┘     │
 │                 │
 └─────────────────┘
```

Your notes explicitly state that **all decidable languages are recursively enumerable, but not all RE languages are decidable**. 

---

# 10. Quick Difference — VERY IMPORTANT ⭐

| Decidable             | RE                     |
| --------------------- | ---------------------- |
| Also called Recursive | Recursively Enumerable |
| YES answer guaranteed | YES answer guaranteed  |
| NO answer guaranteed  | NO may run forever     |
| TM always halts       | TM may not halt        |
| REC                   | RE                     |

### One-line memory:

> **Recursive = YES + NO both stop**

> **RE = YES stops, NO may loop**

---

# 11. Halting Problem ⭐⭐⭐

This is one of the most important topics.

## What is it?

Suppose you have:

```text
Input:
1. A Turing Machine M
2. Input string w
```

Question:

> **Will M eventually halt when it runs on w?**

Answer should be:

```text
YES → M halts
NO  → M never halts
```

Your notes define the Halting Problem exactly in this form: given a Turing machine and input string, determine whether the machine finishes its computation in a finite number of steps. 

---

# 12. Real-Life Example of Halting Problem

Imagine a program:

```python
while True:
    print("Hello")
```

Will it stop?

Obviously:

> NO.

But imagine a huge program with millions of instructions, loops, conditions and function calls.

Question:

> **Can we create one universal program that examines ANY program and ANY input and always tells us whether that program will eventually stop?**

The answer is:

> **No.**

Therefore:

# Halting Problem is UNDECIDABLE.

---

# 13. Halting Problem Proof — Easy Version ⭐⭐⭐

This proof is extremely important.

Assume there exists a machine:

> **HM = Halting Machine**

It can always tell whether another machine halts.

```text
Input → HM → YES / NO
```

Now construct an **inverted machine** called HM'.

### HM' does:

```text
If HM says YES
      ↓
Loop forever

If HM says NO
      ↓
HALT
```

Your notes use exactly this inversion idea: if HM returns YES, the inverted machine loops forever; if HM returns NO, it halts. 

---

## Now give HM' itself as input

Ask:

> What happens when HM' runs on HM'?

### Case 1: HM says YES

That means:

> HM' will halt.

But according to HM':

> If YES → loop forever.

Contradiction! ❌

---

### Case 2: HM says NO

That means:

> HM' will not halt.

But according to HM':

> If NO → halt.

Again contradiction! ❌

---

Therefore:

> Our assumption that HM exists is wrong.

Hence:

# Halting Problem is Undecidable.

### Exam conclusion ✍️

> **Therefore, no Turing Machine can decide the Halting Problem for all possible Turing Machines and inputs. Hence, the Halting Problem is undecidable.**

The contradiction-based construction is shown in pages 4–5 of your notes. 

---

# 14. Rice's Theorem ⭐⭐⭐

This sounds scary but the idea is actually simple.

## Simple Definition

> **Rice's Theorem says that every non-trivial property of the language recognized by a Turing Machine is undecidable.**

Your notes state that a non-trivial semantic property of a language recognized by a Turing machine is undecidable. 

---

# 15. What does "Property" mean?

A property is simply:

> Something we want to know about a language.

Examples:

* Is the language empty?
* Is the language finite?
* Is the language regular?
* Does the machine accept at least one string?
* Does the machine accept all strings?

These are properties about **what language the machine recognizes**.

---

# 16. What does "Non-trivial" mean?

This is important.

A property is **non-trivial** if:

> Some Turing Machines have the property, and some Turing Machines don't have the property.

Example:

Property:

> "Machine accepts at least one string."

Some machines:

```text
YES → property exists
```

Other machines:

```text
NO → property doesn't exist
```

Therefore it is non-trivial.

---

# 17. Rice's Theorem — Real-Life Example

Imagine we have many apps.

We ask:

> "Does this app have the property of sending an email?"

Some apps:

```text
Gmail → YES
Calculator → NO
```

If we're talking about arbitrary Turing Machines and a **non-trivial semantic property of the language they recognize**, Rice's theorem tells us there is no general algorithm that always decides that property.

---

# 18. Rice's Theorem Formula

Your notes give the formal form:

If P is a non-trivial property and the language

```text
Lₚ = {<M> | L(M) has property P}
```

then:

```text
Lₚ is undecidable
```



### Don't panic about notation.

Remember:

> **TM + non-trivial property of the language it recognizes = UNDECIDABLE**

---

# 19. Rice's Theorem — Two Properties in Your Notes

Your notes discuss two important properties. 

### Property 1

There exist two Turing Machines:

```text
M₁ and M₂
```

that recognize the same language.

Meaning:

```text
L(M₁) = L(M₂)
```

---

### Property 2

There exist machines:

```text
M₁ and M₂
```

such that:

```text
M₁ recognizes the language
M₂ does NOT recognize it
```

The notes then use a reduction argument to establish undecidability. 

---

# 20. How to Identify a Rice's Theorem Question

In the exam, look for questions like:

> "Determine whether the following property of a Turing Machine is decidable."

If the property is:

### About the LANGUAGE recognized by the TM

and

### Non-trivial

Then think:

# RICE'S THEOREM → UNDECIDABLE

---

# 21. VERY IMPORTANT: Semantic vs Syntactic

You may see the word **semantic**.

### Semantic = WHAT the machine/language does.

Example:

> Does the machine accept the string "101"?

or

> Is the language accepted by the machine empty?

### Syntactic = HOW the machine is written/structured.

Example:

> Does the TM contain exactly 10 states?

Rice's theorem applies to **non-trivial semantic properties of the language recognized by a TM**.

---

# 22. Post Correspondence Problem — PCP ⭐⭐⭐

Now the last major topic.

## Simple Definition

> **Post Correspondence Problem asks whether two lists of strings can be arranged using the same sequence of positions so that the resulting strings are equal.**

Your notes introduce PCP as an undecidable decision problem and define it using two lists M and N of non-empty strings. 

---

# 23. Understand PCP Like DOMINOES 🁢

Imagine domino cards.

Each card has:

```text
TOP
----
BOTTOM
```

Example:

```text
Card 1:   ab
          ba

Card 2:   aa
          aaa

Card 3:   aaa
          aa
```

You can select cards in **any order**, and you can reuse cards.

Your goal:

> Make the TOP string equal to the BOTTOM string.

---

# 24. PCP Formal Definition

Suppose:

```text
M = (x₁, x₂, x₃, ..., xₙ)

N = (y₁, y₂, y₃, ..., yₙ)
```

We need to find indices:

```text
i₁, i₂, ..., iₖ
```

such that:

```text
xᵢ₁ xᵢ₂ ... xᵢₖ
=
yᵢ₁ yᵢ₂ ... yᵢₖ
```

Important:

### SAME indices must be used for both lists.

---

# 25. PCP Example from Your Notes ⭐

Your notes give:

```text
M = (abb, aa, aaa)

N = (bba, aaa, aa)
```



They find the sequence:

```text
2, 1, 3
```

Let's understand it.

Take:

### From M:

```text
x₂ x₁ x₃

= aa + abb + aaa

= aaabbb? 
```

More carefully, using the strings as written in the notes:

```text
aa + abb + aaa
```

### From N:

```text
y₂ y₁ y₃

= aaa + bba + aa
```

The notes show the corresponding concatenations as equal and conclude that the solution is:

```text
i = 2, j = 1, k = 3
```



### Exam method:

Make a table:

| Position | M  | N  |
| -------- | -- | -- |
| 1        | x₁ | y₁ |
| 2        | x₂ | y₂ |
| 3        | x₃ | y₃ |

Then try sequences such as:

```text
1
2
3
1,2
2,1
1,3
2,1,3
...
```

until both concatenations become equal.

---

# 26. PCP Example 2

Your notes give another example:

```text
M = (ab, bab, bbaaa)

N = (a, ba, bab)
```

They conclude there is **no solution** because the lengths/concatenations cannot be made equal. 

The important exam point is:

> If no sequence of indices can make the top and bottom strings equal, there is no PCP solution for that instance.

And:

# PCP is Undecidable.

---

# 27. Why PCP is Important

PCP is an example of an **undecidable problem**.

Meaning:

> There is no algorithm that can solve every possible PCP instance and always halt with the correct YES/NO answer.

### Remember:

```text
PCP → Undecidable
```

---

# 28. PCP vs Halting Problem

Both are undecidable.

| Halting Problem      | PCP                                  |
| -------------------- | ------------------------------------ |
| Given TM + input     | Given two lists                      |
| Ask whether TM halts | Ask whether matching sequence exists |
| Answer YES/NO        | Answer YES/NO                        |
| Undecidable          | Undecidable                          |

---

# 29. Whole Module in ONE Diagram 🧠

Memorize this:

```text
                    TCS MODULE 6
                    UNDECIDABILITY
                         │
        ┌────────────────┼────────────────┐
        │                │                │
   DECIDABILITY      RE / REC          UNDECIDABILITY
        │                │                │
        │                │                ├── Halting Problem
        │                │                │
        │                │                ├── Rice's Theorem
        │                │                │
        │                │                └── PCP
        │                │
        │                └── YES stops
        │                    NO may loop
        │
        └── YES stops
            NO stops
```

---

# 30. Most Important Differences ⭐⭐⭐

## Decidable vs Undecidable

| Decidable               | Undecidable               |
| ----------------------- | ------------------------- |
| Algorithm exists        | No algorithm exists       |
| Always gives answer     | Cannot always give answer |
| TM always halts         | TM may loop               |
| Example: DFA acceptance | Example: Halting Problem  |

---

## Recursive vs RE

```text
Recursive:
YES → HALT
NO  → HALT

RE:
YES → HALT
NO  → LOOP POSSIBLE
```

This single diagram can save you marks.

---

# 31. Important Exam Definitions — Learn These

### 1. Decidable Language

> A language is decidable if there exists a Turing Machine that accepts every string in the language, rejects every string not in the language, and halts on every input.

---

### 2. Undecidable Problem

> A problem is undecidable if there is no Turing Machine that can correctly solve the problem for every input and halt in every case.

---

### 3. Recursive Language

> A language is recursive if a Turing Machine accepts strings in the language and rejects strings outside the language, halting in both cases.

---

### 4. Recursively Enumerable Language

> A language is recursively enumerable if there exists a Turing Machine that accepts every string in the language, but may run forever for strings not in the language.

---

### 5. Halting Problem

> The Halting Problem asks whether a given Turing Machine halts on a given input string.

**Result: Undecidable.**

---

### 6. Rice's Theorem

> Rice's Theorem states that every non-trivial semantic property of the language recognized by a Turing Machine is undecidable.

---

### 7. PCP

> Post Correspondence Problem asks whether a sequence of tiles can be selected so that the concatenation of strings on the top is equal to the concatenation of strings on the bottom.

**Result: Undecidable.**

---

# 32. What Does "Accept" Mean?

Don't get confused by this.

For a TM:

### Accept

Means:

> Machine reaches an accepting state.

Usually it **halts**.

### Reject

Means:

> Machine reaches a rejecting state.

It also **halts**.

### Loop

Means:

> Machine continues forever without giving an answer.

---

# 33. Super-Easy Memory Trick 🧠

Remember:

## **D = Done**

**Decidable → Done**

It always finishes.

---

## **RE = YES is Reliable**

RE:

> YES → reliable/guaranteed

NO:

> might continue forever.

---

## **H = Hang**

Halting Problem:

> Is the machine going to **H**alt or **H**ang forever?

---

## **RICE = Property**

Rice's theorem:

> **Property of the language → Undecidable**

---

## **PCP = Pair/Match**

PCP:

> **Match TOP and BOTTOM**

---

# 34. Likely Exam Questions

Based on the topics in your notes, prepare these first:

### ⭐⭐⭐ Very Important

1. Define decidable and undecidable languages.
2. Explain Recursive and Recursively Enumerable languages.
3. Differentiate Recursive and RE languages.
4. Explain the Halting Problem.
5. Prove that the Halting Problem is undecidable.
6. State and explain Rice's Theorem.
7. Explain non-trivial property.
8. Explain Post Correspondence Problem.
9. Solve a PCP example.
10. Explain why PCP is undecidable.

---

# 35. If You Have Only 30 Minutes ⏰

Study in this order:

### First 5 minutes

Learn:

```text
Decidable
RE
Undecidable
```

### Next 8 minutes

Learn:

```text
Halting Problem
```

Especially the **YES → loop / NO → halt contradiction**.

### Next 7 minutes

Learn:

```text
Rice's Theorem
```

Remember:

> **Non-trivial semantic property → Undecidable**

### Next 7 minutes

Learn:

```text
PCP
```

Understand the table and index matching.

### Last 3 minutes

Memorize the definitions.

---

# 36. Last-Minute Revision Sheet 🚀

If you are entering the exam hall, remember ONLY this:

```text
DECIDABLE
↓
TM always halts
↓
YES + NO both answered


RE / RECURSIVELY ENUMERABLE
↓
YES → TM halts
NO → TM may run forever


RECURSIVE = DECIDABLE


HALTING PROBLEM
↓
"Will TM M halt on input w?"
↓
UNDECIDABLE


RICE'S THEOREM
↓
Non-trivial semantic property
of TM's language
↓
UNDECIDABLE


PCP
↓
Choose same sequence of tiles
↓
TOP concatenation = BOTTOM concatenation?
↓
UNDECIDABLE
```

### One final line to memorize:

> **Every Recursive language is RE, but not every RE language is Recursive. Halting Problem, Rice's Theorem and PCP are key examples related to undecidability.** 

If you remember this structure + the **Halting Problem proof + Rice's theorem definition + PCP procedure**, you have the core of the entire 8-page Module 6 covered.
