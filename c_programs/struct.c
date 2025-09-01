#include<stdio.h>
struct student
{
    char name[20];
    int id;
    char section[10];
    char college[50];
};
int main(){
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student s[n];
    int i;
    for(i=1;i<5;i++){
        printf("Student %d details:\n",i);
        printf("Enter Name:");
        scanf("%s",s[i].name);
        printf("Enter id:");
        scanf("%d",&s[i].id);
        printf("Enter section:");
        scanf("%s",&s[i].section);
        printf("Enter college:");
        scanf("%s",&s[i].college);
        printf("\n");
        printf("\n");
    }
    printf("Deatils of students:\n");
    for(i=1;i<5;i++){
    printf("Name=%s\n",s[i].name);
    printf("id=%d\n",s[i].id);
    printf("section=%s\n",s[i].section);
    printf("college=%s\n",s[i].college);
    printf("\n");
    printf("\n");
    }
    return 0;
}
/*#include <stdio.h>
#include <float.h> // Include for FLT_MAX and FLT_MIN constants

// Define the structure "Book"
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    // Declare variables to store details for three books
    struct Book book1, book2, book3;

    // Input details for the first book
    printf("Input details for Book 1:\n");
    printf("Title: ");
    scanf("%s", book1.title); // Assuming titles do not contain spaces
    printf("Author: ");
    scanf("%s", book1.author); // Assuming authors do not contain spaces
    printf("Price: ");
    scanf("%f", &book1.price);

    // Input details for the second book
    printf("\nInput details for Book 2:\n");
    printf("Title: ");
    scanf("%s", book2.title);
    printf("Author: ");
    scanf("%s", book2.author);
    printf("Price: ");
    scanf("%f", &book2.price);

    // Input details for the third book
    printf("\nInput details for Book 3:\n");
    printf("Title: ");
    scanf("%s", book3.title);
    printf("Author: ");
    scanf("%s", book3.author);
    printf("Price: ");
    scanf("%f", &book3.price);

    // Find the most expensive book
    struct Book mostExpensive;
    if (book1.price >= book2.price && book1.price >= book3.price) {
        mostExpensive = book1;
    } else if (book2.price >= book1.price && book2.price >= book3.price) {
        mostExpensive = book2;
    } else {
        mostExpensive = book3;
    }

    // Find the lowest priced book
    struct Book lowestPriced;
    if (book1.price <= book2.price && book1.price <= book3.price) {
        lowestPriced = book1;
    } else if (book2.price <= book1.price && book2.price <= book3.price) {
        lowestPriced = book2;
    } else {
        lowestPriced = book3;
    }

    // Display information for the most expensive book
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", mostExpensive.title);
    printf("Author: %s\n", mostExpensive.author);
    printf("Price: %.2f\n", mostExpensive.price);

    // Display information for the lowest priced book
    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", lowestPriced.title);
    printf("Author: %s\n", lowestPriced.author);
    printf("Price: %.2f\n", lowestPriced.price);

    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int id;
    char section;
    char class;
    char grade;
};
int main(){
    int n;
    printf("Enter the no of students:");
    scanf("%d",&n);
    //Allocate memory for an array of structures based on the user input
    struct student*student=(struct student*)malloc(n*sizeof(struct student));
    for(int i=1;i<=n;i++){
        printf("Student %d:",i);
        printf("Enter Name:");
        scanf("%s",student[i].name);
        printf("Enter id:");
        scanf("%d",&student[i].id);
        printf("Enter class");
        scanf("%s",&student[i].class);
        printf("Enter grade in A/B/C/D:");
        scanf("%s",&student[i].grade);
        printf("\n");
        printf("\n");
    }
    printf("Details of students:\n");
    for(int i=1;i<n;i++){
        printf("Student %d:",i);
        printf("Name:%s\n",student[i].name);
        printf("id=%d\n",student[i].id);
        printf("class=%s",student[i].class);
        printf("grade=%s",student[i].grade);
        printf("\n");
        printf("\n");
        printf("\n");
    }
    int i;
    struct student highestgrade;
    if(student[i].grade==A){
        highestgrade=student[i];
    }
    struct student lowestgrade;
    if(student[i].grade==D){
        lowestgrade=student[i];
    }
    printf("Highest grade student is\n");
    printf("%s\n",highestgrade.grade);
    printf("lowest grade student is\n");
    printf("%s\n",lowestgrade.grade);
    return 0;
}*/
/*#include <stdio.h>
void main(){
    float balance;
    short chance;
    char choice;
    int pin;
    balance=125100.69;
    chance=3;
    pin=125100;
    printf("Enter your 6 digit pin number:");
    scanf("%d",&pin);
    if(pin==125100){
        printf("Please proceed.");
    }
    else{
        printf("Wrong pin number.");
        printf("You are left with 2 chances");
    }
    printf("Press 1 to know your balance.\n");
    printf("press 2 to make with draw.\n");
    printf("Press 3 to pay.\n");
    printf("Press 4 to return card.\n");
    printf("enter 1/2/3/4 as per your choice:\n");
    switch(choice){
        case '1':

    }*/
