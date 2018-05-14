#include <stdio.h>
#include <stdlib.h>

#define N 5

struct Coord {
  int x;
  int y;
};

struct Mov {
  Coord pos;
  Coord vel;
  Coord acc;
  double (*haz) ();
};


int main(){

    struct Mov func [N] = {{{},{}}, {{},{}}, {{},{}}}

  return EXIT_SUCCESS;
}
