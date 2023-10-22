//This program finds the maximum length of the collatz conjecture in an specific border of numbers 

#include <stdio.h>
#include <stdlib.h>

//We include the stdio.h library for the function printf and the stdlib.h for the faction atoi 

int main(int argc , char**argv) {
long long int N ;

/*We use long long int because if we give for example the border of 10 1000000000 with int the program will return a negative number , because as the program does the calculations it can surpass 2.147.483.647 which is the maximum possible number an integer can take*/

if (argc!=3){
printf("Program needs to be called as `./prog border1 border2`\n");
return 1; 
}

//The border1 is the first number the user gives and border2 the second one
//We begin max with -1 and we add a counter in order to count the collatz length of a number

int border1 = atoi(argv[1]);
int border2 = atoi(argv[2]);
int max = -1 ;
int count;
int i ;

//If the user gives a negative number the program has to return 0 else it starts calculating the lenght of this number
if (border1< -100000000 || border2> 100000000 ) {
 printf("You have to give  integer numbers that belong to this border [−100000000, 100000000] \n") ;
return 1;
} 

if (border1<0){
printf("%d\n" , 0 ) ;
return 1 ; }
else {

//We use the loop for and while in order to calculate the lenght
//H epanaliψh for einai gia na jekinisei apo to proto border kai na ftasei sto deutero aujanontas kathe fora to i kata 1 
//Eno h epanalhch while einai gia kathe enan apo tous arithmous na ipologizei to mikos collazt

for (i = border1; i <= border2; ++i) 
{
N=i ; 
count = 1;
if (N==1) {
count = 1 ;
} 
while (N!=1) {

if ( N % 2 == 0 ) { 
N = N / 2 ;
 } 
else { 
N = (3 * N)  +1 ;
}

//Ean o arithmos einai zigos tote to N ginete N/2 allios ean einai perittos to N ginete 3*N +1

count = count + 1 ; 
} 
if ( count > max ) { 
max = count ; 
} 
}
}

{
printf("%d\n" , max );
return 0; 
}
} 

