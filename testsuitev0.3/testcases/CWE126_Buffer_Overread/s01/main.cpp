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
	printLine("Calling CWE126_Buffer_Overread__char_alloca_loop_01_good();");
	CWE126_Buffer_Overread__char_alloca_loop_01_good();

	printLine("Calling CWE126_Buffer_Overread__char_alloca_memcpy_01_good();");
	CWE126_Buffer_Overread__char_alloca_memcpy_01_good();


	printLine("Calling CWE126_Buffer_Overread__char_alloca_memmove_01_good();");
	CWE126_Buffer_Overread__char_alloca_memmove_01_good();


	printLine("Calling CWE126_Buffer_Overread__char_declare_loop_01_good();");
	CWE126_Buffer_Overread__char_declare_loop_01_good();

	printLine("Calling CWE126_Buffer_Overread__char_declare_memcpy_01_good();");
	CWE126_Buffer_Overread__char_declare_memcpy_01_good();


	printLine("Calling CWE126_Buffer_Overread__char_declare_memmove_01_good();");
	CWE126_Buffer_Overread__char_declare_memmove_01_good();

	printLine("Calling CWE126_Buffer_Overread__CWE129_connect_socket_01_good();");
	CWE126_Buffer_Overread__CWE129_connect_socket_01_good();


	printLine("Calling CWE126_Buffer_Overread__CWE129_connect_socket_22_good();");
	CWE126_Buffer_Overread__CWE129_connect_socket_22_good();


	printLine("Calling CWE126_Buffer_Overread__CWE129_fgets_01_good();");
	CWE126_Buffer_Overread__CWE129_fgets_01_good();

	printLine("Calling CWE126_Buffer_Overread__CWE129_fgets_22_good();");
	CWE126_Buffer_Overread__CWE129_fgets_22_good();


	printLine("Calling CWE126_Buffer_Overread__CWE129_fscanf_01_good();");
	CWE126_Buffer_Overread__CWE129_fscanf_01_good();


	printLine("Calling CWE126_Buffer_Overread__CWE129_fscanf_22_good();");
	CWE126_Buffer_Overread__CWE129_fscanf_22_good();


	printLine("Calling CWE126_Buffer_Overread__CWE129_large_01_good();");
	CWE126_Buffer_Overread__CWE129_large_01_good();

	printLine("Calling CWE126_Buffer_Overread__CWE129_large_22_good();");
	CWE126_Buffer_Overread__CWE129_large_22_good();

	printLine("Calling CWE126_Buffer_Overread__CWE129_listen_socket_01_good();");
	CWE126_Buffer_Overread__CWE129_listen_socket_01_good();


	printLine("Calling CWE126_Buffer_Overread__CWE129_listen_socket_22_good();");
	CWE126_Buffer_Overread__CWE129_listen_socket_22_good();


	printLine("Calling CWE126_Buffer_Overread__CWE129_rand_01_good();");
	CWE126_Buffer_Overread__CWE129_rand_01_good();

	printLine("Calling CWE126_Buffer_Overread__CWE129_rand_22_good();");
	CWE126_Buffer_Overread__CWE129_rand_22_good();

	printLine("Calling CWE126_Buffer_Overread__CWE170_char_loop_01_good();");
	CWE126_Buffer_Overread__CWE170_char_loop_01_good();

	printLine("Calling CWE126_Buffer_Overread__CWE170_char_memcpy_01_good();");
	CWE126_Buffer_Overread__CWE170_char_memcpy_01_good();


	printLine("Calling CWE126_Buffer_Overread__CWE170_char_strncpy_01_good();");
	CWE126_Buffer_Overread__CWE170_char_strncpy_01_good();

	printLine("Calling CWE126_Buffer_Overread__CWE170_wchar_t_loop_01_good();");
	CWE126_Buffer_Overread__CWE170_wchar_t_loop_01_good();


	printLine("Calling CWE126_Buffer_Overread__CWE170_wchar_t_memcpy_01_good();");
	CWE126_Buffer_Overread__CWE170_wchar_t_memcpy_01_good();


	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	
	printLine("Calling CWE126_Buffer_Overread__char_alloca_loop_01_bad();");
	CWE126_Buffer_Overread__char_alloca_loop_01_bad();

	printLine("Calling CWE126_Buffer_Overread__char_alloca_memcpy_01_bad();");
	CWE126_Buffer_Overread__char_alloca_memcpy_01_bad();


	printLine("Calling CWE126_Buffer_Overread__char_alloca_memmove_01_bad();");
	CWE126_Buffer_Overread__char_alloca_memmove_01_bad();


	printLine("Calling CWE126_Buffer_Overread__char_declare_loop_01_bad();");
	CWE126_Buffer_Overread__char_declare_loop_01_bad();

	printLine("Calling CWE126_Buffer_Overread__char_declare_memcpy_01_bad();");
	CWE126_Buffer_Overread__char_declare_memcpy_01_bad();


	printLine("Calling CWE126_Buffer_Overread__char_declare_memmove_01_bad();");
	CWE126_Buffer_Overread__char_declare_memmove_01_bad();

	printLine("Calling CWE126_Buffer_Overread__CWE129_connect_socket_01_bad();");
	CWE126_Buffer_Overread__CWE129_connect_socket_01_bad();


	printLine("Calling CWE126_Buffer_Overread__CWE129_connect_socket_22_bad();");
	CWE126_Buffer_Overread__CWE129_connect_socket_22_bad();


	printLine("Calling CWE126_Buffer_Overread__CWE129_fgets_01_bad();");
	CWE126_Buffer_Overread__CWE129_fgets_01_good();

	printLine("Calling CWE126_Buffer_Overread__CWE129_fgets_22_good();");
	CWE126_Buffer_Overread__CWE129_fgets_22_good();


	printLine("Calling CWE126_Buffer_Overread__CWE129_fscanf_01_bad();");
	CWE126_Buffer_Overread__CWE129_fscanf_01_bad();


	printLine("Calling CWE126_Buffer_Overread__CWE129_fscanf_22_bad();");
	CWE126_Buffer_Overread__CWE129_fscanf_22_bad();


	printLine("Calling CWE126_Buffer_Overread__CWE129_large_01_bad();");
	CWE126_Buffer_Overread__CWE129_large_01_bad();

	printLine("Calling CWE126_Buffer_Overread__CWE129_large_22_bad();");
	CWE126_Buffer_Overread__CWE129_large_22_bad();

	printLine("Calling CWE126_Buffer_Overread__CWE129_listen_socket_01_bad();");
	CWE126_Buffer_Overread__CWE129_listen_socket_01_bad();


	printLine("Calling CWE126_Buffer_Overread__CWE129_listen_socket_22_bad();");
	CWE126_Buffer_Overread__CWE129_listen_socket_22_bad();


	printLine("Calling CWE126_Buffer_Overread__CWE129_rand_01_bad();");
	CWE126_Buffer_Overread__CWE129_rand_01_bad();

	printLine("Calling CWE126_Buffer_Overread__CWE129_rand_22_bad();");
	CWE126_Buffer_Overread__CWE129_rand_22_bad();

	printLine("Calling CWE126_Buffer_Overread__CWE170_char_loop_01_bad();");
	CWE126_Buffer_Overread__CWE170_char_loop_01_bad();

	printLine("Calling CWE126_Buffer_Overread__CWE170_char_memcpy_01_bad();");
	CWE126_Buffer_Overread__CWE170_char_memcpy_01_bad();


	printLine("Calling CWE126_Buffer_Overread__CWE170_char_strncpy_01_bad();");
	CWE126_Buffer_Overread__CWE170_char_strncpy_01_bad();

	printLine("Calling CWE126_Buffer_Overread__CWE170_wchar_t_loop_01_bad();");
	CWE126_Buffer_Overread__CWE170_wchar_t_loop_01_bad();


	printLine("Calling CWE126_Buffer_Overread__CWE170_wchar_t_memcpy_01_bad();");
	CWE126_Buffer_Overread__CWE170_wchar_t_memcpy_01_bad();
#endif /* OMITBAD */

	return 0;

} 
