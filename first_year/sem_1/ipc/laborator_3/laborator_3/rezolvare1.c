#include <stdio.h>
#include <stdlib.h>
#define citire(x) scanf("%d", &x);

int main()
{
	//sa se afiseze max dintre 2 nr a si b de la tastatura, pentru calcularea maximului
	//se vor folosi 2 variante: prima cu if, a doua operatoru conditional
	/*int a, b, m;
	enum optiune{varianta_if=1,varianta_oc}opt;
	printf("Introduceti a: "); citire(a);
	printf("Introduceti b: "); citire(b);
	m = (a > b) ? a : b;
	printf("1.Calcul max cu if\n");
	printf("2.Calcul max cu op.cond.\n");
	printf("Introduceti optiunea: "); citire(opt);
	switch (opt)
	{
	case varianta_if:
		if (a > b)
			printf("Maximul este: %d\n", a);
		else
			printf("Maximul este: %d\n", b);
		break;
	case varianta_oc:
		printf("Maximul este: %d\n", m);
		break;
	default:printf("Optiune incorenta");
		break;
	}*/
	/*switch (opt)
	{
	case 1:
		if (a > b)
			printf("Valoarea %d este mai mare ca %d\n", a, b);
		else
			printf("Valoarea %d este mai mare ca %d\n", b, a);
		break;
	case 2:
		printf("Maximul dintre cele doua numere este: %d", m);
		break;
	default:printf("Optiune incorenta");
		break;
	}*/
	//prin case-uri aratam adunarea, scaderea, inmultirea, impartirea a doua numere
	/*int a, b, rap;
	rap = (float)a / b;
	enum optiune{adunare=1,scadere,inmultire,raport}opt;
	printf("Introduceti a: "); citire(a);
	printf("Introduceti b: "); citire(b);
	printf("1.Adunare\n");
	printf("2.Scadere\n");
	printf("3.Inmultire\n");
	printf("4.Raport\n");
	printf("Dati optiunea : "); citire(opt);
	switch (opt)
	{
	case adunare:
		printf("Rezultatul va fi : %d\n", a + b);
		break;
	case scadere:
		printf("Rezultatul va fi : %d\n", a - b);
		break;
	case inmultire:
		printf("Rezultatul va fi : %d\n", a * b);
		break;
	case raport:
		if (b != 0)
			printf("Rezultatul va fi : %d\n", rap);
		else
			printf("Nu se poate face impartirea la 0\n");
		break;
	default:printf("Optiune incorenta\n");
		break;
	}
	return 0;*/
}