#include <stdio.h>

int n, m, i, j, k, a[101], ans;
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 0; i < n; i++) for (j = 0; j < n; j++) for (k = 0; k < n; k++)
        if (i != j && j != k && k != i) {
            int t = a[i] + a[j] + a[k];
            if (t <= m && ans < t) ans = t;
        }

    printf("%d", ans);

    return 0;
}