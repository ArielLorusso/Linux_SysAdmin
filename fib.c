
// Calculate Fibonacci Numbers   // Public Domain

#include <stdio.h>				//  c standard libs
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <time.h>
#include <gmp.h>			 /*//*  sudo apt install libgmp-dev
// export C_INCLUDE_PATH=/usr/include/gmp		//  echo $C_INCLUDE_PATH	// locate gmp.h
//*  gcc fib.c -o fib -lgmp
=========================================================================================*/

long limit, i = 0;

int main(int argc, char *argv[])
{
	// Get User Input 
	if (argc != 2)
	{
		printf("Improper input. Exiting.\n");
		return -1; 
	}

	limit = strtol(argv[1], NULL, 10); // Srt to Long Base 10
									   //   2 8 10 or 16

	// Setup GMP 
	mpz_t a, b, c;
	mpz_init_set_ui(a, 1);
    mpz_init_set_ui(b, 0);
   	mpz_init(c);

    // Start timing 
    clock_t start_time = clock();

   	for (i = 0; i < limit; i++) // LOOP
   	{
   		// Perform the Fibonacci Calculation
   		mpz_add(c, a, b);	//	c = b + a
   		mpz_set(a, b);		//	a = b
   		mpz_set(b, c);		//	b = c
   	}

    // End timing 
    clock_t end_time = clock(); 

	// Print the results to stdout
   	printf("Fibonacci Number %ld: ", i);
   	mpz_out_str(stdout, 10, b);
   	printf("\n");

	// Cleanup
   	mpz_clear(a);
   	mpz_clear(b);
   	mpz_clear(c);

    // Print time taaken 
    double time_taken = ((double) end_time - start_time)  / CLOCKS_PER_SEC;
    printf("Calculation Time: %f seconds\n", time_taken);
	
	
	return 0;
}


/*		

Fib(N) = 1.618 ^ N  Aprox

https://www.mpfr.org/	//!  LARGE  FLOAT

https://gmplib.org/     //*	 LARGE	INTEGER
	
	ZIP_FILE : gmp-6.3.0.tar.xz   * @param	Download Sourcefiles

	gmp.h	gmp-h.in	mini-gmp.c //*	interesting files to read :	

//*	Manual :				https://gmplib.org/manual/Integer-Functions
							https://home.cs.colorado.edu/~srirams/courses/csci2824-spr14/gmpTutorial.html


?   Recursive   "gmpz_add" :
		grep -r -n -e'gmpz_add' < path_to..gmp-6.3.0 >
?   Every ".h" :
		tree < path_to..gmp-6.3.0 > | grep -n -e'\.h$'
?   Every ".c" :
 		tree < path_to..gmp-6.3.0 > | grep -n -e'.*\.c$'
?   "?_gmp_?_.c" :
 		tree < path_to..gmp-6.3.0 > | grep -n -e'gmp.*\.c$'

/media/ariel/160GB_Miguel_DIC_2023/BOOKS__2/gmp_BIG_NUM_C/

*/