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
	printLine("Calling CWE483_Incorrect_Block_Delimitation__if_without_braces_multiple_lines_01_good();");
	CWE483_Incorrect_Block_Delimitation__if_without_braces_multiple_lines_01_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__if_without_braces_single_line_01_good();");
	CWE483_Incorrect_Block_Delimitation__if_without_braces_single_line_01_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_01_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_01_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_02_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_02_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_03_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_03_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_04_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_04_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_05_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_05_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_06_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_06_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_07_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_07_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_08_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_08_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_09_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_09_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_10_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_10_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_11_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_11_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_12_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_12_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_13_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_13_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_14_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_14_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_15_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_15_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_16_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_16_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_17_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_17_good();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_18_good();");
	CWE483_Incorrect_Block_Delimitation__semicolon_18_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE483_Incorrect_Block_Delimitation__if_without_braces_multiple_lines_01_bad();");
	CWE483_Incorrect_Block_Delimitation__if_without_braces_multiple_lines_01_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__if_without_braces_single_line_01_bad();");
	CWE483_Incorrect_Block_Delimitation__if_without_braces_single_line_01_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_01_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_01_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_02_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_02_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_03_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_03_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_04_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_04_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_05_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_05_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_06_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_06_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_07_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_07_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_08_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_08_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_09_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_09_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_10_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_10_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_11_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_11_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_12_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_12_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_13_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_13_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_14_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_14_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_15_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_15_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_16_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_16_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_17_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_17_bad();

	printLine("Calling CWE483_Incorrect_Block_Delimitation__semicolon_18_bad();");
	CWE483_Incorrect_Block_Delimitation__semicolon_18_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
