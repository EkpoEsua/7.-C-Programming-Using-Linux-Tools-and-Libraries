#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int num;
	double price;
	
	if (argc == 3){
		num = atoi(argv[1]);
		price = atof(argv[2]);
		
		printf("%02d plants for %.2lf dollars each cost %.2lf dollars.", num, price, num*price);
		
	}
	else printf("Invalid input, duh!.");
	
	return 0;
}
