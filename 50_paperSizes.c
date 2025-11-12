#include <stdio.h>

// The paper of size A0 has dimensions 1189 mm x 841 mm.
// Therefore, each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides.

void paperSizes(int n, int l, int b) {
    if (n == 0) {
        printf("%d,%d", l, b);
        return;
    }
    printf("%d,%d", l, b);
    paperSizes(n - 1, b, l / 2);
}