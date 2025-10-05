/*Experiment 2:operators
4.write the c program to find the root of the quadratic equations sqrt*/
# include<math.h>
int main()
{
	printf("name-vidhi mishra\nSAP ID-590028001\ncourse-BCA\nBatch-B5");
    printf("\n----------------------------------\n");
	printf("put appropriate value of a,b,c");
	float a,b,c,x1,x2;
	printf("enter values of a,b,c\n");
	scanf("%f %f %f",&a, &b, &c);
               x1=-b+sqrt((b*b)-4*a*c)/(2*a);
	x2 = -b-sqrt((b*b)-4*a*c)/(2*a);
	printf("roots are %f and %f",x1, x2);
	return 0;
}

