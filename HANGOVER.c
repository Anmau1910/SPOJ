#include <stdio.h>

int main(void) {
	float addr, min;
	int i;

	scanf("%f", &min);
	while(min != 0.00) {
		i = 2;
		addr = 0.0;
		while(addr <= min){
			addr += (float) 1/i;
			i++;
		}
		printf("%d card(s)\n", i-1);
		scanf("%f\n", &min);
	}

	return 0;
}
