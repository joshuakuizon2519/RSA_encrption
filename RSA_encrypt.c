#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void Encrypt(int p, int q, char msg[]);
// void Decrypt(int p, int q, char msg[]);
// int calcuMod(int c,int e,int n);

int main(){
    int p, q;
    char msg[] = "Hello";
	
    printf("Give the first prime number: ");
    scanf("%d", &p);

    printf("Give the second prime number: ");
    scanf("%d", &q);

    //printf("\nEnter message to encrypt: ");
    //scanf("%s", &msg);

	
	
    printf("Prime numbers are %d and %d\n", p,q);
    printf("%s", msg);

	// printf("\nEncrypted:\n");
	// toEncrypt(p,q,msg);
	// puts(msg);

    // puts("decryption");	
	// toDecryption(String,p,q);
	// puts(String);
	
    return 0;
}

// void Encrypt(int p, int q, char msg[]){
// 	int i, j, n , x, z, e, d, mod, t=1;;
	
// 	n=p*q;
// 	z=(p-1)*(q-1);
	
// 	for(i=n-1; i>0; i--){
// 		if(z%i != 0){
// 			e = i;
// 		}
// 	}
	
// 	for(i=0; i>0 ; i--){
// 		if((e*1-1)%z == 0){
// 			d = i;
// 		}
		
// 	}
	
// 	for(i=0; msg[i]!=0; x++){
// 		msg[i] = tolower(msg[i]);
// 		int c = msg[i]-96;
// 		mod=calcuMod(c,e,n);
// 		msg[i]=mod;	
// 	}	
// }

// void Decrypt(int p, int q, char msg[]){
// 	int n,z,e,d,x,mod;
	
// 	n=p*q;
// 	z=(p-1)*(q-1);
    
//     for(x=n-1;x>0;x--){
// 		if(z%x!=0){
// 			e=x;
// 		}
// 	}
	
// 	for(x=n-1;x>0;x--){
// 		if(((e*x)-1)%z==0){
// 			d=x;
// 		}
// 	}

// 	for(x=0;String[x]!=0;x++){
// 		int c=msg[x];
// 		mod=calcuMod(c,e,n);
// 		msg[x]=mod+96;
// 	}
	
// }

// int calcuMod(int c,int e,int n){
// 	int x;
// 	long long int ret=1;
// 	for(x=0;x<e;x++){
// 		ret*=c;
// 	}
	
// 	return ret%n;
// }
