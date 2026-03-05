/* main.c */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void task1(int n,int *a){
        for (int i=0;i<n;i++){
                int sq = sqrt(a[i]);
                if (sq*sq == a[i]){
                        printf("%d\n",a[i]);
                }
        }
}
int main (int argc, char *args[]){
        if (argc < 2) {
            printf("Usage: %s <size>\n", args[0]);
            return 1;
        }
        int n = atoi(args[1]);
        int *a = malloc(n * sizeof(int));
        if (a == NULL) return 1;
        for (int i=0;i<n;i++){
                a[i] = rand()%10;
        }
        printf("Array: ");
        for (int i=0;i<n;i++){
                printf("%d ",a[i]);
        }
        printf("\nPerfect squares in array:\n");
        task1(n, a);
        free(a);
        return 0;
}
