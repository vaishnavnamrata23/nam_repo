#define ROW 3
#define COL 4
#include<stdio.h>
void main ()
{
int i, j, matl[ROW][COL] ,mat2[ROW][COL] ,mat3[ROW][COL] ;
printf ("Enter matrix matl (%dx%d) row-wise .: \n" ,ROW, COL) ;
for(i=0;i<ROW;i++)
	for(j=0;j<COL;j++)
		scanf ("%d", &mat1 [i][j]);
    printf ("Enter matrix mat2 (%dx%d) row-wise");
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			scanf ("%d", &mat2 [i][j]);

/*Addition*/
		for(i=0;i<ROW;i++)
			for(j=0;j<COL;j++)
				matl1[i][j] =matl2[i][j] +matl3[i][j];
    printf ("The resultant matrix mat3 is:\n"0);
		for(i=0;i<ROW;i++)
}
			for(j=0;j<COL;j++)
printf ("%5d" ,mat3 [i][j]) ;
printf("\n");
}
}
