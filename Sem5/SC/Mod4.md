# MODULE 4 — EVOLUTIONARY ALGORITHMS

## 🚨 Exam Crash Course — Starting From ZERO

I’ll explain everything in this order:

1. What is Evolutionary Algorithm?
2. Genetic Algorithm
3. Why GA?
4. Working of GA
5. GA terminology
6. Encoding techniques
7. Fitness function
8. Selection
9. Crossover
10. Mutation
11. Complete GA solved example
12. TSP using GA
13. Selection operators
14. Crossover operators
15. Mutation operators
16. Applications
17. **Last-minute revision sheet**

---

# 1. What is an Evolutionary Algorithm?

### Simple definition

**Evolutionary Algorithm (EA)** is an optimization technique inspired by **natural evolution and survival of the fittest**.

In simple words:

> We create many possible solutions, select the better ones, combine them, make small changes, and repeat until we get a good solution.

### Real-life example

Imagine you are trying to find the **best student timetable**.

There can be 1000 possible timetables.

Instead of checking every timetable manually:

* Create some random timetables.
* Check which ones are good.
* Keep the better ones.
* Combine their good features.
* Make some small changes.
* Check again.
* Repeat.

Eventually, you get a very good timetable.

That's the basic idea of evolutionary algorithms.

---

# 2. Genetic Algorithm — MOST IMPORTANT ⭐⭐⭐

Your notes define GA as a **population-based evolutionary optimization technique** inspired by:

* Natural selection
* Genetics
* Biological evolution
* Survival of the fittest

GA repeatedly improves a population of candidate solutions to find an optimal or near-optimal solution. 

## Simple definition for exam

> **Genetic Algorithm is an evolutionary optimization technique inspired by natural selection and genetics. It finds good solutions by repeatedly applying selection, crossover and mutation to a population of candidate solutions.**

### Remember:

**GA = Selection + Crossover + Mutation**

That's the heart of the entire chapter.

---

# 3. Why do we use Genetic Algorithms?

Some problems are very difficult to solve using traditional methods.

According to your notes, real-world problems may have:

* Very large search spaces
* Multiple possible solutions
* Non-linear relationships
* Complex constraints
* No easily available derivative information

GA provides:

* Probabilistic search
* Population-based exploration
* Ability to handle complex search spaces
* Optimization without gradient information. 

### Real-life example

Suppose you want to find the **shortest route visiting 100 cities**.

There are an enormous number of possible routes.

Trying every route would take too much time.

GA searches intelligently through possible solutions.

---

# 4. Working of Genetic Algorithm ⭐⭐⭐

This flow is **VERY IMPORTANT for theory questions**.

Your faculty notes give this process: 

```text
START
   ↓
Initialize Population
   ↓
Calculate Fitness
   ↓
Check Termination Condition
   ↓
Select Parents
   ↓
Crossover
   ↓
Mutation
   ↓
Calculate Fitness
   ↓
Repeat
   ↓
Best Solution
```

Let's understand every step.

---

## Step 1 — Initialize Population

Create a group of random solutions.

Example:

```text
P1 = 101101
P2 = 110010
P3 = 011101
P4 = 111001
```

The whole group is called the **population**.

---

## Step 2 — Calculate Fitness

Check how good each solution is.

Example:

If our objective is:

> Maximum marks

Then a student scoring 90 has better fitness than a student scoring 50.

---

## Step 3 — Check termination condition

Ask:

> "Have we found a sufficiently good solution?"

Possible termination conditions:

* Required fitness reached
* Maximum number of generations reached
* No improvement for many generations

If yes → stop.

If no → continue.

---

## Step 4 — Selection

Choose good solutions as **parents**.

Better solutions generally have a higher chance of being selected.

---

## Step 5 — Crossover

Combine two parents to create children.

Example:

```text
Parent 1 = 111|000
Parent 2 = 000|111

Child 1  = 111|111
Child 2  = 000|000
```

This combines genetic information from parents. 

---

## Step 6 — Mutation

Make a small random change.

