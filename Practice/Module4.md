# Module 4 — Evolutionary Algorithm / Genetic Algorithm

1. First understand the BIG IDEA

Imagine you have a problem:

> "I want to find the best possible solution, but there are thousands or millions of possible solutions."



For example:

Problem: You have 10 cities and want to find the shortest route visiting all cities.

Trying every possible route can be extremely expensive.

A Genetic Algorithm tries to find a very good solution by copying the basic idea of natural evolution:

> Better solutions get more chances to reproduce, their features are combined, and sometimes small random changes are introduced.



This idea is inspired by Darwin's theory of natural evolution and natural selection. The notes specifically describe GA as a heuristic search algorithm inspired by natural evolution. 


---

2. Real-Life Example to Understand GA

Let's use a simple example throughout.

Imagine a college wants to create the best timetable.

There are many possible timetables:

Timetable A

Timetable B

Timetable C

Timetable D

...


Some timetables have:

no teacher clashes

no classroom clashes

balanced subjects

convenient timings


Others have many problems.

So:

Good timetable = high fitness

Bad timetable = low fitness

GA will keep improving the population of timetables.

Think:

Many possible timetables
        ↓
Check which are good
        ↓
Select good ones
        ↓
Combine them
        ↓
Make small random changes
        ↓
Better timetables
        ↓
Repeat

That is Genetic Algorithm.


---

3. Important GA Terminology

Before going further, memorize these terms.

Gene

A gene is one small piece of information.

Example:

101101

Each individual bit is a gene.

1 0 1 1 0 1
↑ ↑ ↑ ↑ ↑ ↑
Genes

In a timetable, a gene might represent:

> "Monday 9 AM → Machine Learning"



The exact meaning depends on the problem.


---

4. Chromosome

A group/string of genes forms a chromosome.

Example:

101101

is one chromosome.

Think of it as:

> One complete candidate solution.



For example:

Chromosome 1 = 101101
Chromosome 2 = 110010
Chromosome 3 = 001101

Each chromosome represents one possible solution.

The notes explain that an individual solution is represented as a chromosome and its parameters/variables are represented by genes. 


---

5. Population

A collection of chromosomes is called a population.

Example:

Population

101101
110010
001101
111000

Here:

1 chromosome = 1 solution

4 chromosomes = population of size 4


Real-life:

Timetable A
Timetable B
Timetable C
Timetable D

Together = population.


---

6. Fitness

Now the most important question:

> How do we know which solution is good?



We use a fitness function.

The fitness function gives every chromosome a fitness score.

For example:

Timetable	Fitness

A	80
B	45
C	95
D	60


Here:

C = best
B = worst

Higher fitness generally means a better solution when the objective is maximization.

The notes define the fitness function as determining how "fit" an individual is and assigning a fitness score to each individual. 


---

7. The Complete Genetic Algorithm

Your first PDF gives the main phases as:

1. Initialization


2. Fitness Assignment


3. Selection


4. Crossover / Reproduction


5. Termination



The flowchart then shows the population being initialized, fitness computed, parents selected, crossover and mutation performed, fitness recomputed, and the process repeated until the stopping criteria are met. 

But remember the practical cycle as:

INITIALIZE
     ↓
CALCULATE FITNESS
     ↓
SELECT PARENTS
     ↓
CROSSOVER
     ↓
MUTATION
     ↓
NEW POPULATION
     ↓
CALCULATE FITNESS
     ↓
STOP?
  ↙     ↘
YES      NO
 ↓        ↓
END    Repeat

This is the most important diagram of the entire module.


---

8. Phase 1 — Initialization

The algorithm starts with a random population.

Example:

Population

P1 = 101010
P2 = 110011
P3 = 001101
P4 = 111000

These are candidate solutions.

Why random?

Because initially we don't know which solution is best.

So we start with several different possibilities.

The notes describe the initial population as a set of individuals/candidate solutions and show several chromosomes forming a population. 


---

9. Phase 2 — Fitness Assignment

Calculate how good each chromosome is.

Example:

Suppose our objective is:

> Maximize the number represented by the binary chromosome.



101010 = 42
110011 = 51
001101 = 13
111000 = 56

Therefore:

Chromosome	Value/Fitness

101010	42
110011	51
001101	13
111000	56


Best:

111000

because fitness = 56.


---

10. Phase 3 — Selection

Now we ask:

> Which chromosomes should become parents?



The basic idea is:

> Better chromosomes should have a higher chance of becoming parents.



This is similar to natural selection.

Imagine 4 students:

