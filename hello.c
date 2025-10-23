#include <stdio.h>
int main() {
    //Declare variables
    char name[50]; //store a string(text)
    int age;       //stores an integer
    float height;  //stores a decimal number

    //ask for user input
    printf("enter your name:");
    scanf("%s",name);  //read a word (use %s for strings)

    printf("enter your age:");
    scanf("%d",&age);   //& means "address of" we give scanf memory location
    
    printf("enter your height in meters");
    scanf("%f",&height);

    //output everything back
    printf("\n--- PROFILE ---\n");
    printf("name: %s\n", name);
    printf("age: %d years\n",age);
    printf("height : %.2f meters\n",height); // .2f - 2 decimal places

    printf("\nhello %s! welcome to c programming\n",name);

    return 0;
}