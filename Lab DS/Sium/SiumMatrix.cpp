#include<stdio.h>
#include<conio.h>

int main(){

	float a[100][100];
	int i,j,k,l,n;
	
	printf("Enter The no of equation: ");
	scanf("%d",&n);
	
	printf("Enter the Augmented matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<=n;j++){
			scanf("%f",&a[i][j]);
		}
	}
	

	for(i=0;i<n;i++){
		for(j=0;j<=n;j++){
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(k=0;k<(n-1);k++){

		for(i=0;i<=n;i++){
			a[k][i]=a[k][i]/a[k][k];
		}
		
		for(l=k;j<n;l++){
			for(i=0;i<=n;i++);{

			a[l+1][i]=a[l+1][i]-a[l][i]*a[l+1][l];

			}
		}
	}
	
	for(i=k;i<=n;i++){
			a[k][i]=a[k][i]/a[k][k];
		}
	
	for(i=0;i<n;i++){
		for(j=0;j<=n;j++){
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
