#include <stdio.h>
int main () {
    int x, i, a=1;
    scanf ("%d", &x);
    int bilangan[x];
    for (i=0;i<x;i++) {
        scanf("%d", &bilangan[i]); }
    for (i=0;i<x;i++) {
        printf("%d ", bilangan[i]*a); 
        a++;}
    return 0;
}