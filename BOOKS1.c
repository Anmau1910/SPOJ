#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned long t_cases, n_lib, n_imp, lower, upper, cont, acum, min, aux;
	unsigned long cota = 0;
	unsigned long max = 0;
	int *array, *divs = NULL, bolya;

	scanf("%ld", &t_cases);
	for (int i = 0; i < (long) t_cases; ++i)
	{
		scanf("%ld %ld", &n_lib, &n_imp);
		array = malloc(sizeof(int)*n_lib);
		min = 10000000;

		for (int j = 0; j < (long) n_lib; ++j){

			scanf("%d", &array[j]);
			cota += array[j];

			if ((unsigned long) array[j] > max)
				max = array[j];

			if (min > (unsigned long) array[j])
				min = array[j];
			
		}

		if (n_lib == n_imp)
		{
			for(unsigned int j = 0; j < n_lib - 1; ++j)
				printf("%d / ", array[j]);
			
			printf("%d\n", array[n_lib-1]);

		} else {
			bolya = 0;
			lower = max;
			upper = aux = cota;



			while(upper > lower) {
				cota = (lower + upper) / 2;
				cont = acum = 0;
				if(divs) free(divs);
				divs = calloc(sizeof(int), n_lib);

				for (int j = 0; j < (long) n_lib; ++j)
				{
					acum += array[j];
					if (acum > cota)
					{
						acum = array[j];
						cont++;

						if (cont > n_imp -1) {
							//bolya = 1;
							lower = cota + 1;
							break;
						}

						divs[j-1] = 1;
					}
				}
				if (cont < n_imp){
					upper = cota;
					if(aux > cota){
						aux = cota;
					}
				}
				
			} 

			cota = aux;
			//printf("%ld\n", cota);
			
			if(cont == n_imp) cont--;
			acum = 0;

			for(int j = n_lib - 1; j >= 0; j--) {
				
				acum += array[j];

				if ((divs[j]) && (cont > (n_imp -1)))
				{
					divs[j] = 0;
					cont--;
				}
				if (!j && cont == (n_imp-1))
				{
					break;
				}

				if (divs[j] && (acum < cota) && (j >= (long) (n_imp - cont - 1)))
				{
					divs[j] = 0;
					cont--;
				}
				if (!divs[j] && (j <= (long)(n_imp - cont - 1)))
				{
					divs[j] = 1;
					cont++;
				}

				else if (acum > cota && !divs[j])
				{
					acum = array[j];
					divs[j] = 1;
					cont++;
				}
				if (divs[j] && cota < acum)
					acum = array[j];	
			}
		

			for (unsigned int j = 0; j < n_lib-1; ++j)
			{
				printf("%d ", array[j]);

				if (divs[j])
				{
					printf("/ ");
				}
			}
			printf("%d\n", array[n_lib-1]);
			
			cota = 0;
			max = 0;
			if(divs) {
				free(divs);
				divs = NULL;
			}
			if(array) free(array);
		}
	}
}