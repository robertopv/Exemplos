#include <stdio.h>
#include <stdlib.h>

void teste1(int m, int n, float t1[m][n]) {
    for (int i = 0; i < 8; i++) printf("%f\t", t1[i % 4 ][i / 4]);
}
int main() {
    float t1[4][2];
    for (int i = 0; i < 8; i++) t1[i % 4][i / 4] = i + 1;
    teste1(4, 2, t1);
    getchar();
}

//https://pt.stackoverflow.com/q/43948/101
