#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void update(int *a,int *b) {
    // Complete this function
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);

    printf("%d\n", a+b);

    printf("%d", abs(a-b));

;    return 0;
}

