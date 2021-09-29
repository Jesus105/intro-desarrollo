#include <stdio.h>
#include <string.h>

    typedef char NAME[20];
    typedef int AGE;
    typedef char SURENAME[20];

    typedef struct{
        NAME name;
        AGE age;
        SURENAME surename;

    } PERSON;

int main(){

    PERSON me;

    strcpy(me.name, "Jesus");
    strcpy(me.surename, "Mendez");
    me.age = 18;

    printf("Yo me llamo %s %s, y tengo %d anios. \n", me.name, me.surename, me.age);

    return 0;
}