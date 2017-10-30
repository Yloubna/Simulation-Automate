#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <stdbool.h>

int main() {

// Déclarations :

//int w[4]={1,0,0}; // la chaine d'entrée
int i;
int Final=1; // l'état final
int Aut[2][2]={
  {1,1},
  {0,-1}
}; // table de transitions

int state=0;
int next_state;
int res = 8; // 8 vaut False

/* --- read w from file ----- */

char *p; // to split
char *array[5];

int newC[3]; // to convert

char c; // to read
FILE *file;
file = fopen("test.txt", "r");

if (file) {
    printf("le fichier contient : ");
    while ((c = getc(file)) != EOF){
    putchar(c);

}

}
fclose(file);
// Split string into tokens

for (i = 0; i < 5; i++){
  // Split string into tokens
  p = strtok (&c, "-");
  array[i] = p;
}

for (i = 0; i < 3; i++)
{
    // convert string c  into  int newC
    newC[i] = atoi(array[i]);

    // display tokens
    printf("%d\n", newC[i]);
}



// simulation de l'automate

for ( i = 0; i < 3; i++) {
  next_state = Aut[newC[i]][state];
  state = next_state;
}

if (state == Final) {
  res = 9; // 9 vaut True
}

printf("\n (9 is True, 8 is False) your word is  %d \n",res);


/* ----------------------------------- */
// // Dialogue :
// printf(" ------ sans lecture de fichier ----- \n you entered : ");
// for ( i = 0; i < 3; i++) {
//   printf("%d ", w[i]);
// }
//
//
// // simulation de l'automate
//
// for ( i = 0; i < 3; i++) {
//   next_state = Aut[w[i]][state];
//   state = next_state;
// }
//
// if (state == Final) {
//   res = 9; // 9 vaut True
// }
//
// printf("\n (9 is True, 8 is False) your word is  %d \n",res);
//
// }
}
