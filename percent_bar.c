#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {
	double percent = atof(argv[1]);
	int bar_level = (int) ((percent/10)+0.5);
	char bar[13];
	bar[0] = '|';
	bar[bar_level + 1] = '|';
	bar[12] = '|'; 
	for (int i = 1; i < bar_level + 1; i++) {
		bar[i] = '=';
	}
	for (int i = bar_level + 2; i < 12; i++) {
		bar[i] = '-';
	}
	printf("%s\n", bar);
}
