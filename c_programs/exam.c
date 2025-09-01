/*#include <stdio.h>
#define max_num 1000
int main(){
    int max1,max2,i,n,a[max_num],x;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
           scanf("%d",&a[i]);
    }
    max1=max2=x;
    for(i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1){
            max2=a[i];
        }
    }
    printf("First largest=%d",max1);
    printf("second largest=%d",max2);

}*/
/*#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf and %.2lf\n", root1, root2);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}*/
/*#include <stdio.h>
#include <math.h>
int main()
{
int i,n;
float x,val,sum,t;
printf("Enter the values of x and n:");
scanf("%f %d",&x,&n);
x=val;
x=x*3.14159/180;
x=sum;
x=t;
for(i=0;i<n+1;i++){
    t=(t*pow((double)(-1),(double)(2*i-1))*x*x)/(2*i*(2*i+1));
    sum=sum+t;
}
printf("The value of sin %f is:%f",val,sum);
return 0;
}*/
/*#include <stdio.h>
int fact(int );
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    fact(n);
    printf("The factorial of n is:",fact(n));
    return 0;
}
int fact(int n){
if(n==0||n==1){
    return 0;
}
else{
     return n*fact(n-1);
}
}*/
#include <stdio.h>
int main(){
    int i,j,row;
    printf("Enter how many rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
        printf(" ");
        for(j=1;j<=i;j++){
            printf("%d",i);
            printf("/n");
        }
          
        }
    }

}