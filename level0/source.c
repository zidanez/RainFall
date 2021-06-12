#include <stdlib.h>

int main(int argc, char **argv)
{
	if (atoi(argv[1]]) == 423)
		system("/bin/bash");
	else
		write(1, "No!", 3);
	return(0);
}