Student	Performance

A	90%
B	75%
C	40%
D	20%


If we are selecting students for an advanced team, A and B should have greater chances.

Similarly, in GA, chromosomes with higher fitness generally get greater selection opportunity. 


---

11. Types of Parent Selection

Your second PDF divides selection into:

Fitness Proportionate

1. Roulette Wheel Selection


2. Stochastic Universal Sampling



Ordinal Based

3. Ranking Selection


4. Tournament Selection



Threshold Based

5. Truncation Selection



This classification is shown in the notes. 

Let's understand each.


---

12. Roulette Wheel Selection

This is very important for exams.

Imagine a wheel.

Each chromosome gets a portion of the wheel according to its fitness.

Suppose:

Chromosome	Fitness

A	50
B	30
C	15
D	5


Total:

50 + 30 + 15 + 5 = 100

Therefore:

A → 50% chance
B → 30% chance
C → 15% chance
D → 5% chance

Visually:

A
   ┌─────────┐
   │         │
 B │         │
   │         │ C
   └─────D───┘

Then spin the wheel.

Whichever chromosome the pointer lands on is selected.

Key point

Higher fitness → larger wheel portion → higher probability of selection.

The notes show exactly this concept and give the algorithm: calculate total fitness, generate a random number, accumulate fitness values, and select the chromosome where the cumulative value crosses the random number. 


---

13. Roulette Wheel — Numerical Example

Suppose:

A = 8.2
B = 3.2
C = 1.4
D = 1.2
E = 4.2
F = 0.3

Total:

S = 8.2 + 3.2 + 1.4 + 1.2 + 4.2 + 0.3
  = 18.5

Suppose random number:

r = 10

Cumulative fitness:

A → 8.2
B → 11.4

Since:

11.4 > 10

we select:

B

Exam algorithm

Write:

1. Calculate total fitness S.


2. Generate random number r between 0 and S.


3. Start cumulative sum from 0.


4. Add fitness values one by one.


5. When cumulative sum > r, select that chromosome.




---

14. Stochastic Universal Sampling — SUS

SUS is similar to roulette wheel selection.

Difference:

Roulette Wheel

Uses one selection pointer/random point at a time.

SUS

Uses multiple equally spaced fixed points.

So several parents can be selected in one spin.

The notes explicitly state that SUS uses multiple fixed points instead of one and that all parents can be chosen in one spin. 

Easy example

Imagine a chocolate bar divided according to fitness.

Roulette:

↓
-------------------------
      one pointer

SUS:

↓        ↓        ↓
-------------------------
 multiple equally spaced points

Why SUS?

It gives a more balanced selection and helps highly fit individuals get selected.


---

15. Ranking Selection

Problem with roulette wheel:

Suppose:

A = 900
B = 40
C = 30
D = 30

A dominates the wheel.

A gets:

900 / 1000 = 90%

of the probability.

The others get very little chance.

The notes specifically use this situation as the motivation for ranking selection. 

Ranking Selection solves this

Instead of directly using fitness values, rank the chromosomes.

Example:

Chromosome	Fitness	Rank

A	900	4
B	40	3
C	30	2
D	30	1


Selection is then based on rank, not raw fitness.

Remember:

> Roulette = fitness value matters



> Ranking = position/rank matters




---

16. Tournament Selection

Very easy.

Suppose:

K = 3

Randomly select 3 chromosomes.

Example:

A = fitness 90
C = fitness 60
D = fitness 40

Winner:

A

because A has the highest fitness.

That winner becomes a parent.

Then repeat for another parent.

The notes define K-way tournament selection as randomly selecting K individuals and choosing the best among them. 

Real-life example

Three students participate in a quiz:

Rahul = 90
Amit = 70
Jay = 50

Winner = Rahul.

That's tournament selection.

Important

If:

K = 2

→ 2-way tournament.

If:

K = 5

→ 5-way tournament.


---

17. Truncation Selection

This is simple.

1. Sort chromosomes according to fitness.


2. Select only the best percentage.



Suppose there are:

100 chromosomes

and truncation threshold:

20%

Then:

Top 20 chromosomes → parents
Remaining 80 → not selected

The notes say truncation selection is useful for large populations and that the truncation threshold represents the proportion selected, with the notes giving a range of 10%–50%. 

Easy memory

> Truncation = cut off the weak ones.




---

18. Selection Methods — Quick Comparison

Method	Main idea

Roulette Wheel	Probability based on fitness
SUS	Multiple equally spaced selection points
Ranking	Rank chromosomes instead of using raw fitness
Tournament	Randomly choose K, select best
Truncation	Select only top percentage