Example:

```text
Before: 101101
After : 101001
           ↑
        changed
```

Mutation maintains diversity and helps explore new solutions. 

---

## Step 7 — Repeat

Calculate fitness of new children.

Then again:

**Selection → Crossover → Mutation → Fitness**

until the stopping condition is reached.

---

# 5. Basic GA Terminology ⭐⭐⭐

Your faculty specifically lists these terms: 

| Term       | Super simple meaning            |
| ---------- | ------------------------------- |
| Population | Group of solutions              |
| Chromosome | One complete solution           |
| Gene       | One position in chromosome      |
| Allele     | Value of a gene                 |
| Genotype   | Encoded form                    |
| Phenotype  | Actual decoded solution         |
| Encoding   | Method of representing solution |
| Fitness    | Quality of solution             |
| Selection  | Choosing parents                |
| Crossover  | Combining parents               |
| Mutation   | Small random change             |

---

# 6. Population

### Definition

> **Population is a collection of candidate solutions in a particular generation.**

Example:

```text
P1 = 101101
P2 = 110010
P3 = 011101
P4 = 111001
```

These four chromosomes together form a population. 

### Real-life example

Four students preparing different study schedules = **population**.

---

# 7. Chromosome

### Definition

> **A chromosome represents one complete candidate solution.**

Example:

```text
Chromosome = 10110110
```

For binary GA, every position contains either:

```text
0 or 1
```

For a selection problem:

```text
101101
```

could mean:

```text
1 → Select item
0 → Don't select item
```



### Easy memory

**Population = many solutions**

**Chromosome = one solution**

---

# 8. Gene

### Definition

> **A gene is one position or element of a chromosome.**

Example:

```text
1 0 1 1 0 1
        ↑
       Gene
```

One position = one gene.

---

# 9. Allele

### Definition

> **Allele is the value taken by a gene.**

For binary encoding:

```text
Allele = 0 or 1
```

Example:

```text
Chromosome = 1 0 1 1 0 1
                  ↑
                Gene
                  ↓
               Allele = 1
```

Your notes use exactly this distinction. 

### Easy memory

**Gene = position**

**Allele = value**

---

# 10. Genotype vs Phenotype ⭐

This is a common theory question.

## Genotype

> **Genotype is the internal encoded representation of a solution.**

Example:

```text
1011
```

## Phenotype

> **Phenotype is the actual real-world solution obtained after decoding the genotype.**

Example:

```text
Genotype → 1011
Phenotype → actual value/solution
```

Your notes give a bridge example:

```text
Genotype = [12,45,2,8]
```

representing coordinates/thickness of bridge components.

The resulting actual physical bridge is the **phenotype**. 

### Easy memory

**Genotype = code**

**Phenotype = actual result**

---

# 11. Encoding ⭐⭐⭐

### Definition

> **Encoding is the method used to represent a candidate solution as a chromosome.**

Your notes list five major types: 

1. Binary encoding
2. Real-valued encoding
3. Permutation encoding
4. Tree encoding
5. Hybrid encoding

---

# 12. Binary Encoding

This is the most traditional encoding.

A chromosome contains:

```text
0s and 1s
```

Example:

```text
10110
```

Each position represents a gene.

### Example

Suppose:

```text
10110
```

means selection of products:

```text
1 → Product selected
0 → Product not selected
```

### Advantages

* Simple
* Easy to implement
* Works well with crossover and mutation
* Suitable for discrete/combinatorial problems



### Real-life example

Shopping:

```text
1 = Buy
0 = Don't buy
```

---

# 13. Real-Valued / Floating-Point Encoding

Instead of 0 and 1, use real numbers.

Example:

```text
[2.45, 0.89, 7.12]
```

Each gene is a real number.

Used for problems involving **continuous variables**. 

### Real-life example

Optimizing a car:

```text
Engine power = 120.5
Weight = 1250.7
Fuel efficiency = 18.6
```

---

# 14. Permutation Encoding ⭐

Used when **order matters**.

Example:

