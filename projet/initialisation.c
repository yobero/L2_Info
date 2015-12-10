#include "structure.c"

PION initialisationPion(int a)
{
	PION p;
	
	if(a==1)
	{
		p.centre.y = PM;
		p.coul = coulPJ1;
	}
	else
	{
		p.centre.y = l-PM;
		p.coul = coulPJ2;
	}
	p.centre.x = M;
	p.rayon = R;
	
	return p;
}

MUR initialisationMur(int a)
{
	MUR m;
	
	if(a==1)
		m.coul = coulMJ1;
	else
		m.coul = coulMJ2;
	
	int i=0;
	int j=0;
	while(i<NBM)
	{
		while(j<2)
		{
			m.tab[i][j].x = INIT;
			m.tab[i][j].y = INIT;
			j++;
		}
		j=0;
		i++;
	}
	
	m.i = 0;
	
	return m;
}

JOUEUR initialisationJoueur(int a)
{
	JOUEUR j;
	
	j.p=initialisationPion(a);
	j.m=initialisationMur(a);
	
	return j;
}