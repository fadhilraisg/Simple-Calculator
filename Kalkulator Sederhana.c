#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {	
//	Tampilan program
	printf(KALKULATOR\n");
	printf("Operator yang tersedia : (+,-,*,/)\n");
	printf("Ketik x jika ingin keluar dari kalkulator\n\n");
	
	char ID1[1000], OP;
	int n, ID2, H=0, X;
	printf("Masukkan 2 angka beserta operatornya\n");
	scanf("%s", ID1); getchar();
	
//	Melakukan looping
	while(ID1[0] != 'x') {
		scanf("%c %d", &OP, &ID2);
		
		if(ID1[0] == 'n') {
			n = H;
		} else {
			n = atoi(ID1);
		}
	
			switch(OP) {
				case '+':
					H = n + ID2;
					printf("= %d\n", H);
					break;
				case '-':
					H = n - ID2;
					printf("= %d\n", H);
					break;
				case '*':
					H = n * ID2;
					printf("= %d\n", H);
					break;
				case '/':
					H = n / ID2;
					float Hfloat=H;
					printf("= %.2f\n", Hfloat);
					break;
			}
		printf("Masukkan 2 angka beserta operatornya\n");
		scanf("%s", ID1); getchar();
	}
	return 0;	
}
