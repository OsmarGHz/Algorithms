#include <bits/stdc++.h>

void increment(int *v) {
    (*v)++;
}

void update(int * a, int * b){
    int aCopy = *a, bCopy = *b;
    *a = aCopy+bCopy;
    *b = abs(aCopy-bCopy);
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    update(&a,&b);
    printf("%d\n%d", a,b);
    return 0;
} 