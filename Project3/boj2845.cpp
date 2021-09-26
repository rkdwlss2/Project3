#include <cstdio>

int l, p, x;

int main() {
    scanf("%d %d", &l, &p);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &x);
        printf("%d ", x - l * p);
    }
    return 0;
}
