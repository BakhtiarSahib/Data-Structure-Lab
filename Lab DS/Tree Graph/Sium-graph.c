#include<stdio.h>
int main(){
    int a[10][10][10]={0},b[10][10]={0},p[10][10],m,n,i,j,k;

    printf("Enter the no of node: ");
    scanf("%d",&n);

    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
        scanf("%d",&a[0][i][j]);
    }

    printf("\n\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d",a[0][i][j]);
        }
        printf("\n\n\n");
    }
    printf("\n\n\n");


    for(m=1;m<n;m++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    a[m][i][j]=a[m][i][j]+a[0][i][k]*a[m-1][k][j];
                }
            }
        }
    }

    for(k=0;k<n;k++){
        printf("\n\nA[%d]=\n",k+1);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("\t%d",a[k][i][j]);
            }
            printf("\n\n\n");
        }
        printf("\n\n\n");
    }



    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                b[i][j]=b[i][j]+a[k][i][j];
            }
        }
    }

    printf("\n\nB=\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n\n\n");
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==0){
                p[i][j]=0;
            }
            else{
                p[i][j]=1;
            }
        }
    }

    printf("\n\nP=\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d",p[i][j]);
        }
        printf("\n\n\n");
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(p[i][j]==0){
                printf("\nNot Strongly Connected..\n");
                system("pause");
                return 0;
            }
        }

    }
    printf("\nStrongly Connected...\n");


    return 0;
}
