#include<stdio.h>
int hammingWeight(uint32_t n) {
    int i, count=0;
    uint32_t mask = 0b00000000000000000000000000000001;
    for( i=0; i<32; i++ ){
        if(n & mask){
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main(void) {
    // be careful about binary declaration in GCC (0b)
    uint32_t input = 0b10000000000000000000000111111111;
    printf("output: %d\n", hammingWeight(input));
    return 0;
}
