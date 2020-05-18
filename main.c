#include "main.h"
void montexp(byte* dest, byte* key, byte* msg, byte* n);
void montprod(byte* dest, byte* a, byte* b);
void byteprod(byte* dest, byte* a, byte* b, int size_a, int size_b);
int main(void)
{
	byte a[] = {1,5};
	byte b[] = {0,6};
	byte* results = malloc(sizeof(byte)*2);
	memset(results, 0, sizeof(byte)*2);

	printf("testing byteproduct\n");
	byteprod(results, &a, &b, sizeof(a), sizeof(b));
	printf("results are %d,%d\n",results[0],results[1]);
}

void montexp(byte* dest, byte* key, byte* msg, byte* n)
{
	//compute n'

	//compute abar

}

void montprod(byte* dest, byte* a, byte* b)
{

}

void byteprod(byte* dest, byte* a, byte* b, int size_a, int size_b){
	//ensure when using byteprod the destination buffer is at least twice the size of the input buffers
	for(int i = 0; i< size_a; i++){
		for(int j = 0; j < size_b; j++){
			*((short*)(dest+i)) += a[i]*b[j];
		}
	}
}