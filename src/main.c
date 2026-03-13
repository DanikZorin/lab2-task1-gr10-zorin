/* main.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/task.h"
void main (int argc, char *args[]){
        int n;
        if (argc == 2){
                n = atoi(args[1]);
        }
        else{
                n = argc-1;
        }
        
        int a[n];
        if (argc == 2){
                srand(time(0));
                for (int i=0;i<n;i++){
                        a[i] = rand()%10;
                }
        }
        else{
                for (int i=1;i<argc;i++){
                        a[i-1] = atoi(args[i]);
                }
        }
        printf("Array:\n");
        for (int i=0;i<n;i++){
                printf("%d ",a[i]);
        }
        printf("\n");
        task1(n,a);
}
