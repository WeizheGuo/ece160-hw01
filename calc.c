#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	double f, a, b;
	a = atof (argv[2]);
	b = atof (argv[3]);
	if (strcmp (argv[1],"+") == 0)
	{f= a + b;
		printf ("%f\n",f);
	}
    if (strcmp (argv[1],"-") == 0)
    {f= a - b;
        printf ("%f\n",f);
    }
    if (strcmp (argv[1],"x") == 0)
    {f= a * b;
        printf ("%f\n",f);
    }
    if (strcmp (argv[1],"/") == 0)
    {f= a / b;
        printf ("%f\n",f);
    }
    	return 0;
}
