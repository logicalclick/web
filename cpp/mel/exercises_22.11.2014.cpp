#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) 
{

     char s1[]= "Hello, Mel. Today is sunday. Let's go party!";
fprintf (stdout,"%s -> %d\n",s1,strlen(s1) );

	
	return 0;
}

=============================================================

#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) 
{

     char s1[]= "Hello, Mel. Today is sunday. Let's go party!";

	strcat(s1, "Melaniya!");
fprintf (stdout,"%s -> %d\n",s1,strlen(s1) );
	return 0;
}

===============================================
Подава брой символи "strlen" :
fprintf (stdout,"strlen -> %s -> %d\n",s1,strlen(s1) );

===============================================

Добавя "strcat":
strcat(s1, "- From team! :)");

================================================

Сравнява "strcmp":
strcmp("Hello", "Hello") = 0
strcmp(s1, "Hello") = 1
strcmp("Hello", s1) = -1

================================================
Търси съвпадение на символ в стринга "*strchr" и дава съдържание:
fprintf (stdout,"strchr -> %c\n",*strchr("Hello", 'H'));

ако не ползване * се получава НОТА :) превърта;
#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) 
{

    char s1[]= "Hello, Mel. Today is sunday. Let's go party!";
    
  	strcat(s1, "- From team! :)");
  	  	
fprintf (stdout,"strcmp -> %d\n",strcmp("Hello", "Hello"));

fprintf (stdout,"strchr -> %c\n",strchr("Hello", 'H'));

fprintf (stdout,"strlen -> %s -> %d\n",s1,strlen(s1) );
	return 0;
}
================================================
адрес за обръщане на масив в обратен ред

http://www.introprogramming.info/intro-csharp-book/read-online/glava7-masivi/

================================================

#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) 

{

    char s1[]= "Hello, Mel. Today is sunday. Let's go party!";
    int i;

fprintf (stdout,"%s -> %d\n",s1,strlen(s1) );

for (i=0; i<strlen(s1);i++)

fprintf (stdout,"[%c]",s1[i]);

	return 0;
}

=============================================

#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) 

{

    char s1[]= "Hello, Mel. Today is sunday. Let's go party!";
    int i;

fprintf (stdout,"%s -> %d\n",s1,strlen(s1) );

for (i=strlen(s1)-1;i>=0;i--)

fprintf (stdout,"%c",s1[i]);

	return 0;
}

=====================================
Функция за въвеждане на стойности за масив

float arr_f [50];
for (i=0;i<10;i++) {
     fprintf(stdout,"Enter a numer :");
     fscan (stdin,"%f", &arr_f[i]);
}
=====================================

