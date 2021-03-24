#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//****passing array as a function argument***
// how to pass single dimension array as an argument in a function

 int arr_elements [] = {11,22,33,44,55} ;
 void print_arr_elements (int arr_elem [], int size );
 void print_arr_elements_2(int *arr_elem , int size );
 //------------------------------------------------------------------

 // how to pass single dimension array as an argument in a function
 int arr_elements_2d [][3] = {111,222,333,444,555,666,777,888,999} ;
 void print_arr_elements_2d (int arr_elem [][3] , int size_1 , int size_2 );
 //------------------------------------------------------------------

 void change_element_by_index (int arr_elem [] , int index , int value);
 //------------------------------------------------------------------
 // return array from function ...
 int * return_array (void);
 //----------------------------------------------------------------------------------
 //app on #include <string.h>
 char arr_1 []= "ahmed" ;
 char arr_2 []= "ahmed" ;

 //********************************====***********************************



int main()
{
  print_arr_elements ( arr_elements  , 3 );
  printf("\n");
  print_arr_elements_2(arr_elements  , 5 );
  printf("\n");

 //-----------------------------------------
  printf("-------------------------\n");
  print_arr_elements_2d(arr_elements_2d , 3, 3);
//------------------------------------------
  printf("-------------------------\n");
  change_element_by_index (arr_elements , 2 , 12);
  printf("\n");
  print_arr_elements_2(arr_elements  , 5 );
  printf("\n-------------------------\n");
  //----------------------------------------
   int *ptr = return_array (); //
   print_arr_elements (ptr, 5 );
   //--------------------------------------------------------------

   int var = strcmp(arr_1 , arr_2);
   printf ("\n%i\n", var);
    return 0;
}



//********************************======************************************

void print_arr_elements (int arr_elem [], int size ){

    for (int counter=0 ; counter < size ; counter++) {

        printf("%i\t", arr_elem [counter] );
    }
}
//--------------------------------------------------------------------

void print_arr_elements_2 (int *arr_elem , int size ){

    for (int counter=0 ; counter < size ; counter++) {

        printf("%i\t", arr_elem [counter] );
    }
}

//**************************************************************************

void print_arr_elements_2d (int arr_elem_2 [][3] , int size_1 , int size_2 ){


    int counter_1=0 , counter_2=0 ;
    for ( counter_1=0; counter_1 < size_1; counter_1++) {
       for ( counter_2=0; counter_2 < size_2 ; counter_2++){

        printf("%i\t", arr_elem_2 [counter_1][counter_2] );


       }
printf("\n");
    }
}
//---------------------------------------------------------------

void change_element_by_index (int arr_elem [] , int index , int value){

     arr_elem[index]= value ;

     printf(" new value of index (%i) = %i  " ,index  ,arr_elem[index] );

}
//----------------------------------------------------------------

 int * return_array (void) {

    // unsigned int arr []= {10,20,30,40,50}; , اتمسحت من ال stack frame
   static unsigned int arr []= {10,20,30,40,50};
   int counter=0 ;
   for (counter = 0 ; counter < 5 ; counter++){
    arr[counter]+=1;
   }
   return arr ; // return address of first element in array
}

