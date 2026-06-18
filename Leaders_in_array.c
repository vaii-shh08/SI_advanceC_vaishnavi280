// Leaders in array
#include <stdio.h>
int main() {
    int arr[6] = {16, 17, 4, 3, 5, 2};
    for(int i = 0; i < 6; i++) {
        int leader = 1;
        for(int j = i + 1; j < 6; j++) {
            if(arr[j] > arr[i]) {
                leader = 0;
                break;
            }
        }
        if(leader)
            printf("%d ", arr[i]);
    }
    return 0;
}