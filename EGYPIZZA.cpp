#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	string a;
	int n_per, n_uc, n_um, n_tc, extra;
	n_uc = n_um = n_tc = extra = 0;

	scanf("%d", &n_per);

	while(n_per--){
		cin >> a;
		if (a == "1/4")
		{
			n_uc++;
		}else if(a == "1/2")
		{
			n_um++;
		}else if(a == "3/4"){
			n_tc++;
		}
	}

	if(!n_uc){
		printf("%d\n",((n_um/2 + n_um%2) +n_tc + 1));
		return 0;
	}
	if (n_tc > n_uc)
	{
		n_uc = 0;
	}
	else
	{
		n_uc -= n_tc;
	}

	if (n_um % 2)
	{
		n_uc = (n_uc < n_um) ? 0 : (n_uc < 2 ? 1 : n_uc - 2);
	}

	printf("%d\n", ((n_uc / 4 + (n_uc % 4 != 0)) +
		             n_um / 2 + (n_um % 2)
		             + n_tc + 1));

	return 0;
}