```text
[4, 1, 3, 2, 5]
```

Each number can represent a city.

The sequence tells us the visiting order.

Used in:

> **Travelling Salesman Problem (TSP)**

Example:

```text
4 → 1 → 3 → 2 → 5
```

Mutation may swap two cities. 

### Real-life example

Exam timetable:

```text
Math → OS → DBMS → AI
```

Order matters.

---

# 15. Tree Encoding

Here, a solution is represented as a **tree**.

Mostly used in **Genetic Programming**.

Example mathematical expression:

```text
       +
      / \
     *   5
    / \
   x   3
```

This represents:

```text
(x × 3) + 5
```

Internal nodes = operators.

Leaf nodes = variables/constants.



### Real-life example

A computer program can be represented as a tree.

---

# 16. Hybrid / Mixed Encoding

Combines two or more encoding methods.

Example:

```text
[1 | 2.75 | 0 | 5.3]
```

Some genes can be binary while others are real-valued. 

### Real-life example

Car design:

```text
Electric? → 1/0
Speed → 120.5
Automatic? → 1/0
Weight → 1300.5
```

---

# 17. Fitness Function ⭐⭐⭐

### Definition

> **Fitness function evaluates how well a chromosome solves the problem.**

It tells GA:

> "How good is this solution?"

According to your notes, higher fitness generally indicates better solution quality, although the problem may instead be formulated as minimization. 

---

## Example

Suppose:

```text
f(x) = x²
```

and we want to maximize it.

For:

```text
x = 5
```

Fitness:

```text
f(5) = 25
```

For:

```text
x = 10
```

Fitness:

```text
f(10) = 100
```

Therefore:

```text
10 is better than 5
```

---

## Important: Maximization vs Minimization

### Maximization

Want:

```text
Fitness ↑
```

Example:

* Maximum profit
* Maximum performance
* Maximum marks

### Minimization

Want:

```text
Cost/distance ↓
```

Example:

* Minimum travel distance
* Minimum cost
* Minimum weight

For minimization, the notes show that fitness can be represented as:

```text
Fitness = 1 / Total Distance
```

So smaller distance gives larger fitness. 

---

# 18. Selection ⭐⭐⭐

### Definition

> **Selection is the process of choosing chromosomes from the current population to become parents for the next generation.**

Main idea:

> Better fitness → higher chance of selection.

But we also want to maintain diversity. 

---

# 19. Types of Selection

Your faculty notes divide parent selection into:

### Fitness Proportionate

* Roulette Wheel
* Stochastic Universal Sampling

### Ordinal Based

* Ranking Selection
* Tournament Selection

### Threshold Based

* Truncation Selection

This classification appears in the selection-operator diagram in the notes. 

---

# 20. Roulette Wheel Selection ⭐⭐⭐

Imagine a **casino roulette wheel**.

Each chromosome gets a portion of the wheel according to its fitness.

Higher fitness:

→ Bigger portion

Lower fitness:

→ Smaller portion

Therefore:

> Better chromosomes have a greater probability of being selected.

The faculty example shows chromosomes with fitness values such as A=8.2, B=3.2, C=1.4, etc., represented as portions of the wheel. 

### Formula

```text
Probability =
Fitness of chromosome
----------------------
Total fitness
```

Example:

If total fitness = 100

and chromosome fitness = 20:

```text
P = 20/100
  = 0.20
  = 20%
```

---

# 21. Stochastic Universal Sampling — SUS

SUS is similar to Roulette Wheel Selection.

### Main difference:

Roulette:

> One fixed pointer.

SUS:

> Multiple fixed pointers.

All parents can be selected in **one spin**.

It gives highly fit individuals a chance to be selected at least once. 

### Easy memory

```text
Roulette = ONE pointer
SUS      = MULTIPLE pointers
```

---

# 22. Ranking Selection

Problem with roulette:

Suppose one chromosome has **90% of total fitness**.

Then it gets almost all the selection probability.

Other chromosomes get very little chance.

