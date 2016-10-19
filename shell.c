/*
	Nerys Jimenez Pichardo
	The College of Saint Rose
	Spring 2016
	Operating System
	Lab 5: Knight Shell
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errnpo.h>

int main(int argc, char *argv[])
{
	char *command[100];
	char *params[10];
	int cmd_count = 0; //command count
	while(1)
	{
		char *username = getenv("USER");
		printf(%s@shell %d >", username, ++cmd_count)
		getline(&command, sizeof(command), stdin)
		//exit on Ctrl+D
		if(fgets(command, sizeof(command), stdin) == NULL)
		{
			break;
		}
		//exit
		if(strcmp(argv[1], "exit\n") == 0)
		{
			break;
		}
		//cd command
		if(strcmp(argv[1], "cd") == 0)
		{
			chdir(argv[2]);
		}
	}
	return 0;
}