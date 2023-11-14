#include<stdio.h>
int main(){
	int n,i;
	printf("bang cuu chuong\n");
	for(int n=1;n<=10;n++){
	    for(int i=0;i<=10;i++){
		    int m=n*i;
		    printf(" %d * %d = %d\n",n,i,m);
	    }
	}
}
