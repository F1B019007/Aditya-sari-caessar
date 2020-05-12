#include <stdio.h>
int main(){
	int x[7],i;
	for(i=0;i<=7;i++){
	printf("Masukkan nilai :",i+1);
	scanf("%i",&x[i]);}
	printf("\n");
	for(i=0;i<=7;i++){
	printf("nilai ke %i= %i\n",i+1,x[i]);
	}
	printf("\n");
	return 0;
}
