#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define max 40

typedef struct _Present
{
	char baby[max];
	char car[max];
	char ball[max];
	char puzzle[max];
	char colorB[max];
	char book[max];
} Present;

typedef struct _Request
{
  char date[8];
  char name[max];
  char city[max];
  char address[max];
  struct Present* present;
} Request;

char* inputFromConsole(char*,char*);

int main()
{
	Request r;
	
	printf("%s\t%s\t%s\t%s\t%s\t%s",p.baby,p.car,p.ball,p.puzzle,p.colorB,p.book);
	printf("\n-------------------");
	printf("\nbeker stdi");
	char out[max];
	inputFromConsole("\nAdja meg az out-t",out);

	return 0;
}

char* inputFromConsole(char* msg, char* str)
{
	//char str[80];
  int i;

  printf("%s: ", msg);
  fgets(str, 25, stdin);

  /* remove newline, if present */
  i = strlen(str)-1;
  if( str[ i ] == '\n') 
      str[i] = '\0';

  printf("\nThis is your string: %s", str);
	return str;
}


/*
*  Télapu lassan beletörődik, hogy mostantól tényleg ő a Mikulás, 
*  így a manókkal és a rénszarvasokkal együtt készül a Karácsonyra. 
*  Sorban érkeznek hozzá a gyerekek ajándékkérő levelei. 
*  Mindenki csak egyet kívánhat! 
*  A manók a levelek alapján a kéréseket egy fájlban tárolják, 
*  amely tartalmazza a beérkezés dátumát, a gyerek nevét, a várost, 
*  azon belüli pontos címet és a kért ajándékot. A manók idén csak babát, autót, 
*  labdát, kirakót, színezőt és könyvet visznek ajándékba!
*  
*  Készítsünk C programot, amellyel lehessen levelet írni Télapunak 
*  (billentyűzeten keresztül adjuk meg az adatokat), majd az adatok tároljuk fájlba.
*  Ne felejtsük el, hogy mindenki csak egyet kérhet!
*  Az utolsó kérés maradjon érvényes! Lehessen listázni a manók fájlját, 
*  szűrhessük városra, ajándékra. Adjuk meg a listázások végén az összesítéseket is,
*  azt hogy hány kérés érkezett.
*/

/*
*  struct Request;
*  Kérés típus, adattagok:
*  	- date, format: char[8]	(YYYYMMDD / ÉÉÉÉHHNN)
*	- name, format: char*
*	- city, format: char*
*	- address, format: char* (Petofi_Sandor_Street_46)
*	- present, format: Present struct{...}
*
*	enum Present; 
*	- baby
*	- car
*	- ball
*	- puzzle
*	- colorB
*	- book
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*/