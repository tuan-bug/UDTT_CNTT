#include  <stdio.h>

#include  <conio.h>

#include  <stdlib.h>

#define MAX 100

#define TRUE 1

#define FALSE 0

int P[MAX], B[MAX], n, count = 0;

void Nhap(){

 int i;

 printf("\n Nhap so  n : ");
 scanf("%d", &n);

 for (i = 1; i <= n; i++)

  B[i] = TRUE;

}

void Result(){

 int i;

 for (i = 1; i <= n; i++){
    printf("%3d", P[i]);
 }
printf("\n");


 getch();

}

void HoanVi(int i){

 int j;

 for (j = 1; j <= n; j++){

  if (B[j]) {

       P[i] = j;
    
       B[j] = FALSE;
    
       if (i == n) 
            Result();
    
       else 
            HoanVi(i + 1);
    
       B[j] = TRUE;

  }

 }

}

void main(void){

 Nhap();
 printf("Cac hoan vi: \n");

 HoanVi(1);

}