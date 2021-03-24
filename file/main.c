#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person_info {

    int id ;
    char f_name [20];
    char s_name [20];

}person_info_t;

FILE *ptr_file ,*ptr_file_append,*ptr_file_read ;
char input_char;

person_info_t person ;
int main()
{




    // r -> read mode
    // r+ -> read & write mode
    // w -> write mode
    // w+ -> write & read mode
    // a -> append mode
    // a+ -> append & read mode

    ptr_file = fopen ("data.txt" , "w");
    if (NULL  == ptr_file ) {
        printf("file dosnt exist !! \n");
    }
    else {
        printf ("file exist !!\n");

        putc('A' ,ptr_file);
        putc('\n',ptr_file);
        putc('D' ,ptr_file);
        putc('\n',ptr_file);

        printf("enter the Data : \n");
         while((input_char = getchar()) != 10 /* ascii code for enter*/){
            putc(input_char, ptr_file);
        }

        fclose(ptr_file);
    }

//-------------------------------------------------------------------------------------

    printf("==============\n");
    ptr_file = fopen("data.txt", "r");

    if(NULL == ptr_file){
        printf("File doesn't exist !!\n");
    }
    else{
        printf("Data : \n");

        while((input_char = getc(ptr_file)) != EOF){
            putchar(input_char);
        }

        putchar('\n');
        fclose(ptr_file);
    }


    ptr_file_append = fopen ("person.txt" , "a");
    ptr_file_read = fopen ("person.txt" , "r");
    if ((NULL == ptr_file_read) && (NULL == ptr_file_append )) {
        printf("file dosnt exist !! \n");
    }
    else {
        printf ("file exist !!\n");

         person.id = 5 ;
         strcpy(person.f_name,"Ahmed");
         strcpy(person.s_name,"Khaled");

         fprintf(ptr_file_append , " %s %s %i \n" , person.f_name , person.s_name , person.id);
         fclose(ptr_file_append);
         printf("=========\n");
         printf("Data : \n");
         while(!feof(ptr_file_read)){
             fscanf(ptr_file_read, "%s %s %i\n", person.f_name, person.s_name, &person.id);
             printf("%s %s %i\n", person.f_name, person.s_name, person.id);
        }

    }





    return 0;
}
