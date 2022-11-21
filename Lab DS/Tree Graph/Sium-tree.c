#include<stdio.h>
#include<math.h>
int a[100]={0};
void setv(int r,int v){
    if(a[r-1]==0)
        a[r-1]=v;
    else if(v<a[r-1])
        setv(2*r,v);
    else
        setv(2*r+1,v);
}
void display(){
    int m,i,j,k,nw=8;
    printf("\n\n");
    m=63;
    for(i=0;i<63;i++){
            for(j=0;j<m/2+1;j++)
                printf(" ");
            if(a[i]!=0)
                printf("\b%d",a[i]);
            for(j=0;j<m/2+1;j++)
                printf(" ");
        if(i==0||i==2||i==6||i==14||i==30){
            k=nw;
            do{
                printf("\n");
                k--;
            }while(k>0);
            m=m/2;
            nw=nw-2;

        }
    }
    printf("\n\n");
}
int main(){
    int i,j,v;
    while(scanf("%d",&v)==1){
        setv(1,v);
        display();
    }
    return 0;
}
