#include <stdio.h>
int main () {
    int x, y, i, hasil;
    scanf ("%d %d", &x, &y);
    if (x != y) {
        printf("Jumlah tidak sama");
        return 0;}
    int bilangan[x];
    int bilangan2[y];
    for (i=0;i<x;i++) {
        scanf("%d", &bilangan[i]); }
    for (i=0;i<y;i++) {
        scanf("%d", &bilangan2[i]); }
    for (i=0;i<x;i++) {
        hasil=bilangan[i] * bilangan2[i];
        printf("%d ", hasil);}
    return 0;
}