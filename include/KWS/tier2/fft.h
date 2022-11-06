/* Fast Fourier Transform
 * Cooley-Tukey algorithm with 2-radix DFT
 */

#include <stdint.h>
#include <complex.h>

void fft(float complex buf[], int n);