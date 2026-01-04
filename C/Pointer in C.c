#include <stdio.h>
#include <stdlib.h> 

void update(int *a, int *b) {
    int sum = *a + *b;        // calculate sum
    int diff = abs(*a - *b);  // calculate absolute difference
    *a = sum;                  // update value pointed by a
    *b = diff;                 // update value pointed by b
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
