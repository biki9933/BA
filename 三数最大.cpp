#include <stdio.h>
int main() {
	int a,b,c,d,f,n,i;
	float e;
	scanf("%d",&n);
	for (i = n;i > 0; i--)
		scanf("%d %d %d %d",&a,&b,&c,&d),e=(b+c+d)/3;
	for (i = n;i > 0; i--)
		printf("%.2f\n",e);
	return 0;
}