Ranking selection solves this by ranking chromosomes based on fitness rather than directly using their raw fitness values. 

### Example

```text
Best       → Rank 1
Second     → Rank 2
Third      → Rank 3
Worst      → Rank 4
```

Selection is based on rank.

---

# 23. Tournament Selection ⭐

Very easy.

### Process:

1. Randomly select K chromosomes.
2. Compare them.
3. Select the best one.
4. Repeat for next parent.

Example:

Randomly select:

```text
A, E, T
```

Suppose:

```text
A = fitness 5
E = fitness 9
T = fitness 3
```

Then:

```text
E wins
```

So E becomes parent.

This is called **K-way tournament selection**. 

### Real-life example

Three students participate in a quiz.

Highest score becomes team leader.

---

# 24. Truncation Selection

### Definition

> Chromosomes are sorted according to fitness, and only the best portion is selected as parents.

Example:

Population = 100

If:

```text
Truncation = 20%
```

then top:

```text
20 chromosomes
```

are selected.

The notes state that the truncation proportion may range from about 10%–50%. 

---

# 25. Crossover ⭐⭐⭐

### Definition

> **Crossover combines genetic material from two or more parent chromosomes to create offspring.**

Think:

**Parent + Parent → Child**

It is inspired by biological reproduction/recombination. 

### Real-life example

Parent 1:

> Good at coding + average communication

Parent 2:

> Average coding + excellent communication

Child may inherit:

> Good coding + excellent communication

---

# 26. Types of Crossover

Your notes cover:

### Binary-coded

* Single-point
* Two-point
* Multi-point
* Uniform
* Half-uniform
* Uniform with crossover mask
* Shuffle
* Three-parent

### Real-coded

* Single arithmetic
* Linear

### Order-coded

* Partially mapped crossover
* Cycle crossover

The crossover classification appears in the faculty slides. 

---

# 27. Single-Point Crossover ⭐⭐⭐

Example:

```text
Parent 1 = 011|0110
Parent 2 = 110|1000
```

The crossover point is after the third gene.

Exchange the right parts:

```text
Child 1 = 011|1000
Child 2 = 110|0110
```

### Steps

1. Select two parents.
2. Select one random crossover point.
3. Exchange segments after the point.
4. Create offspring.



### Memory:

**One point = cut once.**

---

# 28. Two-Point Crossover

Select **two crossover points**.

Example:

```text
Parent 1 = 01|10|110
Parent 2 = 11|01|000
```

Exchange the middle portion.

### Memory:

**Two points = middle part exchanged.**

The faculty example demonstrates this on pages 77–78. 

---

# 29. Multi-Point Crossover

Uses:

> More than two crossover points.

Segments are exchanged alternately.

### Memory:

```text
Single → 1 point
Two → 2 points
Multi → many points
```



---

# 30. Uniform Crossover

Here we don't use a fixed crossover point.

Each gene is independently selected from either parent.

The notes demonstrate this using a coin toss:

```text
H = 1
T = 0
```

Depending on the result, a gene is selected from Parent 1 or Parent 2. 

### Easy memory

**Uniform = gene-by-gene choice**

---

# 31. Half-Uniform Crossover

This is similar to uniform crossover.

But the coin toss is performed only where the corresponding genes of the two parents **do not match**. 

### Easy memory

**HUX = focus on different bits.**

---

# 32. Uniform Crossover with Crossover Mask

A **crossover mask** tells us which parent's gene should be selected.

Example:

```text
P1 = 0111010
P2 = 1101000

Mask = 0100110
```

The mask determines whether the child receives the gene from P1 or P2.

The faculty slide specifies:

```text
CM = 0 → select according to P1/P2 rule
CM = 1 → select the other parent
```

for the two offspring. 

### Exam idea:

> **Mask controls which parent contributes each gene.**

---

# 33. Shuffle Crossover

Steps:

1. Select two parents.
2. Select a crossover point.
3. Shuffle genes in the selected portion.
4. Generate offspring.

The notes demonstrate shuffling the genes after the selected point. 

---

