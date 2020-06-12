#include <stdio.h>

int main(){
	x:
	int s, k, giris;
	int yildiz, bosluk;
	printf("\n\nHow Many ? : ");
	scanf("%d", &giris);
	
	yildiz = 1;
	bosluk = giris - 1;
	
	for(k = 0; k < giris; k++){
		for(s = 0; s < bosluk; s++){
			printf(" ");
		}
		for(s = 0; s < yildiz; s++){
			printf("*");
     	}
     	printf("\n");
     	bosluk--;
     	yildiz += 2;   // 4 2 1 5
    }
    
    yildiz -= 4;
    bosluk = 1;

	for(k = 0; k < giris - 1 ; k++){
		for(s = 0; s < bosluk; s++){
			printf(" ");
		}
		for(s = 0; s < yildiz; s++){
			printf("*");
     	}
     	printf("\n");
     	bosluk++;
     	yildiz -= 2;   // 1-1 4 2 1 5
    }
    
    printf("\nSpaces: %d , Stars:%d", bosluk, yildiz);
    goto x;
    return 0;
}
        
	
