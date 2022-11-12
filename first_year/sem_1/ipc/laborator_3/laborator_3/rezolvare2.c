#include<stdio.h>
#include<stdlib.h>

#define citire_afisare(mesaj,format,var) printf(mesaj); scanf(format,&var);
int main()
{
	//se citeste de la tast un nr intre 1 si 12, in functie de nuumar se citeste o luna din an, 
	//la citirea unei luni sa imi afiseze cate zile are luna
	int luna;
	printf("Introduceti luna dorita intre 1 si 12 :");
	scanf("%d", &luna);
	switch (luna)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("Luna are 31 de zile\n");
		break;
	case 2:
		printf("Luna are 28 sau 29 de zile\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("Luna are 30 de zile\n");
		break;
	default:
		printf("Nu exista asa luna");
		break;
	}
	return 0;
}