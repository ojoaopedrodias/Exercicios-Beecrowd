#include <stdio.h>
 
int main() {
	
	int x;
	int a, b, c, d, e, w, y, z, g, h, j, k, n, m;
	
	scanf("%d", &x);
	if (x > 0 && x < 1000000){
		
		a = x / 100;
		b = x % 100;
		c = b / 50;
		d = b % 50;
		e = d / 20;
		w = d % 20;
		y = w / 10;
		z = w % 10;
		g = z / 5;
		h = z % 5;
		j = h / 2;
		k = h % 2;
		n = k / 1;
		
		printf("%d nota(s) de R$ 100,00\n", a);
		printf("%d nota(s) de R$ 50,00\n", c);
		printf("%d nota(s) de R$ 20,00\n", e);
		printf("%d nota(s) de R$ 10,00\n", y);
		printf("%d nota(s) de R$ 5,00\n", g);
		printf("%d nota(s) de R$ 2,00\n", j);
		printf("%d nota(s) de R$ 1,00\n", n);
	}
	
    return 0;
}
