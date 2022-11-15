#include <stdio.h>
#include <string.h>
int main () {
    char pw[99], ch[99];
    scanf("%[^\n]%*c", &pw);
    scanf(" %[^\n]%*c", &ch);
    int len1, len2, i, a=0, b=0;
    len1 = strlen(pw);
    len2 = strlen(ch);
    if (len1 != len2) {
        printf("Panjang kalimat berbeda, pesan palsu");
    } else { 
        for (i=0;i<len1;i++) {
            if (pw[i]==ch[i]) {
                printf("*");
                a++;
            } else {
                printf("#");
                b++;}}
        printf("\n* = %d", a);
        printf("\n# = %d", b);
    if (a>=b) {
        printf("\nPesan Asli");}
    else if (a<b) {
        printf("\nPesan Palsu");} }
return 0;}