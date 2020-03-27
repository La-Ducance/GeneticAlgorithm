#include "Individu.h"

Individu::Individu()
{
    
	this->chromosome = (int*)malloc((this->tailleI+1)*sizeof(int));
	for(int i = 0; i < this->tailleI+1; i++){
		chromosome[i] = 0;		// un individu est constitué d'un ou de plusieurs chromosomes comosé à leur tour de gene
	}
}
//vector<int>Population(taillePop) // la maniere basique dont moi j'ai compris l'initialisation
//int taillePop

// on doit egalement definir la configuration des genes ??

Individu::~Individu()
{
    //dtor
}
