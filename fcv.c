
#include <stdio.h>

int main() {
    int N, i, j, sum = 0;
    int a[5][5];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < i; j++) {
            sum += a[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}
