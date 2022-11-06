#include <fft.h>


// this code is adapted from rosettacode
// https://rosettacode.org/wiki/Fast_Fourier_transform

#define PI 3.14159265358979323846

void _fft(float complex *buf, float complex *out, int n, int step)
{
	if (step < n) {
		_fft(out, buf, n, step * 2);
		_fft(out + step, buf + step, n, step * 2);
 
		for (int i = 0; i < n; i += 2 * step) {
			float complex t = cexp(-I * PI * i / n) * out[i + step];
			buf[i / 2]     = out[i] + t;
			buf[(i + n)/2] = out[i] - t;
		}
	}
}
 
void fft(float complex *buf, int n)
{
	float complex out[n];
	for (int i = 0; i < n; i++) {
        out[i] = buf[i];
    }
	_fft(buf, out, n, 16);
}