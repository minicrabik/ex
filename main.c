#include "task/task.c"
#include "data_structures/string/string_.h"
#include "data_structures/matrix/matrix.c"

#include <assert.h>

void test_find_non_unique_numbers() {
    // Тест 1: Пустой массив
    {
        int n = 0;
        find_non_unique_numbers(n);
        assert(1); // Нет вывода, потому что массив пуст
    }

    // Тест 2: Массив с уникальными числами
    {
        int n = 5;
        int nums[] = {1, 2, 3, 4, 5};
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
        find_non_unique_numbers(n);
        assert(1); // Нет вывода, потому что все числа уникальны
    }

    // Тест 3: Массив с неуникальными числами
    {
        int n = 5;
        int nums[] = {1, 2, 1, 3, 2};
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
        find_non_unique_numbers(n);
        assert(strcmp("1 appears 2 times\n2 appears 2 times\n", output) == 0);
    }

    // Тест 4: Массив с одним неуникальным числом
    {
        int n = 5;
        int nums[] = {1, 2, 3, 4, 4};
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
        find_non_unique_numbers(n);
        assert(strcmp("4 appears 2 times\n", output) == 0);
    }

    // Тест 5: Массив с несколькими неуникальными числами
    {
        int n = 7;
        int nums[] = {1, 2, 1, 3, 2, 3, 4};
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
        find_non_unique_numbers(n);
        assert(strcmp("1 appears 2 times\n2 appears 2 times\n3 appears 2 times\n", output) == 0);
    }
}

int main() {
    test_find_non_unique_numbers();
    return 0;
}