#include <stdio.h>

int main() {
	int T, i = 0;
	scanf("%d", &T);
	int m[T], n[T];
	while (i < T) {
		scanf("%d %d", &m[i], &n[i]);
		i++;
	}

	int j = 100;
	i = 0;
	int a, b, c;
	int x = 0;
	while (i < T) {

		while (j < 1000) {
			a = j % 10;
			b = (j / 10) % 10;
			c = (j / 100) % 10;
			if ((j == a * a * a + b * b * b + c * c * c ) && j >= m[i] && j <= n[i]) {
				printf("%d ", j);
				x = 1;
			}

			j++;

		}
		if (x == 0)
			printf("%d ", -1);
		i++;
		printf("\n");
		x = 0;
		j = 100;
	}
	return 0;
}

