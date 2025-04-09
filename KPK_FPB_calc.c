#include <stdio.h>

int main()

{
int n, i, j, b, c;
i = 1;
j = 1;
b = 1;
c = 1;

printf("2.a. Masukkan nilai n = ");scanf("%d", &n);

for (i=1; i<=n; i++){
    for (j=1;j<=(n-1)+1;j++){
            if (i==n || j==1 || j==n-1+i){
				printf("%i", i);
			} else {
				printf("%i", j);
			}
    }
    printf("\n");
}
printf("\n");printf("\n");

printf("2.b. Masukkan nilai n = ");scanf("%d", &n);
for (i=1;i<=n;i++){
    b = (b*2)+1;
    printf("%d,", b);
    printf(" ");
}
printf("...");

printf("\n");printf("\n");

printf("2.c. Masukkan nilai n = ");scanf("%d", &n);
for (i=1;i<=n;i++){
    c = (c+1)+c;
    printf("%d,", c);
    printf(" ");
}
printf("...");

printf("\n");printf("\n");


    int menu, bil1, bil2, kpk, sisa, a, d;
    printf("3.\n");
    printf("--------------------\n");
    printf("       Menu \n");printf("--------------------\n");
    printf("      1. FPB\n");printf("      2. KPK\n");printf("      3. Keluar\n");
    printf("--------------------\n");
    printf("Masukkan Pilihan Menu : ");scanf("%d", &menu);printf("\n");

    if (menu == 1)
    {
        printf("Masukkan Bilangan Pertama : ");scanf("%d", &bil1);
        printf("Masukkan Bilangan Kedua : ");scanf("%d", &bil2);printf("\n");

        if (bil1 > bil2){
            a = bil1;
            d = bil2;
        }
        else {
            a = bil2;
            d = bil1;
        }
        sisa = a%d;
        while (sisa != 0){
            a = d;
            d = sisa;
            sisa = a%d;
        }
        printf("FPB dari %d dan %d = %d", bil1, bil2, d);
    }

        else if (menu == 2){
        printf("Masukkan Bilangan Pertama : ");scanf("%d", &bil1);
        printf("Masukkan Bilangan Kedua : ");scanf("%d", &bil2);printf("\n");

        if (bil1 > bil2){
            a = bil1;
            d = bil2;
        }
        else {
            a = bil2;
            d = bil1;
        }
        sisa = a%d;
        while (sisa != 0){
            a = d;
            d = sisa;
            sisa = a%d;
        }
        kpk = bil1*bil2/d;
        printf("KPK dari %d dan %d = %d", bil1, bil2, kpk);
    }

        else{
            system("cls");
            printf("UTS DDP - 672021227");
    }
    getchar();
    return 0;
}


