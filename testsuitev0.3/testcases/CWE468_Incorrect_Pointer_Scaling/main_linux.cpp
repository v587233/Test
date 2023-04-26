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
	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_01_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_01_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_02_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_02_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_03_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_03_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_04_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_04_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_05_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_05_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_06_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_06_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_07_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_07_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_08_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_08_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_09_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_09_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_10_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_10_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_11_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_11_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_12_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_12_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_13_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_13_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_14_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_14_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_15_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_15_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_16_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_16_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_17_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_17_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_18_good();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_18_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_01_good();");
	CWE468_Incorrect_Pointer_Scaling__int_01_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_02_good();");
	CWE468_Incorrect_Pointer_Scaling__int_02_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_03_good();");
	CWE468_Incorrect_Pointer_Scaling__int_03_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_04_good();");
	CWE468_Incorrect_Pointer_Scaling__int_04_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_05_good();");
	CWE468_Incorrect_Pointer_Scaling__int_05_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_06_good();");
	CWE468_Incorrect_Pointer_Scaling__int_06_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_07_good();");
	CWE468_Incorrect_Pointer_Scaling__int_07_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_08_good();");
	CWE468_Incorrect_Pointer_Scaling__int_08_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_09_good();");
	CWE468_Incorrect_Pointer_Scaling__int_09_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_10_good();");
	CWE468_Incorrect_Pointer_Scaling__int_10_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_11_good();");
	CWE468_Incorrect_Pointer_Scaling__int_11_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_12_good();");
	CWE468_Incorrect_Pointer_Scaling__int_12_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_13_good();");
	CWE468_Incorrect_Pointer_Scaling__int_13_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_14_good();");
	CWE468_Incorrect_Pointer_Scaling__int_14_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_15_good();");
	CWE468_Incorrect_Pointer_Scaling__int_15_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_16_good();");
	CWE468_Incorrect_Pointer_Scaling__int_16_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_17_good();");
	CWE468_Incorrect_Pointer_Scaling__int_17_good();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_18_good();");
	CWE468_Incorrect_Pointer_Scaling__int_18_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE468_Incorrect_Pointer_Scaling__class_01::good();");
	CWE468_Incorrect_Pointer_Scaling__class_01::good();

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_01_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_01_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_02_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_02_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_03_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_03_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_04_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_04_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_05_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_05_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_06_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_06_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_07_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_07_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_08_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_08_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_09_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_09_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_10_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_10_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_11_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_11_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_12_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_12_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_13_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_13_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_14_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_14_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_15_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_15_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_16_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_16_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_17_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_17_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_18_bad();");
	CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_18_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_01_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_01_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_02_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_02_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_03_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_03_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_04_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_04_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_05_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_05_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_06_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_06_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_07_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_07_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_08_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_08_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_09_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_09_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_10_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_10_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_11_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_11_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_12_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_12_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_13_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_13_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_14_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_14_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_15_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_15_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_16_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_16_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_17_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_17_bad();

	printLine("Calling CWE468_Incorrect_Pointer_Scaling__int_18_bad();");
	CWE468_Incorrect_Pointer_Scaling__int_18_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	printLine("Calling CWE468_Incorrect_Pointer_Scaling__class_01::bad();");
	CWE468_Incorrect_Pointer_Scaling__class_01::bad();

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