Memorize this table.


---

19. Phase 4 — Crossover

Now we have parents.

We want to create children.

This is called crossover.

Think about human genetics:

Father + Mother
       ↓
     Child

Similarly:

Parent 1 + Parent 2
       ↓
   Offspring

Crossover exchanges genetic information between parents.

The notes describe crossover as a major phase where a crossover point is selected and genetic material is exchanged to create offspring. 


---

20. Why Crossover?

Suppose:

Parent 1 = 111000
Parent 2 = 000111

Maybe Parent 1 has a good first half and Parent 2 has a good second half.

We can combine them:

111 | 000
000 | 111
    ↓
111 | 111

New child:

111111

So crossover combines useful features.


---

21. Types of Crossover

Your notes classify crossover into three categories:

Binary Coded

1. Single Point


2. Two Point


3. Multi Point


4. Uniform


5. Half-Uniform


6. Uniform with Mask


7. Shuffle


8. Matrix


9. Three-Parent



Real Coded

10. Single Arithmetic


11. Linear



Order Coded

12. Partially Mapped


13. Cycle



This classification appears in the second PDF. 

Important: the notes list Matrix crossover but do not provide a detailed explanation of its procedure, so I would not invent a step-by-step method beyond what your professor's notes state.


---

22. Single Point Crossover

Very important.

Suppose:

P1 = 011010
P2 = 110100

Choose one crossover point:

011 | 010
110 | 100

Exchange everything after the point.

Therefore:

O1 = 011 | 100
O2 = 110 | 010

So:

O1 = 011100
O2 = 110010

Memory trick

> Single Point = ONE cutting point.



The notes show exactly this process: select two parents, choose one crossover point randomly, and swap the bits to its right. 


---

23. Two Point Crossover

Now select two points.

Example:

P1 = 01 | 101 | 10
P2 = 11 | 010 | 00

Exchange the middle section:

O1 = 01 | 010 | 10
O2 = 11 | 101 | 00

Memory

Single Point → exchange after one point

Two Point → exchange between two points

The notes define two-point crossover as selecting two random crossover points and exchanging the middle section. 


---

24. Multi Point Crossover

Now use more than two crossover points.

Example:

P1 = 01 | 10 | 11 | 00
P2 = 11 | 01 | 00 | 11

Alternate the segments between crossover points.

So the child contains alternating portions from both parents.

The notes describe selecting more than two crossover points and swapping bits at alternate sites. 

Memory:

1 point → Single
2 points → Two
>2 points → Multi


---

25. Uniform Crossover

This one is different.

There is no single cutting point.

For every bit, decide which parent contributes the bit.

The notes explain it using a coin toss:

H = 1
T = 0

For each position, randomly decide which parent's bit goes into the offspring. 

Example:

P1 = 0 1 1 0 1 0
P2 = 1 1 0 1 0 0

Mask = 0 1 0 0 1 1

You independently choose bits position by position.

Key idea:

> Uniform = every gene gets an independent choice.




---

26. Half-Uniform Crossover

This is similar to uniform crossover.

But the coin toss is performed only where the parents have different bits.

Example:

P1 = 0 1 1 0
P2 = 1 1 0 0

Compare:

Position 1 → different
Position 2 → same
Position 3 → different
Position 4 → same

Random choice is applied only to positions 1 and 3.

The notes explicitly state this distinction. 


---

27. Uniform Crossover with Crossover Mask

Here, instead of tossing a coin, we create a crossover mask.

Example:

P1 = 0 1 1 0 1 0
P2 = 1 1 0 1 0 0

CM = 0 1 0 1 0 1

Rule in the notes:

For offspring 1:

CM = 0 → choose P1 bit
CM = 1 → choose P2 bit

For offspring 2, the opposite is used:

CM = 0 → choose P2 bit
CM = 1 → choose P1 bit



Memory

> Mask tells us which parent to pick from.




---

28. Shuffle Crossover

Here, genes are shuffled before crossover.

The notes describe:

1. Select two parents.


2. Select a crossover point.


3. Shuffle genes of both parents.





Why?

To reduce the effect of gene positions.

Think:

Original genes
↓
Shuffle
↓
Crossover
↓
Unshuffle

The key word is:

SHUFFLE


---

29. Three-Parent Crossover

This uses:

P1
P2
P3

instead of two parents.

The rule given in your notes for generating offspring O1 is:

If P1 bit = P2 bit
        ↓
Take P1 bit

