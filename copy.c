#include<stdio.h>

int main(){
	FILE *f=fopen("source.in","rb"); 
	FILE *g=fopen("destination.out", "wb");

	fseek(f, 0, SEEK_END);
	long size=ftell(f);
	int *ptr;
	int n=0;
	while(!feof(f)){
		if(!feof(f)){	
			n=fread(ptr, 1, size, f);
					n++;
			fwrite(ptr, 1, n, g);
			if (n==100){
				printf("#");
			}
		}
	}
return 0;
}