# 34. Three-Parent Crossover

Instead of two parents:

```text
Parent 1
Parent 2
Parent 3
```

are used.

For each gene, the algorithm checks the parent values and selects according to the rule shown in the faculty example. 

### Memory:

**Normal crossover = 2 parents**

**Three-parent crossover = 3 parents**

---

# 35. Real-Coded Crossover

Used when chromosomes contain real numbers.

Example:

```text
P1 = [15.65, 12.76, 13.47]
P2 = [18.83, 19.41, 16.28]
```

Your notes cover:

1. Single Arithmetic Crossover
2. Linear Crossover

---

# 36. Single Arithmetic Crossover ⭐

Select one gene.

Then use:

$$
O_1=(1-\alpha)P_1+\alpha P_2
$$

$$
O_2=(1-\alpha)P_2+\alpha P_1
$$

The faculty example uses:

```text
α = 0.5
```

and modifies the selected gene. 

### Simple understanding

You are basically taking a **weighted average of two parent values**.

Example:

```text
P1 = 10
P2 = 20
α = 0.5

Child = 0.5(10) + 0.5(20)
     = 15
```

---

# 37. Linear Crossover

Linear crossover also works with real-valued chromosomes.

The faculty example defines different α and β parameters and uses:

$$
O_{ik}=\alpha_iP_{1k}+\beta_iP_{2k}
$$

Different offspring can use different α and β values. 

The example generates offspring values such as:

```text
16.08
9.43
22.73
```

for the selected gene.

### Don't panic about the formula.

For exam:

> **Linear crossover generates real-valued offspring using linear combinations of parent values.**

---

# 38. Order-Coded Crossover

Used for:

> **Permutation chromosomes**

Especially useful in problems like:

* TSP
* Scheduling
* Ordering

Two types in your notes:

1. Partially Mapped Crossover — PMX
2. Cycle Crossover

---

# 39. Partially Mapped Crossover — PMX ⭐⭐

This is important for TSP.

Example parents:

```text
P1 = 1 2 3 4 5 6 7
P2 = 5 4 6 7 2 1 3
```

Steps:

1. Select two crossover points.
2. Copy the selected segment.
3. Perform two-point crossover.
4. Create mapping between exchanged elements.
5. Use mapping to remove duplicate values and create valid offspring.

The faculty example creates mappings such as:

```text
1 ↔ 6
7 ↔ 4
2 ↔ 5
```

and uses them to legalize offspring. 

### Why PMX?

Because in permutation problems:

```text
1 2 3 4 5
```

you cannot have:

```text
1 2 2 4 5
```

because city 2 appears twice.

PMX helps maintain a valid permutation.

---

# 40. Cycle Crossover

Cycle crossover identifies **cycles between two parent chromosomes**.

Then offspring are formed based on those cycles. 

### Easy idea

Instead of simply cutting and joining, it identifies which positions form a cycle and preserves those relationships.

---

# 41. Mutation ⭐⭐⭐

### Definition

> **Mutation introduces a small random change into a chromosome.**

Purpose:

* Maintain diversity
* Explore new regions
* Prevent premature convergence
* Introduce genetic variation



### Real-life example

Imagine 100 students all use exactly the same study plan.

Mutation changes one student's plan slightly.

Maybe:

```text
Study DBMS at 8 PM
```

becomes:

```text
Study DBMS at 9 PM
```

This may accidentally produce a better schedule.

---

# 42. Why Mutation?

Without mutation, population can become too similar.

Then GA may get stuck.

This is called:

> **Premature convergence**

Mutation introduces new possibilities.

---

# 43. Types of Mutation ⭐⭐⭐

Your notes list five main mutation operators: 

1. Bit Flip Mutation
2. Random Resetting Mutation
3. Swap Mutation
4. Scramble Mutation
5. Inversion Mutation

---

# 44. Bit Flip Mutation

Used for:

> **Binary encoding**

Change:

```text
0 → 1
1 → 0
```

Example:

```text
Before:
001101010

After:
001001010
   ↑
changed
```



