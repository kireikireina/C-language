#include <stdio.h>
main(){
	int i,j;
	int n=5;
	
	for (i=1;i<=n;i++){
		//cetak bangun ke-1 --> " "
		for (j=1; j<=i-1;j++){
			printf(" ");
		}
		
		// cetak bangun ke-2 --> "*"
		// tengahnya bolong --> cetak spasi di tengah
		// kamu 2 kasus: cetak * jika j di tepi dan cetak spasi jika ditengah
		// if (j ditepi) then cetak * else cetak spasi
		// if (j ditepi) {cetak *} else {cetak spasi}
		// if (j ditepi) {printf("*");} else {printf(" ");}
		// if (i==1 || i==n || j=1 || j==n+1-i)
		for (j=1; j<=n+1-i;j++){
			if (i==1 || i==n || j==1 || j==n+1-i){
				printf("*");
			} else {
				printf(" ");
			}			
		}
		printf("\n");
	}
	
	//contoh yang tidak efisien karena perlu variabel yang banyak
	printf("\n");
	int k;		
	for (i=1;i<=n;i++){
		//cetak bangun ke-1
		for (j=1;j<=n-i;j++){
			printf(" ");
		}				
		//cetak bangun ke-2
		k = i-1;
		for (j=1;j<=i+k;j++){
			printf("*");
		}
		printf("\n");
	}
	
	//contoh tanpa menggunakan k
	printf("\n");
	for (i=1;i<=n;i++){
		//cetak bangun ke-1
		for (j=1;j<=n-i;j++){
			printf(" ");
		}				
		//cetak bangun ke-2
		for (j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	//latihan berikutnya
	int bil = 17;
	printf("Masukkan Bilangan:");
	scanf("%i", &bil);
	//cek apakah bil prima atau bukan
	//bilangan prima yang sisa bagi tidak sama dengan 0 selain 1 dan dirinya sendiri
	int isPrima = 1;
	for (i=2;i<=bil-1;i++){
		//jika ada 1 saja bil % i sisa bagi == 0 maka bukan prima
		if (bil%i==0) {
			isPrima=0;
		}
	}
	if (isPrima==1){
		printf("Bilangan Prima");
	} else {
		printf("Bukan Prima");
	}
	
	//latihan berikutnya
	//Bilangan Fibbonaci: 1 1 2 3 5 8 13 21 ...
	// Cetak n bilangan Fibonaci pertama 
	// Bilangan Fibonaci adalah bilangan hasil dari dua jumlah bilangan di depan nya. cetak sebanyak n kali
	// a=1, b=1, c=a+b
	printf("\n\n\nMasukkan Jumlah N:");
	scanf("%i", &n);
	printf("1 1 ");
	int a, b, c;
	a=1;
	b=1;
	for (i=1;i<=n-2;i++){
		//jumlah 2 bilangan sebelumnya
		c = a+b;
		printf("%i", c);
		//nilai a baru akan diganti nilai b
		a = b;
		//nilai b baru akan diganti nilai c
		b = c;		
		printf(" ");
	} 
	getchar();
}
