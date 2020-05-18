#include "main.h"
void montexp(byte* dest, byte* key, byte* msg, byte* n);
void montprod(byte* dest, byte* a, byte* b);
void byteprod(byte* dest, byte* a, byte* b, int size_a, int size_b);
int main(void)
{
	byte a[] = {5};
	byte b[] = {6};
	byte* results = malloc(sizeof(byte)*2);
	memset(results, 0, sizeof(byte)*2);

	printf("testing byteproduct\n");
	byteprod(&results, &a, &b, 8, 8);
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
	int or_flag = 1;
	for(int i = 0 ; i < size_a; i++){
		if(*a & (1<<i)){
			if(or_flag){
				*dest |= *b;
				or_flag = 1;
			}
			else{
				*dest &= (*b << i);
			}
		}
	}
}