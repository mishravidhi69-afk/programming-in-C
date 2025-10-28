/*4.3.7*/ 
#include<stdio.h>
int main(){ 
int i,k,j; 
printf("Name - vidhi mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5"); 
printf("\n----------------------------------------------------------------\n"); 
for(i=5;i>=1;i--){ 
for(k=5;k>=i;k--){
printf(" "); 
} 
for(j=1;j<=i;j++){ 
printf("%d",j); 
} 
printf("\n"); 
}
 return 0; 
} 

