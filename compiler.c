#include <stdio.h>

enum Token {
	INVALID,
	MOV,
	ADD,
	XOR,
	SUB,

}

int main(int argc, char *argv[]) {
	FILE *source = fopen(argv[1]);
	
}

Token getNextToken(FILE *stream) {
	return INVALID;	
}
