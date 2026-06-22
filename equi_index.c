#include <stdio.h>

int main() {
    int a[5] = {9, 0, 3, 4, 5};
    int sumL, sumR;
    int found = 0;

    for(int i = 1; i < 4; i++) {
        sumL = 0;
        sumR = 0;
        for(int j = i - 1; j >= 0; j--) {
            sumL += a[j];
        }
        for(int k = i + 1; k < 5; k++) {
            sumR += a[k];
        }

        if(sumL == sumR) {
            printf("Equilibrium index = %d\n", i);
            found = 1;
        }
    }

    if(!found)
        printf("No Equilibrium Index");

    return 0;
}