#include <stdio.h>
#include <stdlib.h>

int main(){

int counter = 2;
while (counter < 10){
    counter++;
    if( counter < 5) continue;
    else if (counter >= 6 ) break;
    printf("Inside Loop");
}

printf("Outside the loop");


    return 0;
}

// Question # 1
// int x = 1, y = 2 , z = 3;
// printf("x is %d", z);
// x =y;
//Answer: x is 3
//*****************************//
// Question # 2
// int x =1, y = 2, z = 3;
// x = y;
// printf("x is %d", (z+y-1)/x+x);
//Answer: x = 4 (None of the above)
//******************************//
// Question # 3
// int x = 1;
// ++x;
// printf("x++ is %d", x);
//Answer: x++ is 2 
//******************************//
//Question # 4
// int x = 100;
// printf("printf(x);");
//Answer: printf(x);
//******************************//
//Question # 5
//printf("is not \normal \to mess up");
//Answer: is not n
//                ormal     o mess 
//******************************//
//Question # 6
//printf("%d" , 7/2);
//Answer: 3
//******************************//
//Question # 7
//float x = (float) 7/3;
//printf("%.2f", x);
//Answer: 2.33 (none of the above) -- second float exact value, no second float rounds
//******************************//
//Question # 8
//int x = 3;
// if (x > 3 || x != 2) printf("TRUE");
// printf("FALSE");
//Answer: TRUEFALSE -- || is OR
//******************************//
//Question # 9
//int x = 3;
// switch( x + 1 ){
//     case 3: printf("TRUE");
//     case 4: printf("TRUE");
//     default: printf("TRUE");
// }
// printf("TRUE");
//Answer: TRUETRUETRUE 
//******************************//
//Question # 10
//int n = 0;
// for( n = 7 ; n < 0 ; n-- ){
//     printf("*****\n");
//     n = n + 1 ;
// }
// printf("n = %d", n);
//Answer: n = 7 -- before loop = 0 , inside the loop 7 - 1 = 6 , after the loop 6 + 1 = 7
//******************************//
//Question # 11
// int n = 3 , x = 10;

// while ( n != 3 || x > 5 ){
//     n = n + 5;
//     if ( n > 7 ){
//         printf("%d\n", n);
//         break;
//     }
// }
//Answer: 8 
//******************************//
//Question # 12
// int n = 3;
// while( n > 1 ){
//     n = n + 5; 
//     if(n <= 7 ){
//         break;
//         printf("%d\n", n);
//     }
//     printf("%d", n);
// }
//Answer: No stop (none of the above)
//******************************//
//Question # 13
// int i = 2;
// printf("One");
// if( i > 2 )
// printf("Two");
// else
// printf("Three");
// printf("Four");
//Answer: One Three Four
//******************************//
//Question # 14
// char option = 'h';
// switch(option){
//     case 'H': printf("Hello");
//         break;
//     case 'W': printf("Welcome");
//         break;
//     case 'B': printf("B");
//         break;
//      default: printf("Take care");           
// }
//Answer: Take care - default value 
//******************************//
//Question # 15
//int counter = 2;
// while (counter < 10){
//     counter++;
//     if( counter < 5) continue;
//     else if (counter >= 6 ) break;
//     printf("Inside Loop");
// }

// printf("Outside the loop");
//Answer





