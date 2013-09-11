#include<stdio.h>
int main() {
    int cases;
	unsigned int a;
    scanf("%d", &cases);
    while(cases--) {
        scanf("%u", &a);
        printf("%u\n", ((a&255)<<24)+(((a>>8)&255)<<16)+(((a>>16)&255)<<8)+((a>>24)&255));
    }
}
