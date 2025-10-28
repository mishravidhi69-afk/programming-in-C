/*4.3.9*/ 
#include <stdio.h> 
 int main(){ 
int i,j,k; 
printf("Name -Vidhi Mishra \nSAP ID - 590028001\nCourse - BCA \nBatch-B5"); 
printf("\n----------------------------------------------------------------\n"); 
for(i=5;i>=1;i--){ 
for(k=1;k<=i;k++){ 	 
printf(" "); 
} 
for(j=5;j>=i;j--){
printf("%d",j); 
} 
for(j=i+1;j<=5;j++){ 
 printf("%d",j); 
} 
printf("\n"); 
} 
for(i=1;i<=5;i++){ 
for(k=0;k<=i;k++){  
printf(" "); 
} 
for(j=5;j>=i+1;j--){ 
printf("%d",j); 
} 
for(j=i+2;j<=5;j++){
printf("%d",j); 
} 
printf("\n"); 
} 
 return 0;
} 
 

