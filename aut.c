#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <stdbool.h>

int main() {

// Déclarations :

int w[4]={1,0,0}; // la chaine d'entrée
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
char *array[3];

char newC[5]; // to convert
char c;

FILE *file;
file = fopen("test.txt", "r");
if (file) {
    while ((c = getc(file)) != EOF){
    // convert int c  into  string newC
    snprintf(newC ,5, "%c", c);
}
  fclose(file);
}
// Split string into tokens

for (i = 0; i < 3; i++)
{
    p = strtok (&c, "/");
    array[i] = p;

}

// display tokens

for (i = 0; i < 3; i++){
    printf("%s\n", array[i]);
}

/* ----------------------------------- */
// Dialogue :
printf(" you entered : ");
for ( i = 0; i < 3; i++) {
  printf("%d ", w[i]);
}


// simulation de l'automate

for ( i = 0; i < 3; i++) {
  next_state = Aut[w[i]][state];
  state = next_state;
}

if (state == Final) {
  res = 9; // 9 vaut True
}

printf("\n (9 is True, 8 is False) your word is  %d \n",res);

}
