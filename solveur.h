#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#include "grille.h"
#include "victoire.h"
#include "coul-fct1_2.h"

char voisin_random(matrix M, int m);

void solveur(matrix M, int m, int nbCoup);

