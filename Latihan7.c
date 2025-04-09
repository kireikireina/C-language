#include <stdio.h>
main(){
	//1. while {}
	//2. for (){}
	
	int i = 1;
	int j = 1;
	int n = 5;
	
	/*for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			printf("%i", j);
			printf(" ");
		}
		printf("\n");
	}*/
	
	//i/j  123
	//  1  *** \n
	//  2  *** \n 
	//  3  *** \n
	
	for (i=1; i<=n; i++){
		//baris i mulai dari 1 sampai 3
		for (j=1;j<=n+1-i;j++){
			//kolom mencetak sebanyak n kali setiap i
			//printf("*");
			printf("%i", j);
		}		
		printf("\n");		
	}
	
	printf("\n");
	
	for (i=n; i>=1;i--){
		//printf("%i", i);
		//printf("\n");
		for (j=i;j>=1;j--){
			//printf("#");
			printf("%i", j);
		}
		printf("\n");
	}
	
	getchar();
}
