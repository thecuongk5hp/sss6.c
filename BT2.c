#include<stdio.h>
int main(){
	int n,m,e,gcd,lcm;
	do{
	printf("nhap so nguyen duong n,m lan luot: ");
	scanf("%d %d",&n,&m);
	}while(n<0||m<0);
	do{
		printf("CACULATOR\n");
	    printf("1. tong 2 so\n");
	    printf("2. hieu 2 so\n");
	    printf("3. tich 2 so\n");
	    printf("4. thuong 2 so\n");
	    printf("5. so du trong phep chia 2 so\n");
	    printf("6. uoc chung lon nhat\n");
	    printf("7 boi chung nho nhat\n");
	    printf("8. thoat\n");
	    printf("lua chon cua ban la: ");
	    int choice;
	    float calculator;
	    scanf("%d",&choice);
	    switch(choice){
		    case 1:
			    calculator=n+m;
			    printf("tong cua %d va %d la: %.1f\n",n,m,calculator);
			    break;
		    case 2:
			    calculator=n-m;
			    printf("hieu cua %d va %d la: %.1f\n",n,m,calculator);
			    break;
		    case 3:
			    calculator=n*m;
			    printf("tich cua %d va %d la: %.1f\n",n,m,calculator);
			    break;
		    case 4:
		        calculator=n/m;
			    printf("thuong cua %d va %d la: %f\n",n,m,calculator);
		        break;
		    case 5:
		        calculator=n%m;
			    printf("so du khi chia 2 so %d va %d la: %.1f\n",n,m,calculator);
			    break;
		    case 6:
		    	for(int i = 1; i <= n || i <= m; i++) {
                    if( n%i == 0 && m%i == 0 )
                        gcd = i;
                }
		    	printf("UCLN cua 2 so %d va %d la: %d\n",n,m,gcd);
		    	break;
		    case 7:
				for(int i = 1; i <= n || i <= m; i++) {
                    if( n%i == 0 && m%i == 0 )
                        gcd = i;
                }
                lcm=n*m/gcd;
                printf("BCNN cua 2 so %d va %d la: %d\n",n,m,lcm);
                break;
			case 8:
				exit(e);
		default:
			printf("vui long chon tu 1-8: \n");	
	    }
    }while("vui long chon tu 1-8: \n");
}
	