### Memory:

**Bit Flip = 0 ↔ 1**

---

# 45. Random Resetting Mutation

Used with integer representation.

A randomly selected gene gets a new permissible random value.

Example:

```text
Before:
1 2 3 4 5 6

After:
1 3 3 4 5 6
```

The selected gene value is randomly reset to another allowed value. 

### Memory:

**Random Resetting = replace value randomly**

---

# 46. Swap Mutation ⭐

Used commonly for:

> **Permutation encoding**

Choose two positions and exchange them.

Example:

```text
Before:
1 2 3 4 5 6

Swap 2 and 6

After:
1 6 3 4 5 2
```



### Memory:

**Swap = exchange two positions**

---

# 47. Scramble Mutation

Select a portion of the chromosome.

Then randomly shuffle the genes in that portion.

Example:

```text
Before:
0 1 | 2 3 4 5 6 | 7 8 9

After:
0 1 | 3 6 4 2 5 | 7 8 9
```

The selected genes remain the same; only their order changes. 

### Memory:

**Scramble = shuffle**

---

# 48. Inversion Mutation ⭐

Select a segment.

Then **reverse the entire segment**.

Example:

```text
Before:

0 1 | 2 3 4 5 6 | 7 8 9

After:

0 1 | 6 5 4 3 2 | 7 8 9
```



### Memory:

**Inversion = reverse**

---

# 🔥 VERY IMPORTANT DIFFERENCE

| Mutation         | What happens?          |
| ---------------- | ---------------------- |
| Bit Flip         | 0 ↔ 1                  |
| Random Resetting | Replace value          |
| Swap             | Exchange two genes     |
| Scramble         | Shuffle selected genes |
| Inversion        | Reverse selected genes |

### One-line memory trick:

> **Flip = change, Reset = replace, Swap = exchange, Scramble = shuffle, Inversion = reverse.**

---

# 49. COMPLETE GA SOLVED EXAMPLE

Your faculty notes have a solved example for:

$$
f(x)=x^2
$$

The objective is to **maximize** the function.

They use a **5-bit binary representation**, allowing values from:

```text
00000 = 0
```

to

```text
11111 = 31
```



---

## Step 1 — Initial Population

Faculty example:

```text
01100
11001
00101
10011
```

Decode:

```text
01100 = 12
11001 = 25
00101 = 5
10011 = 19
```

---

## Step 2 — Fitness

Formula:

$$
f(x)=x^2
$$

Therefore:

```text
12² = 144
25² = 625
5²  = 25
```

The slide's table lists **181** for the chromosome `10011` / x=19, which is inconsistent with the stated formula \(x^2\) because \(19^2=361\). If this exact faculty example appears in your exam, **follow the faculty's displayed table/convention**, but be aware of this arithmetic inconsistency. 

---

# 50. Selection in the solved example

Probability is calculated as:

$$
P_i=\frac{f_i}{\sum f}
$$

Then expected count is calculated using average fitness:

$$
Expected\ Count=
\frac{f_i}{Average\ Fitness}
$$

The faculty table uses these calculations to determine the mating pool. 

### Basic idea:

Better fitness → greater probability → greater chance of reproduction.

---

# 51. Crossover in solved example

The faculty example selects crossover points and generates offspring.

For example:

```text
Parent → Child
```

After crossover, the displayed best fitness increases from:

```text
625
```

to:

```text
729
```

because a child with:

```text
x = 27
```

has:

$$
27^2=729
$$



---

# 52. Mutation in solved example

After mutation, the example gets:

```text
x = 29
```

Fitness:

$$
29^2=841
$$

So the sequence shown is:

```text
625 → 729 → 841
```

This illustrates how GA can gradually improve the solution. 

---

# 53. TRAVELLING SALESMAN PROBLEM — TSP ⭐⭐⭐

This is another **very important solved example** in your notes.

## Problem

There are several cities.

A salesman must:

1. Visit every city exactly once.
2. Return to the starting city.
3. Minimize total travel distance.

