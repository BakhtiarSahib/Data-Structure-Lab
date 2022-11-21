#include<stdio.h>
#include<conio.h>

int main(){
	float a[100][100];
	int i,j,k,n;
	
	printf("Enter the number of equation: ");
	scanf("%d",&n);
	printf("Enter the equations by Augmented form:\n");
	for(i=0;i<=n;i++)
	    for(j=0;j<n;j++)
	        scanf("%f",&a[i][j]);
	        
    for(i=0;i<=n;i++){
	    for(j=0;j<n;j++)
	        printf("%f\t",&a[i][j]);
	    printf("\n");
	}
	printf("\n\n");
	
	for(k=0;k<n-1;k++){

		for(i=0;i<=n;i++)
		    a[k][i]=a[k][i]/a[k][k];
		    
		for(i=k;i<n-1;i++){
			for(j=0;j<=n;j++)
			    a[i+1][j]=a[i+1][j]-a[k][j]*a[i+1][k];

		}


	}
	
	for(i=0;i<=n;i++){
	    for(j=0;j<n;j++)
	        printf("%f\t",&a[i][j]);
	    printf("\n");
	}
	
	getch();
	getch();
	return 0;
	
}
