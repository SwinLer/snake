#include<stdio.h>
#include<windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "map3.h"
#include "initialise.h"
#include "snakemove.h"
#include "die.h"

struct snake *newhead;
struct FOOD *food;


int i;


int main(void)
{
start();
snakebody ();
 foody ();
 control();
 
 return 0;
 }


