#include<stdio.h>
#include<stdlib.h>
#include<ncurses.h>
#include<time.h>
#include<unistd.h>
#define VMAX 9
#define N 3
#define DELTA_T 0.001

typedef struct {
    double x;
    double y;

}Coord2;
typedef struct{
    bool vivo;
    Coord2 pos;
    Coord2 vel;
    Coord2 acc;
}Sprite;

void iniciar(Sprite que[N]){
    for (int i = 0 ; i<N ; i++){
        que[i].pos.x = 0;
        que[i].pos.y = 0;
        que[i].vel.x = rand() % VMAX + 1.;
        que[i].vel.y = rand() % VMAX + 1.;
        que[i].acc.x = 0.;
        que[i].acc.y = -9,98;
    }
}

void actualizar(Sprite movil[N]){
    for(int i=0 ; i<N; i++){
        movil[i].vel.x +=movil[i].acc.x * DELTA_T;
        movil[i].vel.y +=movil[i].acc.y * DELTA_T;
        movil[i].pos.x +=movil[i].vel.x * DELTA_T;
        movil[i].vel.y +=movil[i].vel.y * DELTA_T;
    }

}
void pintar (Sprite dibujo[N]){
    for(int i = 0;i<N;i++){
        mvprintw(LINES /2 - dibujo[i].pos.y,COLS /2+ dibujo[i].pos.x, "*" );

    }
    refresh();
}
int main () {
    Sprite obj[N];

    initscr();
    srand(time(NULL));
    iniciar(obj);
    while(1);{
        actualizar(obj);
        pintar(obj);
        usleep(DELTA_T * 1000000);
    }
    endwin();


    return 0;
}