That's TSP.

---

# 54. TSP chromosome representation

For TSP:

> Each city = gene.

A sequence of cities = chromosome.

Example:

```text
1 → 4 → 3 → 5 → 2 → 1
```

Chromosome:

```text
[1 4 3 5 2]
```

The starting city is added again when calculating the complete route. 

---

# 55. TSP Initial Population

Faculty example uses four chromosomes/routes:

```text
P1 = 1 → 2 → 5 → 4 → 3 → 1
P2 = 1 → 3 → 2 → 4 → 5 → 1
P3 = 1 → 4 → 3 → 5 → 2 → 1
P4 = 1 → 5 → 2 → 3 → 4 → 1
```



---

# 56. TSP Fitness

For TSP:

> Smaller distance = better solution.

The faculty example calculates:

```text
P1 distance = 23
P2 distance = 32
P3 distance = 16
P4 distance = 20
```

Fitness:

$$
Fitness=\frac{1}{Distance}
$$

So:

```text
P3 = 1/16 = 0.0625
```

is better than:

```text
P2 = 1/32 = 0.0313
```



---

# 57. TSP Selection

The best chromosomes are selected as parents.

The faculty example selects:

```text
Parent 1 = P3
Parent 2 = P4
```

because they have the highest fitness values in that generation. 

---

# 58. TSP Crossover

Selected parents:

```text
Parent 1 = 1-4-3-5-2
Parent 2 = 1-5-2-3-4
```

A crossover point is chosen.

Child construction must ensure:

> **No city is duplicated.**

For example, the faculty constructs:

```text
Child 1 = 1-4-5-2-3
Child 2 = 1-5-4-3-2
```



---

# 59. TSP Mutation

Swap mutation is used.

Example:

```text
Child 1 before:
1-4-5-2-3

Swap gene 4 and 5

After:
1-4-5-3-2
```

The faculty example then calculates the new distance and fitness. 

---

# 60. Forming the New Generation

Old population:

```text
P1
P2
P3
P4
```

Add:

```text
Child 1
Child 2
```

Then rank all solutions according to fitness.

Keep the best four.

The faculty example ranks:

```text
P3
P4
Child 1
P1
```

as the retained four for the next generation. 

Then repeat.

---

# ⭐ TSP COMPLETE FLOW

Memorize this:

```text
Represent cities as chromosome
          ↓
Generate initial population
          ↓
Calculate distance
          ↓
Calculate fitness = 1/distance
          ↓
Select parents
          ↓
Crossover
          ↓
Mutation
          ↓
Calculate new distance + fitness
          ↓
Select best chromosomes
          ↓
New generation
          ↓
Repeat
```

---

# 61. GA Parent Selection Operators

Your faculty divides them into:

```text
Parent Selection
       |
       ├── Fitness Proportionate
       |      ├── Roulette Wheel
       |      └── SUS
       |
       ├── Ordinal Based
       |      ├── Ranking
       |      └── Tournament
       |
       └── Threshold Based
              └── Truncation
```

This diagram is directly shown in the notes. 

---

# 62. Crossover Operators — MASTER TABLE

| Type        | Main operators    |
| ----------- | ----------------- |
| Binary      | Single-point      |
| Binary      | Two-point         |
| Binary      | Multi-point       |
| Binary      | Uniform           |
| Binary      | Half-uniform      |
| Binary      | Mask              |
| Binary      | Shuffle           |
| Binary      | Three-parent      |
| Real-coded  | Single arithmetic |
| Real-coded  | Linear            |
| Order-coded | PMX               |
| Order-coded | Cycle             |

### Remember by category:

**Binary → bits**

**Real-coded → decimal numbers**

**Order-coded → sequence/permutation**

---

# 63. Mutation Operators — MASTER TABLE

| Mutation         | Main idea                      |
| ---------------- | ------------------------------ |
| Bit Flip         | Change 0 ↔ 1                   |
| Random Resetting | Assign another allowed value   |
| Swap             | Exchange two positions         |
| Scramble         | Randomly shuffle selected part |
| Inversion        | Reverse selected part          |

