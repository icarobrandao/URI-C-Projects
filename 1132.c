#include <stdio.h>

int main(int argc, char **argv)
{
	int x, y, aux, i, sum = 0;
	scanf("%d", &x);
	scanf("%d", &y);
	if(x>y){
		aux = y;
		y = x;
		x = aux;
	}
	for(i = x ; i <= y ; i++){
		if(i%13!=0){
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return 0;
}

