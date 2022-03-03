#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char *concat;

	        concat = string_nconcat("Best ", "School !!!", 6);
		    printf("%s\n", concat);
		        free(concat);
			concat = string_nconcat(NULL, "School !!!", 6);
			                    printf("%s\n", concat);
					                            free(concat);
								    concat = string_nconcat("Best ", "School !!!", 116);
								                        printf("%s\n", concat);
											                        free(concat);
														concat = string_nconcat("Best ", NULL, 4);
														                    printf("%s\n", concat);
																                            free(concat);

			concat = string_nconcat(NULL, NULL, 6);
			                    printf("%s\n", concat);
					                            free(concat);

								    concat = string_nconcat("Best ", "School !!!", 0);
								                        printf("%s\n", concat);
											                        free(concat);
			concat = string_nconcat("Best ", "School !!!", 'a');
			                    printf("%s\n", concat);
					                            free(concat);

			    return (0);
}
