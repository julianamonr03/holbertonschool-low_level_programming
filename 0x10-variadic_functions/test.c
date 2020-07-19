#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main ()
{
    char buf[100];

    write(1, "Hola ", strlen(buf)); 
	write(1, "Hola ", strlen(buf)); 
 	write(1, "Hola ", strlen(buf)); 
	write(1, "\n", strlen(buf)); 
    return 0;
}