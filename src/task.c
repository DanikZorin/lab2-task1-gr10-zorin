#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "../include/task.h"
void task1(int n,int *a){
        int count = 0;
        for (int i=0;i<n;i++){
                int sq = sqrt(a[i]);
                if (sq*sq == a[i]){
                        if (count == 0)
                                printf("Perfect squares:\n");
                        printf("%d\n",a[i]);
                        count++;
                }
        }
        if (count == 0){
                printf("No perfect squares\n");
        }
}