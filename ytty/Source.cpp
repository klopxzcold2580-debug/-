#include <stdio.h>
#include <stdlib.h>
int two(int n, int f);
int main() {
	int n;
	scanf_s("%d", &n);
	int f = n;
	two(n, f);
 }
int  two(int n , int f) {
	for (int d = 0; n >= d; d++, n--) {
		if (d + n == f) {
			printf("%d + %d \n", d, n);
		}
		else {
			two(n , f);
		}
	}
	return 1;
 }