If P1 bit ≠ P2 bit
        ↓
Take P3 bit

Then the notes repeat the process with different parent combinations to generate additional offspring. 

Easy example

Suppose at one position:

P1 = 1
P2 = 1
P3 = 0

P1 = P2

Therefore:

Child = 1

Another position:

P1 = 1
P2 = 0
P3 = 1

P1 ≠ P2

Therefore:

Child = P3 = 1


---

30. Real-Coded Crossover

So far we used:

0 and 1

But sometimes variables are actual numbers.

Example:

Height = 172.5
Weight = 68.4
Temperature = 37.2

Then binary encoding may not be convenient.

We can use real-coded representation.

Your notes cover two real-coded crossover methods:

1. Single Arithmetic Crossover


2. Linear Crossover 




---

31. Single Arithmetic Crossover

Suppose:

P1 gene = 12.76
P2 gene = 19.41

Choose:

α = 0.5

Then offspring values are created using a weighted combination.

Conceptually:

O1 = (1 − α)P1 + αP2

O2 = (1 − α)P2 + αP1

For α = 0.5:

O1 = 0.5P1 + 0.5P2
O2 = 0.5P2 + 0.5P1

So both are based on the parents' numerical values.

The notes' example uses real-valued chromosomes, selects one gene, defines α = 0.5, and modifies the selected gene to generate offspring. 

Easy idea

> Arithmetic crossover = mathematical combination of numbers.




---

32. Linear Crossover

Linear crossover also works with real-valued genes.

The notes:

1. Select two parents.


2. Select one gene k.


3. Define α and β parameters.


4. Modify the selected gene using linear combinations.


5. Generate offspring.





The general idea is:

Child = α × Parent1 + β × Parent2

Different α and β values create different offspring.

Easy memory

Arithmetic → weighted combination
Linear → linear combination


---

33. Order-Coded Crossover

Now comes a very important concept.

Suppose the chromosome represents an order.

Example:

A B C D E

This could mean:

> Visit cities A → B → C → D → E.



You cannot randomly exchange genes if doing so creates duplicate cities.

For example:

A B C D E
A C B D E

is valid.

But:

A B C D E
A B C C E

is invalid for a travelling-salesman route because C appears twice.

Your notes therefore use special crossover methods for order-coded chromosomes:

1. Partially Mapped Crossover (PMX)


2. Cycle Crossover (CX) 




---

34. Partially Mapped Crossover — PMX

PMX is used for permutation/order chromosomes.

Basic process from your notes:

Step 1

Select two parents.

Step 2

Select a substring using two crossover points.

Step 3

Perform two-point crossover.

Step 4

Determine the mapping relationship between the selected substrings.

Step 5

Use that mapping to legalize the remaining parts of the offspring.



Why is mapping needed?

Because permutation chromosomes cannot contain duplicates.

So PMX basically says:

> "I'll exchange a section, then I'll fix the duplicate/conflicting values using a mapping."




---

35. Cycle Crossover — CX

Cycle crossover is also for order/permutation representation.

The notes explain that it identifies cycles between the two parent chromosomes and forms offspring based on those cycles. 

Think of it like:

Parent 1
   ↓
Find relationship
   ↓
Cycle 1
Cycle 2
Cycle 3
   ↓
Use cycles to construct children

The example in the notes uses:

Parent 1 = 8473625190
Parent 2 = 0123456789

and identifies multiple cycles before filling the offspring. 

Memory:

> PMX = Mapping



> CX = Cycles




---

36. Phase 5 — Mutation

This is another extremely important concept.

After crossover, we sometimes make a small random change.

This is mutation.

Example:

Before:

101101

After:

101001

One or more genes changed.

The first PDF describes mutation as a low-probability random change in genes, where bits can be flipped. 


---

37. Why Mutation?

Imagine all parents are similar.

Then crossover will keep producing similar children.

The algorithm may get stuck.

Mutation introduces new variation.

Real-life example:

Imagine all students in a group are solving a problem using the same method.

One student suddenly tries a completely different approach.

That new approach may turn out to be better.

That's the role of mutation.

Key idea:

> Crossover combines existing information.



> Mutation introduces variation.




---

38. Mutation is a Unary Operator

Your second PDF specifically says mutation is a unary operator.

Why?

Because it needs only one chromosome to operate.

One chromosome
      ↓
   Mutation
      ↓
Changed chromosome

Crossover normally needs multiple parents.

P1 + P2
   ↓
Crossover
   ↓
Child




---

39. Five Mutation Operators

