#ifndef INDIVIDU_H
#define INDIVIDU_H


class Individu
{
    public:
        Individu();
        virtual ~Individu();
        // getter 
        //setter

// les entrés de l'utilisateurs
    private:
    int tailleI;
	int* chromosome; 
	float proba_Mut;
};

#endif // INDIVIDU_H
