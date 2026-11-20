
#include <stdio.h>

int main(void) {
    int N, i, j, sum = 0;
    int matrix[5][5];

    scanf("%d", &N);

    if (N < 3 || N > 5) {
        return 0;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 1; i < N; i++) {
        for (j = 0; j < i; j++) {
            sum += matrix[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}