Your second PDF covers:

1. Bit Flip Mutation


2. Random Resetting Mutation


3. Swap Mutation


4. Scramble Mutation


5. Inversion Mutation 



Let's understand them.


---

40. Bit Flip Mutation

Used for binary encoding.

Rule:

0 → 1
1 → 0

Example:

Before:

101100

       ↑
       1

After:

101000
       ↑
       0

So the selected bit is flipped.

The notes explicitly state that bit flip selects one or more random bits and flips them, and that it is used for binary-coded GAs. 

Memory

> Bit Flip = 0 becomes 1, 1 becomes 0.




---

41. Random Resetting Mutation

Used for integer representation.

Suppose:

Chromosome:

4 7 2 9 5

Allowed values:

0–10

Choose one gene, say:

2

and randomly replace it with another allowed value:

2 → 8

Result:

4 7 8 9 5

The notes describe random resetting as an extension of bit-flip mutation for integer representations, where a random permissible value is assigned to a randomly chosen gene. 


---

42. Swap Mutation

Very important for permutation encoding.

Choose two positions and exchange them.

Example:

Before:

A B C D E

Select:

B and E

Swap:

After:

A E C D B

No duplicate is created.

The notes specifically identify swap mutation as common for permutation-based encoding. 

Memory:

> Swap = exchange two positions.




---

43. Scramble Mutation

Again used for permutations.

Select a subset.

Example:

A B C D E F G
    └─────┘

Suppose selected subset is:

B C D E

Shuffle those genes randomly:

E B D C

Final:

A E B D C F G

The notes define scramble mutation as selecting a subset and randomly shuffling the values within that subset. 

Memory:

> Scramble = randomly shuffle selected section.




---

44. Inversion Mutation

Select a subset and reverse its order.

Example:

Before:

A B C D E F G
  └───────┘

Selected:

B C D E

Reverse it:

E D C B

Result:

A E D C B F G

The notes specifically distinguish inversion from scramble: inversion reverses the selected substring instead of randomly shuffling it. 

Difference

Scramble:
B C D E → random arrangement

Inversion:
B C D E → E D C B


---

45. Mutation Comparison

Mutation	Used for	What happens?

Bit Flip	Binary	0 ↔ 1
Random Resetting	Integer	Replace gene with random allowed value
Swap	Permutation	Exchange two genes
Scramble	Permutation	Randomly shuffle selected section
Inversion	Permutation	Reverse selected section


This table is extremely useful for revision.


---

46. Phase 6 — Termination

Eventually we need to stop.

Otherwise GA would continue forever.

The notes say the algorithm terminates when the population has converged, meaning it is no longer producing offspring significantly different from the previous generation. 

Other practical stopping conditions can be:

Maximum number of generations reached
OR
Desired fitness achieved
OR
Population has converged

For your exam, use the wording from your notes:

> The algorithm terminates when the population has converged and does not produce significantly different offspring from the previous generation.




---

47. Now Understand the Entire GA With One Story

Suppose you want to find the best route for delivering food to 5 locations.

Step 1 — Initialization

Create random routes:

A → B → C → D → E
A → C → E → B → D
A → D → B → E → C
A → E → D → C → B

These are the population.


---

Step 2 — Fitness

Calculate route quality.

For shortest distance:

Shorter distance = better fitness

Example:

Route	Distance

R1	30 km
R2	20 km
R3	45 km
R4	25 km


R2 is better.


---

Step 3 — Selection

Select good routes as parents.

Maybe:

Parent 1 = R2
Parent 2 = R4


---

Step 4 — Crossover

Combine their useful ordering.

Parent 1
    +
Parent 2
    ↓
Child

For permutation problems, use something like PMX or Cycle Crossover.


---

Step 5 — Mutation

Maybe swap two cities:

A → B → C → D → E

          ↓

A → D → C → B → E

This creates a new possible route.


---

Step 6 — Fitness Again

Check the new route.

If it is better:

Keep it.


---

Step 7 — Repeat

Generation 1
     ↓
Generation 2
     ↓
Generation 3
     ↓
Generation 4
     ↓
...
     ↓
Good/near-optimal solution

That is Genetic Algorithm.


---

48. Encoding Techniques

Your first PDF has a separate section on encoding techniques.

Encoding means:

> How do we represent a candidate solution as a chromosome?



The notes say encoding is the representation of chromosomes and that a candidate solution is converted into a suitable representation. 

The notes cover:

1. Binary Encoding


2. Value Encoding


3. Permutation/Order Encoding


