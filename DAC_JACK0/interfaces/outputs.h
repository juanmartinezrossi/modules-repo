/*
 * Define here the outputs for the module
 */

#ifndef _OUTPUTS_H
#define	_OUTPUTS_H

/** Interface Name: output (From module point pf view)
 *  
 *  Data type: Complex Float
 *  Max output samples: 1024*1024
 *  Min output samples: 1
 *  
 *  Callback function: process_input()
 *
 *  Description: Input stream of data
 */

#define OUTPUT_MAX_DATA	1024*1024	/*Max Number of data symbols*/

/** Type declaration */
typedef _Complex float output_t;

/** buffer for data */
output_t output_data[OUTPUT_MAX_DATA];

/* processing function */
int process_output(int len);

/** configure input interfaces */
struct utils_itf output_itfs[] = {
					
					{"output",
                    sizeof(output_t),
                    OUTPUT_MAX_DATA,
                    output_data,
                    NULL,      
                    process_output},
                    {NULL, 0, 0, 0, 0, 0}};


/** =============== End ================  */





#endif	/* _OUTPUTS_H */

