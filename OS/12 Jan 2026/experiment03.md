Below is **both the solution and the C program**, step by step.

---

## Given

* **Number of processes:** 4
* **Processes:** P1, P2, P3, P4
* **Arrival Time (AT):** 0 for all
* **Burst Time (BT):**

  * P1 = 2
  * P2 = 4
  * P3 = 1
  * P4 = 5
* **Scheduling Algorithm:** FCFS (First Come First Serve)

Since all arrival times are equal, **execution order = P1 → P2 → P3 → P4**

---

## Step 1: Gantt Chart

```
0    2      6      7        12
| P1 |  P2  |  P3  |   P4   |
```

---

## Step 2: Calculate Times

### Completion Time (CT)

* P1 = 2
* P2 = 6
* P3 = 7
* P4 = 12

### Turnaround Time (TT = CT − AT)

(AT = 0 for all)

* P1 = 2
* P2 = 6
* P3 = 7
* P4 = 12

### Waiting Time (WT = TT − BT)

* P1 = 2 − 2 = **0**
* P2 = 6 − 4 = **2**
* P3 = 7 − 1 = **6**
* P4 = 12 − 5 = **7**

---

## Step 3: Averages

### Average Turnaround Time (ATT)

[
(2 + 6 + 7 + 12) / 4 = 27 / 4 = \mathbf{6.75}
]

### Average Waiting Time (AWT)

[
(0 + 2 + 6 + 7) / 4 = 15 / 4 = \mathbf{3.75}
]

---

## Final Table

| Process | AT | BT | CT | TT | WT |
| ------- | -- | -- | -- | -- | -- |
| P1      | 0  | 2  | 2  | 2  | 0  |
| P2      | 0  | 4  | 6  | 6  | 2  |
| P3      | 0  | 1  | 7  | 7  | 6  |
| P4      | 0  | 5  | 12 | 12 | 7  |

---

## C Program (FCFS Scheduling)

```c
#include <stdio.h>

int main() {
    int n = 4;
    int at[4] = {0, 0, 0, 0};
    int bt[4] = {2, 4, 1, 5};
    int ct[4], tt[4], wt[4];
    float att = 0, awt = 0;

    // Completion Time
    ct[0] = bt[0];
    for (int i = 1; i < n; i++) {
        ct[i] = ct[i - 1] + bt[i];
    }

    // Turnaround Time and Waiting Time
    for (int i = 0; i < n; i++) {
        tt[i] = ct[i] - at[i];
        wt[i] = tt[i] - bt[i];
        att += tt[i];
        awt += wt[i];
    }

    att /= n;
    awt /= n;

    // Output
    printf("Process\tAT\tBT\tCT\tTT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               i + 1, at[i], bt[i], ct[i], tt[i], wt[i]);
    }

    printf("\nAverage Turnaround Time = %.2f", att);
    printf("\nAverage Waiting Time = %.2f\n", awt);

    return 0;
}
```

---

If you want, I can also:

* Add **user input version**
* Convert it to **Round Robin / SJF / Priority**
* Explain this in **exam-writing format** 📘
