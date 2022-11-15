#include <stdio.h>
int main () {
    int A [50][50], B [50][50], C [50][50];
    int a, b, c, ordo;
    scanf ("%d", &ordo);
    printf("Matriks A\n");
    for (a=0;a<ordo;a++) {
        for (b=0;b<ordo;b++) {
            scanf("%d", &A [a][b]);}}
    printf ("Matriks B\n");
    for (a=0;a<ordo;a++) {
        for (b=0;b<ordo;b++) {
            scanf("%d", &B [a][b]);}}
    for (a=0;a<ordo;a++) {
        for (b=0;b<ordo;b++) {
            int jumlah=0;
            for (c=0;c<ordo;c++) {
                jumlah = jumlah + A [a][c]*B[c][b];}
            C[a][b]=jumlah;}}
    printf("Matriks AXB\n");
    for (a=0;a<ordo;a++) {
        for (b=0;b<ordo;b++) {
            printf("%d ", C [a][b]);}
        printf("\n");}
}