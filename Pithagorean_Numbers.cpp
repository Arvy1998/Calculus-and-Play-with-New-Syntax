#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float fmas[1000];
	float fgmas[1000];
	int imsize = sizeof(fmas) / sizeof(float);

	float result[4];

	float *fptr;
	float *fgptr;

	float *resultptr = result;

	for (auto iterator = 0; iterator < imsize; iterator++) {
		fmas[iterator] = iterator + 1;
		fgmas[iterator] = fmas[iterator];
	}

	for (auto X = 0; X < imsize; X += 4) {
		fptr = fmas + X;
		for (auto Y = 0; Y < imsize; Y += 4) {
			fgptr = fgmas + Y;
			__asm {
				mov eax, fptr
				mov ebx, fgptr
				movups xmm0, [eax]
				movups xmm1, [ebx]
				movups xmm2, xmm0
				movups xmm3, xmm1
				mulps xmm2, xmm2
				mulps xmm3, xmm3
				movups xmm4, xmm2
				addps xmm4, xmm3
				movups xmm5, xmm4
				sqrtps xmm5, xmm5
				cvttps2dq xmm6, xmm5
				cvtdq2ps xmm5, xmm6
				mulps xmm5, xmm5
				subps xmm5, xmm4
				mov eax, resultptr
				movups[eax], xmm5
			}
			for (auto K = 0; K < 4; ++K) {
				if (0 == result[K]) {
					cout << fmas[X + K] << "^2 + " << fgmas[Y + K] << "^2 = " << sqrt(fmas[X + K] * fmas[X + K] + fgmas[Y + K] * fgmas[Y + K]) << "^2" << endl;
				}
			}
		}
	}	
	return 0;
}
