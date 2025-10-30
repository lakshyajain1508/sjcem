
# **2-Mark Answers**

**Q1. What is meant by Computer Organization?**

* It describes how hardware components of a computer system are connected and work together.
* Focuses on the internal structure of CPU, memory, ALU, and control signals.

---

**Q2. What are the performance measures of computer architecture?**

* **Speed:** Clock rate or instruction execution rate.
* **Throughput:** Number of instructions completed per unit time.
* **Efficiency:** How effectively hardware resources are used.

---

**Q3. Explain string instruction set.**

* Used to handle **a series of bytes or words** stored in memory.
* Examples: `MOVS`, `CMPS`, `SCAS`, `LODS`, `STOS` perform operations on strings automatically.

---

**Q4. Explain implied addressing mode.**

* Operand is **implied by the instruction** itself, not mentioned explicitly.
* Example: `CLC` (Clear Carry Flag) — no operand is written; it’s understood by default.

---

**Q5. Explain instruction format.**

* Defines how an instruction is **structured** inside memory.
* Contains **Opcode**, **Operands**, and **Addressing Mode** fields.

---

**Q6. What is instruction cycle?**

* Sequence of steps by which a CPU executes an instruction.
* Steps: **Fetch → Decode → Execute → Store (if needed).**

---

**Q7. Define Control Unit.**

* It controls the **operation of CPU** and the flow of data within the processor.
* It generates control signals for instruction execution.

---

**Q8. What are microinstructions?**

* Small control signals that direct internal CPU operations.
* Stored in control memory and form part of **microprogrammed control unit**.

---

**Q9. Define Port pins of 8086.**

* 8086 has **20 address lines (A0–A19)** and **16 data lines (D0–D15)**.
* Certain pins are multiplexed (used for both address and data).

---

**Q10. Define the memory banks of 8086.**

* 8086 uses **two memory banks** (even and odd).
* Allows **16-bit (2-byte)** data transfer in one cycle.

---

**Q11. What is the role of ALE in timing diagram?**

* ALE = **Address Latch Enable**.
* It separates the address from multiplexed address/data bus during the first T-state of a cycle.

---

**Q12. Define pins/signals used in Maximum Mode.**

* Used when **multiple processors** share the bus.
* Important signals: **RQ/GT**, **S2–S0**, **LOCK**, and **QS0–QS1**.

---

**Q13. List the control signals necessary for interfacing memory with 8086.**

* **MEMR’** – Memory Read
* **MEMW’** – Memory Write
* **RD’, WR’, ALE** are used to synchronize the read/write cycle.

---

**Q14. Define the CWR value to set Port A as input and Port B as output of Port C in 8255 PPI.**

* Control Word = **82H**.
* This sets Port A → Input, Port B → Output, and configures Port C bits accordingly.

---

**Q15. How are DRQ and DMA utilized in DMAC operation?**

* **DRQ (DMA Request):** Sent by peripheral to request data transfer.
* **DMA controller** uses it to gain control of buses and transfer data directly.

---

**Q16. What is the function of Priority Resolver in 8259?**

* Determines **which interrupt** has the highest priority.
* Sends that interrupt to the CPU for servicing.

---

**Q17. What are Control Registers?**

* Special CPU registers that **control operating modes** of the processor.
* Example: CR0–CR3 in 80386 control memory management and protection.

---

**Q18. What is Branch Prediction?**

* Technique to **guess the outcome** of a conditional branch before it is known.
* Improves instruction pipeline efficiency and reduces delay.

---

**Q19. Draw privilege levels of tasks in 8086 architecture.**

* 4 levels: **PL0 (Highest, Kernel)** → **PL3 (Lowest, User)**.
* Used for protection — lower levels cannot access higher-level data directly.

---

**Q20. What is Parallel Integer Execution?**

* Multiple integer operations executed **simultaneously** using multiple pipelines.
* Improves processing speed and throughput.

---

**Q21. What is a primary characteristic of the NetBurst microarchitecture?**

* Very **long instruction pipeline** allowing high clock speeds.
* Used in Intel Pentium 4 processors for faster execution.

---

**Q22. Which microarchitecture is used in Pentium 4 processors? Explain shortly.**

* **NetBurst Microarchitecture**.
* Designed for high performance with features like deep pipeline and hyper-threading.

---

**Q23. How does the NetBurst microarchitecture achieve high clock speeds?**

* By using a **20-stage pipeline** and efficient branch prediction.
* Allows more instructions to be processed per second.

---

**Q24. What is Hyper-Threading Technology?**

* Enables one physical core to work as **two logical processors**.
* Improves performance in multitasking and parallel workloads.

---
