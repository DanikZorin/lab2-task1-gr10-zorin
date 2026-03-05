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
void main (int argc, char *args[]){
        int n = atoi(args[1]);
        int a[n];
        for (int i=0;i<n;i++){
                a[i] = rand()%10;
        }
        printf("Array:\n");
        for (int i=0;i<n;i++){
                printf("%d ",a[i]);
        }
}
