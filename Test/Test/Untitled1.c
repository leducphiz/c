#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[]) {
    int n;
     scanf ("%d",&n);
    int a[n];
    int i,j;
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    for (i=0; i< n; i++) {
        int count = e;
        for (j=0; j<n; j++) {
            if(a[i] == a[j]) {
                count++;
        if(count == 1) {
            printf("%d ", a[i]);
    return 0;