4. Tree Encoding




---

49. Binary Encoding

Chromosome is represented using:

0 and 1

Example:

101101

The notes describe binary encoding as one of the most common methods, where chromosomes are represented as strings of 0s and 1s. 

Example

Suppose:

x = 13

Binary:

01101

So:

13 → 01101


---

50. Binary Encoding — Knapsack Example

Your notes give a 0–1 Knapsack example.

There are objects:

Object	Weight	Profit

A	5 kg	$100
B	10 kg	$150
C	15 kg	$200


Maximum capacity:

25 kg

Possible combinations without exceeding capacity include:

A
B
C
AB
AC
BC



We can represent:

A B C

using:

1 0 1

Meaning:

1 → select
0 → don't select

So:

101

means:

A = selected
B = not selected
C = selected

Total weight:

5 + 15 = 20 kg

Total profit:

100 + 200 = $300


---

51. Value Encoding

Here the gene directly contains a value.

Instead of:

1010

we can have:

5
8
10
13

The notes explain that a gene can directly represent an integer, real number, character, or object, avoiding intermediate encoding/decoding. 

Example:

Chromosome = [5, 8, 10, 13]

This is easier when the problem naturally works with numerical values.

Memory

Binary → 0/1
Value → actual value


---

52. Permutation / Order Encoding

Used when order matters.

The notes say permutation encoding is useful for order problems where the order of processing is important. 

Classic example:

Travelling Salesman Problem

Cities:

A B C D E

A chromosome could be:

A → C → E → B → D

This means:

> Visit A first, then C, then E, then B, then D.



Important constraint:

Every city must be visited once.

Therefore:

A B C D E

is valid.

But:

A B C C D

is invalid.


---

53. Tree Encoding

Tree encoding represents the solution as a tree structure.

The notes specifically state that in this encoding scheme, the solution is represented in the form of a binary tree. 

For example, an expression:

(x + y) * z

can be represented as:

*
       / \
      +   z
     / \
    x   y

This is useful when the solution itself is naturally a program/expression/tree.


---

54. Encoding — One Table

Encoding	Representation	Example	Used when

Binary	0/1	101101	Binary decisions
Value	Direct values	[5, 8, 10]	Numerical/direct values
Permutation	Ordered values	A-C-E-B-D	Ordering problems
Tree	Tree structure	Expression tree	Program/expression structures



---

55. VERY IMPORTANT — Solved Example From Your Notes

Your first PDF has a complete solved GA example.

Problem:

> Maximize

f(x) = x²



with:

0 ≤ x ≤ 31

The notes choose binary encoding because numbers from 0 to 31 can be represented using 5 bits:

0  → 00000
31 → 11111




---

56. Step 1 — Initial Population

The notes choose a population of 4.

Initial chromosomes:

1 → 01100
2 → 11001
3 → 00101
4 → 10011

Decode them:

01100 = 12
11001 = 25
00101 = 5
10011 = 19




---

57. Step 2 — Calculate Fitness

Fitness:

f(x) = x²

Therefore:

Chromosome 1

x = 12

f(12) = 12²
      = 144

Chromosome 2

x = 25

f(25) = 25²
      = 625

Chromosome 3

x = 5

f(5) = 25

Chromosome 4

x = 19

f(19) = 361

There is an important point here: the visual OCR of the slide appears to show 181 for chromosome 4 in some pages, but mathematically 19² = 361. The table later in the same worked example uses values consistent with its displayed calculations; because the source image appears inconsistent at this point, follow your professor's exact classroom convention if this numerical example appears in your exam. The core GA procedure is unaffected.

The displayed table in the notes gives the population, decoded x-values, fitness values, sum, average, and maximum across the subsequent slides. 


---

58. Expected Selection Probability

For roulette-style selection:

Probability =
Fitness of chromosome
----------------------
Total fitness

For example, if total fitness is:

1155

and chromosome 1 has:

144

then:

P1 = 144 / 1155
   ≈ 0.1247

The notes show this calculation and convert the probabilities into percentages. 

So:

Higher fitness
      ↓
Higher probability
      ↓
More chance of becoming parent


---

59. Expected Count

The notes then calculate expected count using:

Expected Count
=
Fitness / Average Fitness

For example, approximately:

Expected Count
= 144 / 288.75
≈ 0.4987

The worked table shows expected counts and then actual selection counts. 

Important concept

Expected count tells us:

> How many times we would expect a chromosome to appear in the selected population based on its fitness.




---

60. Step 3 — Mating Pool

