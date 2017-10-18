#include <stdio.h>
#include <stdlib.h>
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



// Dialogue :
printf(" you entered : \n");
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
