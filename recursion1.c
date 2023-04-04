#include <stdio.h>


int fibonacciNumber(int n){
    int fibArray[n],i;
    fibArray[0] = 0, fibArray[1] = 1;
    for(i=0; i<n; i++)
        fibArray[i] = fibArray[i-1]+fibArray[i-2];
    return fibArray[n-1];
}

int main(int argc, char* argv){
    int n;
    printf("Which number in series do you want?");
    scanf("%d", &n);
    printf(fibonacciNumber(n));
    return 0;
}