After selection, the selected chromosomes become the mating pool.

The notes show the selected population and then proceed to crossover. 

Conceptually:

Initial population
       ↓
Calculate fitness
       ↓
Selection
       ↓
Mating pool


---

61. Step 4 — Crossover in the Solved Example

The selected chromosomes undergo crossover.

The notes show chromosomes such as:

01100
11001
11001
10011

and generate offspring through crossover. 

The resulting offspring include:

01101
11000
11011
10001

which are then decoded and evaluated.

The important thing for the exam is understanding the process, not blindly memorizing the table.


---

62. Step 5 — New Fitness

After crossover, calculate fitness again.

The notes show:

01101 = 13
11000 = 24
11011 = 27
10001 = 17

Then:

13² = 169
24² = 576
27² = 729
17² = 289

Total:

1763

Average:

440.75

Maximum:

729



Notice something important:

Initial maximum was:

625

After crossover:

729

So the population improved.


---

63. Step 6 — Mutation

Then mutation is applied.

The notes show chromosomes after crossover and a flipping mutation step. 

For example, a chromosome can change from:

10001

to:

10100

depending on which bit(s) are selected for mutation.

Then calculate fitness again.

The final table shown in the notes gives:

29 → 841
24 → 576
27 → 729
20 → 400

Total:

2546

Average:

636.5

Maximum:

841



So the process has moved from an initial maximum of roughly:

625

to:

729

and then:

841

This demonstrates the main idea of GA:

> Over generations, the population can move toward better solutions.




---

64. The Most Important Difference: Selection vs Crossover vs Mutation

Students often confuse these three.

Remember:

Selection

Who becomes parent?

Population
   ↓
Choose parents


---

Crossover

How do parents produce children?

Parent 1 + Parent 2
       ↓
    Children


---

Mutation

How do we introduce a small random change?

Child
 ↓
Small change
 ↓
Mutated child

One-line memory trick

> Selection chooses, crossover combines, mutation changes.




---

65. Complete GA Example in One Diagram

START
               ↓
      Create population
               ↓
       Calculate fitness
               ↓
       Select parents
               ↓
          Crossover
               ↓
           Mutation
               ↓
       New population
               ↓
       Calculate fitness
               ↓
       Is stopping
        condition met?
          /       \
        YES       NO
         ↓         ↓
        END ←──────┘

This flow is consistent with the flowchart in your first PDF. 


---

66. Natural Evolution vs Genetic Algorithm

This is a very useful conceptual question.

Natural Evolution	Genetic Algorithm

Individual	Candidate solution
Population	Set of solutions
Gene	Variable/parameter
Chromosome	Solution representation
Fitness	Solution quality
Natural selection	Parent selection
Mating	Crossover
Genetic variation	Mutation
Generation	Iteration


Think:

Nature
   ↓
Evolution

GA
   ↓
Optimization


---

67. Why is GA called a Heuristic?

A heuristic is a method that tries to find a good solution efficiently without necessarily checking every possible solution.

For example, suppose there are:

1,000,000 possible solutions

Instead of testing all 1,000,000:

Generate some
     ↓
Improve them
     ↓
Keep good ones
     ↓
Generate better ones

GA searches intelligently.

Important:

> GA generally does not guarantee the absolute/global optimum every time.



It is an optimization/search approach.


---

68. Important Terms You Must Know for Exam

Population

Set of candidate solutions.

Individual

One candidate solution.

Gene

One component/parameter of a chromosome.

Chromosome

Representation of a candidate solution.

Fitness Function

Measures how good a solution is.

Parent

Selected chromosome used for reproduction.

Offspring

New chromosome produced from parents.

Generation

One cycle of the GA.

Selection

Choosing parents.

Crossover

Combining parents.

Mutation

Random small change.

Encoding

Representing a candidate solution as a chromosome.

Termination

Stopping the algorithm.


---

69. Selection — One-Minute Revision

Fitness Proportionate
       |
       ├── Roulette Wheel
       └── SUS

Ordinal Based
       |
       ├── Ranking
       └── Tournament

Threshold Based
       |
       └── Truncation

Remember:

Roulette → wheel
SUS → multiple pointers
Ranking → rank
Tournament → K competitors
Truncation → top percentage


---

70. Crossover — One-Minute Revision

Binary
 |
 ├── Single Point
 ├── Two Point
 ├── Multi Point
 ├── Uniform
 ├── Half Uniform
 ├── Uniform + Mask
 ├── Shuffle
 ├── Matrix
 └── Three Parent

