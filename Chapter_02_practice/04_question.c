#include <stdio.h>

int main() {
    // Explain step by step evalution of 3*x/y - z+k, where x = 2, y = 3, z =3, k=1

    // 3*2/y - z+k
    // 6/y - z+k
    // 6/3 - z+k
    // 2- z+k
    // 2-3+1
    // -1+1
    // 0

    
    int x,y,z,k;
    x = 2;
    y = 3;
    z = 3;
    k = 1;
    printf("%d", 3*x/y - z+k);

    return 0;
}