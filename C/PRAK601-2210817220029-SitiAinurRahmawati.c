#include <stdio.h>
int main () {
    int x, y, i, c;
    scanf ("%d %d", &x, &y);
    int bilangan[x][y];
    for (i=0;i<x;i++) {
        for (c=0;c<y;c++) {
            scanf("%d", &bilangan[i][c]); }}
    for (i=0;i<x;i++) {
        for (c=0;c<y;c++) {
            printf("%d ", bilangan[i][c]); }
        printf("\n");}
    return 0;
}