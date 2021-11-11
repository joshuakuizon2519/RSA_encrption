#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Encrypt(int p, int q, char msg[]);
void Decrypt(int p, int q, char msg[]);
//int calcuMod(int c,int e,int n);

int main(){
    int p = 5, q = 7;
    char msg[] = "RASTAMAN";
	int i, j, x, size = strlen(msg);

    printf("Prime numbers are %d and %d\n", p,q);
    printf("The message is :%s", msg);
	
	
	printf("\nEncrypted:\t");
	Encrypt(p,q,msg);
	puts(msg);

    printf("\nDecrypted:\t");
	Decrypt(p,q,msg);
	puts(msg);

	
    return 0;
}

void Encrypt(int p, int q, char msg[]){
	int n , z, e, d;
	int i, j, x, size = strlen(msg);
	long long int mod = 1;

	n=p*q;
	z=(p-1)*(q-1);
	
	for(i=n-1; i>0; i--){
		if(z%i != 0){
			e = i;
		}
	}

	for(j=n-1; j>0 ; j--){
		i= j*e;
		if((i-1)%z == 0){
			d = j;
		}	
	}
	
	for(i=0; i<size; i++){
		int c = msg[i]-96;	
		mod = 1;
		for(j=0; j < e; j++){
			mod = mod * c;
		}
		mod = mod % n;
		msg[i]=mod+96;	
	}
}

void Decrypt(int p, int q, char msg[]){
	int n , z, e, d;
	int i, j, x, size = strlen(msg);
	long long int mod = 1;

	n=p*q;
	z=(p-1)*(q-1);
	
	for(i=n-1; i>0; i--){
		if(z%i != 0){
			e = i;
		}
	}

	for(i=0; i>0 ; i++){
		if((e*1-1)%z == 0){
			d = i;
		}	
	}

	for(i=0; i<size; i++){
		int c = msg[i]-96;	
		mod = 1;
		
		for(j=0; j < e; j++){
			mod = mod * c;
		}

		mod = mod % n;
		msg[i]=mod+96;	
	}	
}

