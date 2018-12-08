#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	if (argc < 2) {
		cout << "Nepateiktas parametras*/\n";
		return 1;
	}

	char *stringLine = _strdup(argv[1]);
	int stringLineLength = static_cast<int>(strlen(argv[1]));
	int decimalValue;

	__asm {
		push eax
		push ebx
		push ecx
		push edx
		push esi
		
		xor ebx, ebx
		mov ecx, stringLine
		dec ecx 
		mov edx, 0
		mov esi, 0
		
		for_loop:

			mov ebx, [stringLineLength]

			cmp ebx, esi
			jz exit_loop

			sub ebx, esi
			inc ecx                
			mov al, byte ptr [ecx] 
			sub al, 48	
			
			cmp al, 48
			jz exit_loop

			movzx eax, al
			dec ebx
			jmp multiplication

				multiplication:
				cmp ebx, 0
				jz exit_multiplication
				imul eax, 10
				dec ebx
				jmp multiplication
				exit_multiplication:
				exit_mult_2:
				
			inc esi
			add edx, eax

			jmp for_loop
		
			exit_loop:

		mov decimalValue, edx

		pop esi
		pop edx
		pop ecx
		pop ebx
		pop eax
	}

	cout << decimalValue;
	return 0;
}
