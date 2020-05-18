#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i;
    int number[5];
    int temp;
    int sum=0;
    int n;
    scanf("%d", &n);
    while(n>0){

        temp = n%10;

        sum= sum+temp;
        n = n/10;

    }
    printf("%d", sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}

