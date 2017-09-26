#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED

class Relogio{

    private:
	    int hora, minuto, segundo;

    public:
	    Relogio(int, int, int);
	    void setHorario(int, int, int);
	    int getHora();
	    int getMinuto();
	    int getSegundo();

        void avancarHorario();

};



#endif // RELOGIO_H_INCLUDED
