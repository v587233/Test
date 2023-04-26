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
	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_for_loop_01_good();");
	CWE400_Resource_Exhaustion__connect_socket_for_loop_01_good();


	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_for_loop_15_good();");
	CWE400_Resource_Exhaustion__connect_socket_for_loop_15_good();


	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_fwrite_01_good();");
	CWE400_Resource_Exhaustion__connect_socket_fwrite_01_good();


	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_fwrite_16_good();");
	CWE400_Resource_Exhaustion__connect_socket_fwrite_16_good();


	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_sleep_01_good();");
	CWE400_Resource_Exhaustion__connect_socket_sleep_01_good();


	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_sleep_17_good();");
	CWE400_Resource_Exhaustion__connect_socket_sleep_17_good();


	printLine("Calling CWE400_Resource_Exhaustion__fgets_for_loop_01_good();");
	CWE400_Resource_Exhaustion__fgets_for_loop_01_good();


	printLine("Calling CWE400_Resource_Exhaustion__fgets_for_loop_18_good();");
	CWE400_Resource_Exhaustion__fgets_for_loop_18_good();


	printLine("Calling CWE400_Resource_Exhaustion__fgets_fwrite_01_good();");
	CWE400_Resource_Exhaustion__fgets_fwrite_01_good();


	printLine("Calling CWE400_Resource_Exhaustion__fgets_fwrite_21_good();");
	CWE400_Resource_Exhaustion__fgets_fwrite_21_good();


	printLine("Calling CWE400_Resource_Exhaustion__fgets_sleep_01_good();");
	CWE400_Resource_Exhaustion__fgets_sleep_01_good();

	printLine("Calling CWE400_Resource_Exhaustion__fgets_sleep_31_good();");
	CWE400_Resource_Exhaustion__fgets_sleep_31_good();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_for_loop_01_good();");
	CWE400_Resource_Exhaustion__fscanf_for_loop_01_good();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_for_loop_32_good();");
	CWE400_Resource_Exhaustion__fscanf_for_loop_32_good();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_fwrite_01_good();");
	CWE400_Resource_Exhaustion__fscanf_fwrite_01_good();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_fwrite_34_good();");
	CWE400_Resource_Exhaustion__fscanf_fwrite_34_good();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_sleep_01_good();");
	CWE400_Resource_Exhaustion__fscanf_sleep_01_good();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_sleep_41_good();");
	CWE400_Resource_Exhaustion__fscanf_sleep_41_good();


	printLine("Calling CWE400_Resource_Exhaustion__listen_socket_for_loop_01_good();");
	CWE400_Resource_Exhaustion__listen_socket_for_loop_01_good();


	printLine("Calling CWE400_Resource_Exhaustion__listen_socket_for_loop_42_good();");
	CWE400_Resource_Exhaustion__listen_socket_for_loop_42_good();


	printLine("Calling CWE400_Resource_Exhaustion__listen_socket_fwrite_01_good();");
	CWE400_Resource_Exhaustion__listen_socket_fwrite_01_good();


	printLine("Calling CWE400_Resource_Exhaustion__listen_socket_fwrite_22_good();");
	CWE400_Resource_Exhaustion__listen_socket_fwrite_22_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */


#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	
	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_for_loop_01_bad();");
	CWE400_Resource_Exhaustion__connect_socket_for_loop_01_bad();


	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_for_loop_15_bad();");
	CWE400_Resource_Exhaustion__connect_socket_for_loop_15_bad();


	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_fwrite_01_bad();");
	CWE400_Resource_Exhaustion__connect_socket_fwrite_01_bad();


	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_fwrite_16_bad();");
	CWE400_Resource_Exhaustion__connect_socket_fwrite_16_bad();


	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_sleep_01_bad();");
	CWE400_Resource_Exhaustion__connect_socket_sleep_01_bad();


	printLine("Calling CWE400_Resource_Exhaustion__connect_socket_sleep_17_bad();");
	CWE400_Resource_Exhaustion__connect_socket_sleep_17_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fgets_for_loop_01_bad();");
	CWE400_Resource_Exhaustion__fgets_for_loop_01_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fgets_for_loop_18_bad();");
	CWE400_Resource_Exhaustion__fgets_for_loop_18_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fgets_fwrite_01_bad();");
	CWE400_Resource_Exhaustion__fgets_fwrite_01_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fgets_fwrite_21_bad();");
	CWE400_Resource_Exhaustion__fgets_fwrite_21_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fgets_sleep_01_bad();");
	CWE400_Resource_Exhaustion__fgets_sleep_01_bad();

	printLine("Calling CWE400_Resource_Exhaustion__fgets_sleep_31_bad();");
	CWE400_Resource_Exhaustion__fgets_sleep_31_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_for_loop_01_bad();");
	CWE400_Resource_Exhaustion__fscanf_for_loop_01_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_for_loop_32_bad();");
	CWE400_Resource_Exhaustion__fscanf_for_loop_32_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_fwrite_01_bad();");
	CWE400_Resource_Exhaustion__fscanf_fwrite_01_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_fwrite_34_bad();");
	CWE400_Resource_Exhaustion__fscanf_fwrite_34_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_sleep_01_bad();");
	CWE400_Resource_Exhaustion__fscanf_sleep_01_bad();


	printLine("Calling CWE400_Resource_Exhaustion__fscanf_sleep_41_bad();");
	CWE400_Resource_Exhaustion__fscanf_sleep_41_bad();


	printLine("Calling CWE400_Resource_Exhaustion__listen_socket_for_loop_01_bad();");
	CWE400_Resource_Exhaustion__listen_socket_for_loop_01_bad();


	printLine("Calling CWE400_Resource_Exhaustion__listen_socket_for_loop_42_bad();");
	CWE400_Resource_Exhaustion__listen_socket_for_loop_42_bad();


	printLine("Calling CWE400_Resource_Exhaustion__listen_socket_fwrite_01_bad();");
	CWE400_Resource_Exhaustion__listen_socket_fwrite_01_bad();


	printLine("Calling CWE400_Resource_Exhaustion__listen_socket_fwrite_22_bad();");
	CWE400_Resource_Exhaustion__listen_socket_fwrite_22_bad();
#endif /* OMITBAD */

	return 0;

} 