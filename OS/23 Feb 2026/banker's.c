#include <stdio.h>
#include <stdbool.h>

#define P 5   // Number of processes
#define R 3   // Number of resource types

int main() {

    // Allocation Matrix
    int allocation[P][R] = {
        {0, 1, 0},  // P0
        {2, 0, 0},  // P1
        {3, 0, 2},  // P2
        {2, 1, 1},  // P3
        {0, 0, 2}   // P4
    };

    // Maximum Matrix
    int max[P][R] = {
        {7, 5, 3},  // P0
        {3, 2, 2},  // P1
        {9, 0, 2},  // P2
        {2, 2, 2},  // P3
        {4, 3, 3}   // P4
    };

    // Available Resources
    int available[R] = {3, 3, 2};

    int need[P][R];
    bool finish[P] = {false};
    int safeSequence[P];

    // Calculate Need Matrix = Max - Allocation
    for(int i = 0; i < P; i++) {
        for(int j = 0; j < R; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }

    int count = 0;

    while(count < P) {
        bool found = false;

        for(int i = 0; i < P; i++) {
            if(!finish[i]) {

                bool possible = true;

                for(int j = 0; j < R; j++) {
                    if(need[i][j] > available[j]) {
                        possible = false;
                        break;
                    }
                }

                if(possible) {
                    for(int j = 0; j < R; j++) {
                        available[j] += allocation[i][j];
                    }

                    safeSequence[count++] = i;
                    finish[i] = true;
                    found = true;
                }
            }
        }

        if(!found) {
            printf("System is NOT in a safe state.\n");
            return 0;
        }
    }

    printf("System is in a SAFE state.\nSafe sequence is: ");
    for(int i = 0; i < P; i++) {
        printf("P%d ", safeSequence[i]);
    }

    printf("\n");
    return 0;
}
