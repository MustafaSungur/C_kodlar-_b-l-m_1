#include<stdio.h>
#include<conio.h>
#define n 4
#define m 5
#define p 3
int main(){
	int i,j,k;
	
	int A[n][m],B[m][p],C[n][p];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("A[%d][%d]: ",i+1,j+1);
			scanf("%d",&A[i][j]);	
		}
		
	}
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			printf("B[%d][%d]: ",i+1,j+1);
			scanf("%d",&B[i][j]);	
		}
		
	}
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			C[i][j]=0;
			for(k=0;k<m;k++){
				C[i][j]+=A[i][k]+B[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			printf("%d",C[i][j]);
		}
		printf("\n");
	}		
}
