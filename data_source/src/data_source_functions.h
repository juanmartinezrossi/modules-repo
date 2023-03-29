/* 
 * This file is part of ALOE++ (http://flexnets.upc.edu/)
 * 
 * ALOE++ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * ALOE++ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with ALOE++.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H


#define PI		3.14159265359	/* pi approximation */
#define PIx2		6.28318530718

int init_toneCOMPLEX(_Complex float *table, int length, float gain, float sampl_freq);
int gen_toneCOMPLEX(_Complex float *func_out, _Complex float *tablel, int tablesz, 
					int datalen, float tone_freq, float sampl_freq);
int gen_toneCOMPLEX2(_Complex float *func_out, _Complex float *tablel, int tablesz, 
					int datalen, float tone_freq, float sampl_freq);
int gen_toneCOMPLEX3(_Complex float *func_out, _Complex float *tablel, int tablesz, 
					int datalen, float tone_freq, float sampl_freq);
int gen_toneCOMPLEX4(_Complex float *func_out, _Complex float *tablel, int tablesz, 
					int datalen, float tone_freq, float sampl_freq);
int gen_toneCOMPLEX5(_Complex float *func_out, _Complex float *tablel, int tablesz, 
					int datalen, float tone_freq, float sampl_freq);
int gen_NtonesCOMPLEX(_Complex float *func_out, _Complex float *tablel, int tablesz, 
					int datalen, float sampl_freq, float init_freq, float freq_step, float final_freq);
void gen_spectrum(_Complex float *out, int block_length);
//int init_functionA_COMPLEX(_Complex float *input, int length);
/*int functionA_COMPLEX(_Complex float *input, int lengths, _Complex float *output);
int init_functionB_FLOAT(float *input, int length);
int functionB_FLOAT(float *input, int lengths, float *output);
*/
#endif
