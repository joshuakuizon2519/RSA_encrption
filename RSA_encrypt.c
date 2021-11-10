#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Encrypt(int p, int q, char msg[]);
void Decrypt(int p, int q, char msg[]);
//int calcuMod(int c,int e,int n);

int main(){
    int p, q;
    char msg[] = "love";
	
    printf("Give the first prime number: ");
    scanf("%d", &p);

    printf("Give the second prime number: ");
    scanf("%d", &q);

    //printf("\nEnter message to encrypt: ");
    //scanf("%s", &msg);

	
	
    printf("Prime numbers are %d and %d\n", p,q);
    printf("%s", msg);

	printf("\nEncrypted:\n");
	Encrypt(p,q,msg);
	puts(msg);

    printf("\nDecrypted:\n");
	Decrypt(p,q,msg);
	puts(msg);
	
    return 0;
}

void Encrypt(int p, int q, char msg[]){
	int n , z, e, d;
	int i, j, x;
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

	for(i=0; msg[i]!='\0'; i++){
		char c = msg[i];
		for(j=0; j < e; j++){
			mod = mod * c;
			mod = mod % n;
		}
		msg[i]=mod;	
	}
}

void Decrypt(int p, int q, char msg[]){
	int n , z, e, d;
	int i, j, x;
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

	for(i=0; msg[i]!='\0'; i++){
		char c = msg[i];
		for(j=0; j < d; j++){
			mod = mod * c;
			mod = mod % n;
		}
		msg[i]=mod;	
	}
}

