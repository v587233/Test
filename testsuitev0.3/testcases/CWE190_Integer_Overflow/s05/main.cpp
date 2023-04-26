/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE190_Integer_Overflow__short_rand_square_01_good();");
	CWE190_Integer_Overflow__short_rand_square_01_good();


	printLine("Calling CWE190_Integer_Overflow__short_rand_square_22_good();");
	CWE190_Integer_Overflow__short_rand_square_22_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_add_01_good();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_add_01_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_add_22_good();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_add_22_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_01_good();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_01_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_22_good();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_22_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_square_01_good();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_square_01_good();

	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_square_22_good();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_square_22_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_add_01_good();");
	CWE190_Integer_Overflow__unsigned_int_max_add_01_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_add_22_good();");
	CWE190_Integer_Overflow__unsigned_int_max_add_22_good();

	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_multiply_01_good();");
	CWE190_Integer_Overflow__unsigned_int_max_multiply_01_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_multiply_22_good();");
	CWE190_Integer_Overflow__unsigned_int_max_multiply_22_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_square_01_good();");
	CWE190_Integer_Overflow__unsigned_int_max_square_01_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_square_22_good();");
	CWE190_Integer_Overflow__unsigned_int_max_square_22_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_add_01_good();");
	CWE190_Integer_Overflow__unsigned_int_rand_add_01_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_add_22_good();");
	CWE190_Integer_Overflow__unsigned_int_rand_add_22_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_multiply_01_good();");
	CWE190_Integer_Overflow__unsigned_int_rand_multiply_01_good();

	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_multiply_22_good();");
	CWE190_Integer_Overflow__unsigned_int_rand_multiply_22_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_square_01_good();");
	CWE190_Integer_Overflow__unsigned_int_rand_square_01_good();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_square_22_good();");
	CWE190_Integer_Overflow__unsigned_int_rand_square_22_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */


#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	
	printLine("Calling CWE190_Integer_Overflow__short_rand_square_01_bad();");
	CWE190_Integer_Overflow__short_rand_square_01_bad();


	printLine("Calling CWE190_Integer_Overflow__short_rand_square_22_bad();");
	CWE190_Integer_Overflow__short_rand_square_22_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_add_01_bad();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_add_01_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_add_22_bad();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_add_22_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_01_bad();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_01_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_22_bad();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_22_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_square_01_bad();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_square_01_bad();

	printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_square_22_bad();");
	CWE190_Integer_Overflow__unsigned_int_fscanf_square_22_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_add_01_bad();");
	CWE190_Integer_Overflow__unsigned_int_max_add_01_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_add_22_bad();");
	CWE190_Integer_Overflow__unsigned_int_max_add_22_bad();

	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_multiply_01_bad();");
	CWE190_Integer_Overflow__unsigned_int_max_multiply_01_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_multiply_22_bad();");
	CWE190_Integer_Overflow__unsigned_int_max_multiply_22_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_square_01_bad();");
	CWE190_Integer_Overflow__unsigned_int_max_square_01_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_square_22_bad();");
	CWE190_Integer_Overflow__unsigned_int_max_square_22_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_add_01_bad();");
	CWE190_Integer_Overflow__unsigned_int_rand_add_01_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_add_22_bad();");
	CWE190_Integer_Overflow__unsigned_int_rand_add_22_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_multiply_01_bad();");
	CWE190_Integer_Overflow__unsigned_int_rand_multiply_01_bad();

	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_multiply_22_bad();");
	CWE190_Integer_Overflow__unsigned_int_rand_multiply_22_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_square_01_bad();");
	CWE190_Integer_Overflow__unsigned_int_rand_square_01_bad();


	printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_square_22_bad();");
	CWE190_Integer_Overflow__unsigned_int_rand_square_22_bad();
#endif /* OMITBAD */

	return 0;

} 
