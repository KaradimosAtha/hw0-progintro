//This program finds the maximum length of the collatz conjecture in an specific border of nummbers 

#include <stdio.h>
#include <stdlib.h>

/*Βαζουμε τη βιβλιοθηκη stdio.h προκειμενου να χρησιμοποιησουμε τη συναρτηση printf , και το stdlib.h  για να χρησιμοποιησουμε τη συναρτηση atoi  */ 

int main(int argc , char**argv) {
long long int N ;

/*Επιλεγουμε να χρησιμοποιησουμε long long int  ωστε να μην γινει υπερχηλειση του ακεραιου N , ετσι βαζουμε σαν τυπο  long long int o οποιος αναπαρισταται με περισσοτερα bytes στη μνημη  και εχει μεγαλυτερο ευρος τιμων  */

if (argc!=3){
printf("Program needs to be called as `./prog border1 border2`\n");
return 1; 
}

//Το border1 ειναι το πρωτο ορισμα (το low ) και το border2 το δευτερο (high)

//Ξεκιναμε το max=-1 που ειναι μια χαμηλη τιμη  προκειμενου να αλλαξει μεσα στο loop

//Χρησιμοποιουμε εναν μετρητη  count ο οποιος θα μετραει  για καθε αριθμο το μηκος collatz του 

int border1 = atoi(argv[1]);
int border2 = atoi(argv[2]);
int max = -1 ;
int count;
int i ;

if (border1< -100000000 || border2> 100000000 ) {
 printf("You have to give  integer numbers that belong to this border [ -100000000, 100000000] \n") ;
return 1;
} 
if(border1 > border2 ) {
printf("border1 has to be < from border2\n");
return 1;
}
/* Εχω βαλει και καποιες αλλες περιπτωσεις  οι οποιες  ελεγχουν οτι το border1 < border2 και οτι ο χρηστης δινει τιμες απο 
[-100000000 , 100000000] */

if (border1<0){        //Αν ο χρηστης δωσει αριθμο < 0 (Δηλαδη border1<0) τοτε το προγραμμα γυρναει  0
printf("%d\n" , 0 ) ;
return 1 ; }
else {

//Χρησιμοποιουμε ενα for loop και ενα while loop
 
//Το for loop  ειναι για να ξεκινησει απο το πρωτο border και να φτασει στο δευτερο αυξανοντας καθε φορα το  i κατα  1 

//Ενω το while loop ειναι για καθε εναν απο τους αριθμους να υπολογιζει το μηκος collatz του και τερματιζει οταν ο αριθμος μετα απο πραξεις καταληξει στο 1

//Το count ξεκιναει με  1 για να μετραει και τον υπαρχον αριθμο και το εχουμε μεσα στη for για να μετραει για καθε αριθμο , αρα πρεπει να ξαναγινεται  1 οταν αλλαζουμε αριθμο 

for (i = border1; i <= border2; ++i) 
{
N=i ;     //Βαζουμε N=i γιατι εαν χρησιμοποιησω μονο μια μεταβλητη , η τιμη της θα αλλαζει συνεχως μεσα στη for με αποτελεσμα οταν γυρναει πισω στη συνθηκη 
count = 1;     //να γυνονται απειρες επαναλαψεις αφου δεν θα φτασει ποτε στο border2   
if (N==1) {
count = 1 ;
} 
while (N!=1) {

if ( N % 2 == 0 ) {   // Εαν ο αριθμος ειναι αρτιος τοτε το Ν γινεται N/2
N = N / 2 ;
 } 
else { 
N = (3 * N)  +1 ;    // Αλλιως (που σημαινει οτι ειναι περιττος) γινεται 3*Ν +1 
}

count = count + 1 ;  
} 
if ( count > max ) {   
max = count ;                
} //Εξω απο την while οταν εχει υπολογιστη το μηκος collatz του αριθμου το συγκρινουμε με το max και στο τελος εξω απο το for loop το τυπωνουμαι 
}
}

{
printf("%d\n" , max );
return 0; 
}
} 
