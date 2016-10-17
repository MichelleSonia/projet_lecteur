class Audio
{
	private:
		Etat eC_;
		EtatLecture eL_;
		EtatPause eP_;
		EtatArret eA_;
	public:
		void actionLecture(); //lit ou met en pause selon l'etat
		void actionArret();
		void actionSuivant();
		void actionPrecedent();
		
// getteur se renseigner de l'état de l'attribut eCourant
	Etat Audio::GeteCourant(){ return eC_; }
	
// setteur modifier l'etat de l'attribut eCourant
	void Audio::SeteCourant(Etat eC){ eC_ = eC; }
}

