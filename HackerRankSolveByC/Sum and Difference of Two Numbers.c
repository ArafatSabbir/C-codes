#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1, num2,sum1,sum2;
    float f1,f2,fsum1,fsum2;

    scanf("%d %d",&num1, &num2);
	scanf("%f %f",&f1, &f2);

    sum1=num1+num2;
    sum2=num1-num2;

    fsum1=f1+f2;
    fsum2=f1-f2;

    printf("%d %d\n",sum1,sum2);
    printf("%.1f %.1f\n",fsum1,fsum2);
    
    return 0;
}
