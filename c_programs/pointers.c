/*C program to create, initialize and use pointers
#include <stdio.h>
int main()
{
    int num = 10;
    int * ptr;
    ptr = &num;

    printf("Address of num = %d\n", &num);
    printf("Value of num = %d\n", num);
    printf("Address of ptr = %d\n", &ptr);
    printf("Value of ptr = %d\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}*/
/*#include <stdio.h>

void update(int *a, int *b) {
    int temp = *a;
    *a = *a + *b;   
    *b = (temp > *b) ? (temp - *b) : (*b - temp);  
}
//input:a=5;b=9
//output:a+b=14
//|a-b|=4

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    // Input two integers
    scanf("%d %d", &a, &b);

    // Call the update function
    update(pa, pb);

    // Print the updated values
    printf("%d\n%d", a, b);

    return 0;
}*/
//Arthematic pointers
#include <stdio.h>
int main(){
    float n1,n2;
    float *p1,*p2;
    float sum,sub,div,mul;
    printf("Enter the two values:");
    p1=&n1;
    p2=&n2;
    scanf("%f %f",p1,p2);
    sum=(*p1)+(*p2);
    sub=(*p1)-(*p2);
    mul=(*p1)*(*p2);
    div=(*p1)/(*p2);
    printf("sum=%.2f\n",sum);
    printf("sub=%.2f\n",sub);
    printf("mul=%.2f\n",mul);
    printf("div=%.2f\n",div);
return 0;  
}
//swapping of the numbers
/*#include <stdio.h>
int swap(int *p1,int *p2);
int main()
{
    int n1,n2;
    p1=&n1;
    p2=&n2;
    printf("Enter the values of n1,n2:");
    scanf("%d %d",&n1,&n2);
    printf("Values before swapping:");
    printf("n1%d n2%d",n1,n2);
    swap(&n1,&n2);
    printf("After swapping the values are:");
    printf("n1%d n2%d",n1,n2);
    return 0;
}

    
int swap(int *p1,int *p2){
   int temp;
   temp=n1;
   n1=n2;
   n2=temp; 
}*/
/**
 * C program to swap two number using call by reference
 */

/*#include <stdio.h>
void swap(int * num1, int * num2);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Before swapping in main n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);
    swap(&num1, &num2);
    printf("After swapping in main n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);
    return 0;
}
void swap(int * num1, int * num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2= temp;
    printf("After swapping in swap function n");
    printf("Value of num1 = %d \n", *num1);
    printf("Value of num2 = %d \n\n", *num2);
}*/
/*#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int *p1;
    p1=&a;//adress of the value which is stored in the pointer
    int b;
    scanf("%d",&b);
    int *p2;
    p2=&b;
    printf("value of a and b is %d and %d\n",a,b);
    printf("%d and %d\n",&a,&b);
    printf("%d and %d\n",*p1,*p2);
    printf("%d and %d\n",p1,p2);
    printf("%d and %d\n",&p1,&p2);
}*/
/*#include <stdio.h>
int main(){
    FILE *fp;
    char filename[100];
    char ch;
    int  line_count,word_count,char_count;
    line_count=0;
    word_count=0;
    char_count=0;
    printf("Enter file name:");
    gets(filename);
    fp=fopen("file.txt","r");
    if(fp){
        while(ch=getc(fp)!=EOF){
            if(ch!=''&& ch='\n'){
            ++char_count;
            }
            if(ch==''||ch=='\n'){
            ++word_count;
            }
            if(ch=='\n'){
                ++line_count;
            }
        }
    }
    if(char_count>0){
        ++line_count;
        ++word_count;
    }
    else{
        printf("Unable to open file");
       }
    printf("line count:%d\n",line_count);
    printf("word count:%d\n",word_count);
    printf("char count:%d\n",char_count);
    getchar();
    return 0;
}*/

