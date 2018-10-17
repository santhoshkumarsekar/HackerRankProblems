/* In Variadic functions we don't need to declare the number arguments in the method definition
   the normal fuction should be like
      fun(int a,int b,int c){
      //definition
      }
      fun(1,2,3) //function call
       
       but the variadic function 
         fun(int number_of_args,...){
         //definitions
         }
      assume number_of_args = 6;
         fun(number_of_args,1,2,3,4,5,6);  //call
*/

//example progs

#include<stdarg.h>  
#include<stdio.h>
int sum( int no_args, ... ) { 
int sum = 0;
va_list ls;
//Initiailizing the list with ... args
va_start( ls, no_args );
for( int i = 0; i < no_args; i++ )
sum += (int) va_arg( ls, int );   //acessing elements on the list that should be added with sum variable
 va_end( ls );
return sum;
}
int main( void ) {
printf("%d", sum( 3, 1, 2 ,3 ) );
return 0;
}

// o/p is: 6