Real
 |
 ├── Single Arithmetic
 └── Linear

Order
 |
 ├── PMX
 └── Cycle

Remember:

Single Point → 1 cut
Two Point → 2 cuts
Multi Point → >2 cuts
Uniform → bit-by-bit
Half Uniform → only different bits
Mask → mask decides parent
Shuffle → shuffle
Three Parent → 3 parents
Arithmetic → numerical combination
Linear → linear combination
PMX → mapping
Cycle → cycles


---

71. Mutation — One-Minute Revision

Mutation
   |
   ├── Bit Flip
   ├── Random Resetting
   ├── Swap
   ├── Scramble
   └── Inversion

Remember:

Bit Flip
0 ↔ 1

Random Reset
Replace with allowed random value

Swap
A B C D → A D C B

Scramble
Selected section → random shuffle

Inversion
Selected section → reverse


---

72. The Three Encoding Types You Must Connect With Operators

This is a very important exam concept.

Binary encoding

Example:

101101

Suitable operations:

Single point crossover
Two point crossover
Uniform crossover
Bit flip mutation


---

Value/Integer/Real encoding

Example:

[12.5, 8.3, 19.7]

Suitable operations:

Arithmetic crossover
Linear crossover
Random resetting


---

Permutation encoding

Example:

A C E B D

Suitable operations:

PMX
Cycle crossover
Swap mutation
Scramble mutation
Inversion mutation

This connection is extremely useful for solving questions.


---

73. Common Exam Questions

Based on the topics covered in your notes, prepare these very well.

Theory

1. What is Genetic Algorithm?


2. Explain the working of Genetic Algorithm.


3. Explain the phases of GA.


4. Define gene, chromosome, population and fitness.


5. Explain encoding techniques.


6. Explain binary encoding.


7. Explain value encoding.


8. Explain permutation encoding.


9. Explain tree encoding.


10. Explain selection operators.


11. Explain roulette wheel selection.


12. Explain SUS.


13. Explain ranking selection.


14. Explain tournament selection.


15. Explain truncation selection.


16. Explain crossover operators.


17. Explain single-point crossover.


18. Explain two-point crossover.


19. Explain multi-point crossover.


20. Explain uniform crossover.


21. Explain half-uniform crossover.


22. Explain crossover mask.


23. Explain shuffle crossover.


24. Explain three-parent crossover.


25. Explain real-coded crossover.


26. Explain single arithmetic crossover.


27. Explain linear crossover.


28. Explain PMX.


29. Explain cycle crossover.


30. Explain mutation.


31. Explain bit flip mutation.


32. Explain random resetting.


33. Explain swap mutation.


34. Explain scramble mutation.


35. Explain inversion mutation.


36. Explain termination/convergence.



Numerical

Very important:

> Solve a Genetic Algorithm problem involving binary encoding, fitness calculation, selection, crossover and mutation.



Your f(x) = x² example is exactly the kind of problem you should understand rather than just memorize. 


---

74. Super Short Story to Remember the Entire Module

Imagine you are selecting the best team for a college hackathon.

Population

All students/teams.

Chromosome

One team's characteristics.

Gene

One characteristic.

Fitness

How good the team is.

Selection

Choose better teams as parents.

Crossover

Combine skills from two teams.

Team A:
Coding + UI

Team B:
AI + Presentation

       ↓

Child:
Coding + AI + UI + Presentation

Mutation

Someone learns a new skill unexpectedly.

New generation

Better teams appear.

Repeat

Keep improving.

That is Genetic Algorithm.


---

75. Final Cheat Sheet

If you remember only this before entering the exam:

GENETIC ALGORITHM
        ↓
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
Termination

And:

GENE
  ↓
CHROMOSOME
  ↓
POPULATION

Selection:

Roulette → probability
SUS → multiple points
Ranking → rank
Tournament → K individuals
Truncation → top %

Crossover:

Single Point → 1 point
Two Point → 2 points
Multi Point → many points
Uniform → individual bits
Half Uniform → different bits
Mask → mask
Shuffle → shuffle
Three Parent → 3 parents
Arithmetic → mathematical combination
Linear → linear combination
PMX → mapping
Cycle → cycles

Mutation:

Bit Flip → 0 ↔ 1
Random Reset → new allowed value
Swap → exchange
Scramble → shuffle
Inversion → reverse

Encoding:

Binary → 0/1
Value → direct values
Permutation → order
Tree → tree

And the golden sentence:

> Selection chooses the parents, crossover combines their information, mutation introduces variation, and fitness tells us how good the solutions are.


