#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void find_non_unique_numbers(int n) {
    int *nums = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    qsort(nums, n, sizeof(int), compare);

    int count = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            if (count > 1) {
                printf("%d appears %d times\n", nums[i - 1], count);
            }
            count = 1;
        }
    }

    if (count > 1) {
        printf("%d appears %d times\n", nums[n - 1], count);
    }

    free(nums);
}



int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    find_non_unique_numbers(n);
    return 0;
}
