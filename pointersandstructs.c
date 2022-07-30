#include <stdio.h>

struct person_t {
    char firstname[15];
    char lastname[15];
    char birthday[15];
    int age;
};

int sumTwoNumbers(int *total, int number1, int number2)
{
    *total = number1 + number2;
    return 0;
}
int printPersonByVal(struct person_t person){
    printf("By Value - %s %s is %d years old\n", person.firstname, person.lastname, person.age);
    return 0;
}
int printPersonByRef(struct person_t *person){
    printf("By Reference - %s %s is %d years old\n", person->firstname, person->lastname, person->age);
    return 0;
}
int main()
{

    char letter1 = 'a';
    char letter2 = 'b';
    int total = 0;
    
    //printf("Hello, World, %c, %x , %X, %d \n",letter1, letter1,letter1, letter1);
    int error = sumTwoNumbers(&total, 4, 7);
    printf("Total:  %d\n", total);

    struct person_t Mannix = {
        .firstname="Mannix",
        .lastname="Aylward",
        .age =52,
    };

    //strcpy(Mannix.firstname,"Mannix");
    //strcpy(Mannix.lastname,"Aylward");
    //strcpy(Mannix.firstname,"Mannix");
    //Mannix.age = 52;
    printf("By local - %s %s is %d years old\n", Mannix.firstname, Mannix.lastname, Mannix.age);
    error = printPersonByVal(Mannix);
    error = printPersonByRef(&Mannix);
    return 0;
}

