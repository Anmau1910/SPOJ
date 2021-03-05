#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n_a, n_d, var;
	scanf("%d %d", &n_a, &n_d);

	while(n_a || n_d){

		vector <int> at;
		vector <int> de;
		for (int i = 0; i < n_a; i++){

			scanf("%d", &var);
			at.push_back(var);
		}
		for (int i = 0; i < n_d; i++){

			scanf("%d", &var);
			de.push_back(var);
		}

		sort(at.begin(), at.end());
		sort(de.begin(), de.end());

		if(de[1] <= at[0]){
			puts("N");
		}else{
			puts("Y");
		}

		scanf("%d %d", &n_a, &n_d);
	}
	return 0;
}