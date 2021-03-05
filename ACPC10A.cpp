#include <stdio.h>

int main(void)
{
	int n_a, n_b, n_c;
	scanf("%d %d %d", &n_a, &n_b, &n_c);

	while(n_a || n_b || n_c){

		if ((n_c - n_b) == (n_b - n_a))
		{
			printf("AP %d\n", n_c + (n_b - n_a));
		}else{
			printf("GP %d\n", (n_c * (n_b / n_a)));
		}

		scanf("%d %d %d", &n_a, &n_b, &n_c);
	}
	return 0;
}