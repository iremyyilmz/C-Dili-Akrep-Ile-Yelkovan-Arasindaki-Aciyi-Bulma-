#include<stdio.h>

float akyel_aci(int saat, int dakika) {

float saci;
float daci;
float s;

if((saat<0) || (saat>23) || (dakika<0) || (dakika>59))
   return -1.0;
   
saat%=12;

daci = dakika*6;
saci = saat*30 + (float)dakika/2;

s = saci - daci;

if(s<0)
   s*=-1;
return s; 
}

int main() {
	
	int st, dk;
	
printf("Saat ve dakika girin: ");
scanf("%d%d", &st, &dk);

printf("Akrep ile yelkovan arasindaki aci = %.2f", akyel_aci(st,dk));

return 0;	
}  
   

  
  

