#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()

{
int i;

i=5;

while (i!=0);

fprintf(stdout,"OK");

}

/* chaka */

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()

{
int i;

i=5;

while (i);

fprintf(stdout,"OK");

}
/* chaka */


#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()

{
int i;

i=5;

while (i-5);

fprintf(stdout,"OK");

}
/* dava 0k */


#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()

{
int i;

i=0;

while (i);

fprintf(stdout,"OK");

}
/* dava 0k */

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()

{
int i;

i=5;

while (i=0);

fprintf(stdout,"OK");

}
/* dava 0k */

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()

{
int i;

i=5;

while (i!=0);

fprintf(stdout,"OK");

}

/* cikli */

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()

{
int i;

i=5;

while (i=0);

fprintf(stdout,"OK");

}
/* OK -greshka.... */


#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()

{
int i;

i=5;

while (i='0');

fprintf(stdout,"OK");

}

/* _ raboti.. */


#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()

{
int i;

i=5;

fprintf(stdout, "%d\n", i = 0);

while (i=0);

fprintf(stdout,"OK");

}
/* 0 i OK  */


#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()

{
int i;

i=5;

fprintf(stdout, "%d\n", i = '0');

while (i='0');

fprintf(stdout,"OK");

}
/* O48 koda na 0 */


Random number generator CPP use 'rand' +  #include <stdlib.h> i #include <time.h> za time



#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main ()

{
int chislo, i;

1 + rand()%101;

fprintf(stdout,"%d",rand);
}

/* 4281800 */

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main ()

{
int chislo, i;

rand()%100;

fprintf(stdout,"%d",rand);
}

/* 4281768 */

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
int chislo, i;

srand(time(NULL));

rand()%100;

fprintf(stdout,"%d",(time(NULL)));

}

/* sekundite rastqt vseki pyt  */

% 100 dava rezultat poslednite 2 cifri, kato nai -golqmoto e 99, nai malkoto e 0
%50 dawa rezultata 2 cifri, no nai golqmoto e 49 nai malkoto e 0
zatowa prawim + 1 za da nqmame nula w rezultata i da e istina.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main ()

{
int r_number;
int guess;
int i;

srand(time(NULL));

r_number = rand()%100 +1;

for (i=0; i<5; i++){ 

puts("Make a guess:");

fscanf(stdin,"%d",&guess);
if(r_number>guess) puts ("Go up");
else if (r_number<guess) puts ("Go doun");
else fprintf(stdout,"Congratulations!You win. [%d]", r_number);

}
return EXIT_SUCCESS; 

}

/* Make a gues 5 times next Congratulations!You win
after 4 times can do it again, after 5 times not win more go up not final text*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main ()

{
int r_number;
int guess;
int i;

srand(time(NULL));

r_number = rand()%100 +1;

for (i=0; i<5; i++){ 

puts("Make a guess:");

fscanf(stdin,"%d",&guess);
if(r_number>guess) puts ("Go up");
else if (r_number<guess) puts ("Go doun");
else if (i>5) fprintf(stdout,"You wose. May be another time. BUY [%d]", r_number);
else fprintf(stdout,"Congratulations!You win. [%d]", r_number);

}

fprintf(stdout,"%d", r_number);

}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main ()

{
int r_number;
int guess;
int i;

srand(time(NULL));

r_number = rand()%100 +1;

for (i=0; i<5; i++){ 

puts("Make a guess:");

fscanf(stdin,"%d",&guess);
if(r_number>guess) puts ("Go up");
else if (r_number<guess) puts ("Go doun");
else if (i>5)  fprintf(stdout,"You wose. BUY [%d]", r_number);
else fprintf(stdout,"Congratulations!You win. [%d]", r_number);

}

fprintf(stdout,"Neizvestnoto chislo e %d. Opitaite pak", r_number);

}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main ()

{
int r_number;
int guess;
int i;

srand(time(NULL));

r_number = rand()%100 +1;

for (i=0; i<10; i++){ 

puts("Make a guess:");

fscanf(stdin,"%d",&guess);
if(r_number>guess) puts ("Go up");
else if (r_number<guess) puts ("Go doun");

else {fprintf(stdout,"Congratulations!You win. [%d]", r_number); break;}


}

fprintf(stdout,"Neizvestnoto chislo e %d . Opitaite pak.", r_number);

}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#define MAX_TRY 10

int main ()

{
int r_number;
int guess;
int i;

srand(time(NULL));

r_number = rand()%100 +1;

for (i=0; i< MAX_TRY; i++){ 

puts("Make a guess:");

fscanf(stdin,"%d",&guess);
if(r_number > guess) 
        fprintf(stdout,"%s",(i==MAX_TRY-1)? "":"Go up!\n");
else if (r_number<guess)
        fprintf(stdout, "%s" ,(i==MAX_TRY-1)? "":"Go down!\n");

else {

  fprintf(stdout,"Congratulations!You win. [%d]", r_number); break;}

}
if (r_number!= guess) fprintf (stdout, "You lost! The nember was %d. Play agayn/n",r_number);

return EXIT_SUCCESS;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iostream>

#define MAX_TRY 10

int main ()

{
int r_number;
int guess;
int i;

srand(time(NULL));

r_number = rand()%100 +1;

for (i=0; i< MAX_TRY; i++){ 

puts("Make a guess:");

fscanf(stdin,"%d",&guess);
if(r_number > guess) 
        fprintf(stdout,"%s",(i==MAX_TRY-1)? "":"Go up!\n");
else if (r_number<guess)
        fprintf(stdout, "%s" ,(i==MAX_TRY-1)? "":"Go down!\n");

else {

  fprintf(stdout,"Congratulations!You win. [%d] (%d) Point", r_number, 100-(i*10)); break;}

}
if (r_number!= guess) fprintf (stdout, "You lost! 0 point .The nember was %d. Play agayn\n",r_number);

return EXIT_SUCCESS;
}


