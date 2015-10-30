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
  char date[max];
  char name[max];
  char city[max];
  char address[max];
  char present[max];
} Request;

 char* inputFromConsole(char*,char*);
 char* selectPresent(int,char*);

int main()
{
	
	//const Present p = {"baba", "auto", "labda", "kirako", "szinezo", "konyv"};
	//printf("present: %s ", presents[0]);
	Request r = (Request){"19941212", "Katona", "Rum", "trelll", "konyv" };

	printf("\nr.present: %s", r.present);

	char* str;
	printf("\nselectPresent: %s", selectPresent(2,str));
	
		/*

	//printf("%s\t%s\t%s\t%s\t%s\t%s",p.baby,p.car,p.ball,p.puzzle,p.colorB,p.book);
	printf("\n-------------------");
	printf("\nbeker stdi");
	char out[max];
	inputFromConsole("\nAdja meg az out-t",out);*/

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

//char* presents[]  = {"baba", "auto", "labda", "kirako", "szinezo", "konyv"};
char* selectPresent(int which, char* str)
{
	int bool = 100;
	char* in;
	while(bool)
	{
		//printf("Nem jo ajandek! Valassz 1-6 opciok kozul:");
		which = atoi(inputFromConsole("\nValassz 1-6 opciok kozul:", in));
		if(which == 1) str = "baba";
		if(which == 2) str = "auto";
		if(which == 3) str = "labda";
		if(which == 4) str = "kirako";
		if(which == 5) str = "szinezo";
		if(which == 6) str = "konyv";

		if( (which > 6 || which < 1) ) 
		{
			printf("\nNem jo ajandek!");
		} 
		else
		{
			bool = 0;
		}

	}
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
*	struct Present; 
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