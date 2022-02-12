#include<stdio.h>
#include<string.h>

void EchoInput(char *userINput){

	char buffer[20];
	strcpy(buffer, userINput);
	printf("\n\n%s\n\n", buffer);
}

int main(int argc, char **argv){
	EchoInput(argv[1]);
	return 0;
}