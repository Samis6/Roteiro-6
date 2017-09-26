#ifndef TELEVISAO_H_INCLUDED
#define TELEVISAO_H_INCLUDED

class Televisao{

    private:
	    int volume, canal;
    public:
	    Televisao(int, int);
	    void setVolume(int);
	    void setCanal(int);
	    int getVolume();
	    int getCanal();
		void modificaVolume();
		void modificaCanal();
		 
	    
};

#endif // TELEVISAO_H_INCLUDED

