#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	    ssize_t bytes_written = write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	        if (bytes_written == -1)
			    {
				            perror("write");
					            return (EXIT_FAILURE);
						        }

		    return (1);
}