The five are explicitly listed in the faculty slides. 

---

# 64. Applications of Evolutionary Algorithms ⭐⭐

Your final slide gives these applications: 

### 1. Engineering Design

Optimize:

* Weight
* Cost
* Strength
* Performance

### 2. Scheduling

Optimize:

* Timetables
* Job scheduling
* Resource allocation

### 3. Routing

Find efficient routes in:

* TSP
* Vehicle routing

### 4. Machine Learning

Used for:

* Feature selection
* Hyperparameter optimization
* Neural network optimization

### 5. Manufacturing

Used for:

* Production planning
* Machine scheduling
* Material utilization

### 6. Network Optimization

Used for:

* Routing
* Bandwidth allocation
* Network topology

### 7. Finance

Portfolio optimization to balance:

* Risk
* Return

### 8. Robotics

Used for:

* Path planning
* Trajectory planning

---

# 🚨 NOW MEMORIZE THESE 15 THINGS

If your exam is very close, **do NOT try to memorize all 116 pages equally**.

Memorize these:

### 1. Genetic Algorithm

> Population-based optimization technique inspired by natural selection and genetics.

### 2. Population

> Collection of candidate solutions.

### 3. Chromosome

> One complete candidate solution.

### 4. Gene

> One position in a chromosome.

### 5. Allele

> Value of a gene.

### 6. Fitness Function

> Measures how good a solution is.

### 7. Selection

> Selects chromosomes to become parents.

### 8. Crossover

> Combines genetic information from parents.

### 9. Mutation

> Makes small random changes.

### 10. GA Flow

```text
Population
↓
Fitness
↓
Selection
↓
Crossover
↓
Mutation
↓
New Population
↓
Repeat
```

### 11. Encoding

```text
Binary
Real-valued
Permutation
Tree
Hybrid
```

### 12. Selection

```text
Roulette Wheel
SUS
Ranking
Tournament
Truncation
```

### 13. Crossover

```text
Single Point
Two Point
Multi Point
Uniform
PMX
Cycle
```

### 14. Mutation

```text
Bit Flip
Random Resetting
Swap
Scramble
Inversion
```

### 15. TSP

```text
City = Gene
Route = Chromosome
Distance = Objective
Fitness = 1/Distance
Selection
→ Crossover
→ Mutation
→ New Generation
```

---

# 🧠 ONE REAL-LIFE STORY TO REMEMBER THE WHOLE CHAPTER

Imagine you are trying to find the **best route for your college trip**.

You have 100 possible routes.

### Population

100 possible routes.

### Chromosome

One route.

```text
Mumbai → Pune → Nashik → Mumbai
```

### Gene

One city in that route.

### Encoding

How you represent the route.

```text
[1,3,2,1]
```

### Fitness

How good is the route?

Shorter route = better.

### Selection

Keep/select better routes.

### Crossover

Take parts of two good routes and create a new route.

### Mutation

Randomly swap two cities.

### New generation

Keep the best routes.

### Repeat

Keep improving.

**THAT IS GENETIC ALGORITHM.**

---

# 🔥 30-SECOND REVISION BEFORE ENTERING EXAM

Say this to yourself:

> **Genetic Algorithm is inspired by natural evolution. It starts with a population of candidate solutions. Each solution is represented as a chromosome. Fitness function measures its quality. Selection chooses good parents. Crossover combines parents to produce offspring. Mutation introduces small random changes. The new population is evaluated and the process repeats until a termination condition is reached.**

Then remember:

```text
GENETIC ALGORITHM
       ↓
 POPULATION
       ↓
 FITNESS
       ↓
 SELECTION
       ↓
 CROSSOVER
       ↓
 MUTATION
       ↓
 NEW GENERATION
       ↓
 BEST SOLUTION
```

### And the three golden rules:

> **Selection = Choose**

> **Crossover = Combine**

> **Mutation = Change**

If you understand those three words, **you understand the core of the entire module.**
