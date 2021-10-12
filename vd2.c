#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int z,id,sokhach,i;
	int sum=0;
	char y;
	
	printf("Chao mung quy khach den voi cua hang ToCoToCo\n");
	printf("chao quy khach quy khach den bao nhiu nguoi a\n");
	printf("nhap so khach den\n");
	scanf("%d",&sokhach);
	int nguoi[sokhach], menu[5];
	for(i=0 ; i <5 ;i++){
		menu[i]=0;
		}
	printf("moi quy khach chon nhung do uong sau day\n");
	printf("1.Viet quat 15k \n");
	printf("2. coca khong gas 10k \n");
	printf("3. caffe gia 30k \n");
	printf("4. nuoc khoang tinh khiet 10k \n");
	printf("5.tra tranh không duong 15k \n");
	for(i=0 ; i < sokhach ; i++){
		
		printf("quy khach thu %d muon chon gi\n",i+1);
		fflush(stdin);
		scanf("%d",&id);
		nguoi[i]=id;
		switch(id ){
		 	case 1:
		 	    printf("Do uong cua quy khach la viet quat gia 15k \n");
		 	    menu[0]++;
		 	    nguoi[i]=id;
		 	    sum+=15000;
			    break;
			case 2:
			    printf("Do uong cua quy khach la coca gia 10k \n");
		 	    menu[0]++;
		 	    nguoi[i]=id;
		 	    sum+=10000;
		     	break;
			case 3:
			    printf("Do uong cua quy khach la caffe gia 30k \n");
		 	    menu[0]++;
		 	    nguoi[i]=id;
		 	    sum+=30000;
			    break;
			case 4:
			    printf("Do uong cua quy khach la nuoc khoang gia 10k \n");
		 	    menu[0]++;
		 	    nguoi[i]=id;
		 	    sum+=10000;
			    break;
			case 5:
			    printf("Do uong cua quy khach la tra tranh gia 15k \n");
		 	    menu[0]++;
		 	    nguoi[i]=id;
		 	    sum+=15000;
			    break;		
		}
		}
	printf("tong %d", sum);
	printf("Thue 10%\n la %f",sum*1.1);
	printf("Tien phai thanh toan %f \n", sum*1.1);
	return 0;
}

