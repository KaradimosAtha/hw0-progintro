//This program finds the maximum length of the collatz conjecture in an specific border of nummbers 

#include <stdio.h>
#include <stdlib.h>

/*Bazoume to library stdio.h prokimenou na xrisimopihsoume th sinartisi printf , kai to stdlib.h gia na xrisimopoihsoumetin sinartish atoi */ 

int main(int argc , char**argv) {
long long int N ;

/*Epilegoume na xrhsimopoihsoume long long int oste na min ginei iperxilisi tou akaireou N , etsi bazoume san tipo long long int o opoios anaparistate me perisotera bytes sthn mnimi kai exei megalitero euros timon */

if (argc!=3){
printf("Program needs to be called as `./prog border1 border2`\n");
return 1; 
}
//To border1 einai to proto orisma kai to border2 to deutero 
//Jekiname to max=-1 h opoia einai mia xamili timi , sigoureuontas oti to max tha alajei apo tin proti epanalhch 
//Xrisimopoihoume enan metriti count o opoios tha metraei gia kathe arithmo to mikos collatz tou 

int border1 = atoi(argv[1]);
int border2 = atoi(argv[2]);
int max = -1 ;
int count;
int i ;

//An o user dosei arithmo < 0 (Diladi border1<0) tote to programma girnaei 0 
if (border1< -100000000 || border2> 100000000 ) {
 printf("You have to give  integer numbers that belong to this border [ -100000000, 100000000] \n") ;
return 1;
} 
if(border1 > border2 ) {
printf("border1 has to be < from border2\n");
return 1;
}
/* Exo valei kai kapoies alles periptoseis oi opoioes elenxoun oti to border1 < border2 kai oti o user dinei times apo
[-100000000 , 100000000] */

if (border1<0){
printf("%d\n" , 0 ) ;
return 1 ; }
else {

//Xrisimopoioume ena for loop kai ena while loop 
//H epanaliψh for einai gia na jekinisei apo to proto border kai na ftasei sto deutero aujanontas kathe fora to i kata 1 
//Eno h epanalhch while einai gia kathe enan apo tous arithmous na ipologizei to mikos collazt
//To count jekinaei apo 1 gia na metraei kai ton iparxon arithmo kai to exoume mesa sthn for gia na metraei gia kathe arithmo , ara prepei na janaginete 1 otan allazoume arithmo

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
