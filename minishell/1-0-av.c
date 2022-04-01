#include <stdio.h>

int main(int argc, char **argv)
{
    for (int i = 0; argv[i] != NULL; i++)
    {
		printf("Argument: [%s]\n", argv[i]); 
    }
}
