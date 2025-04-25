#include <iostream>

using namespace std;

class research 
{
		public :	
				virtual	void	hydrogenEngine() = 0;
				virtual	void	atomEngine() = 0;
				virtual	int	    electricngine() = 0;
		
};

class subresearch : public research 
{
	public:
	
		void hydrogenEngine()
		{
			cout << " hydrogen engine" << endl;
		}
		
		void atomEngine()
		{
			cout << " atomengine" << endl;
		}
		int electricngine()
		{
			cout << " electric engine " << endl;
			return 760;
		}
	
};

int main()
{
	
	subresearch HE, AE, EE;
	
	

	
	HE.hydrogenEngine();
	AE.atomEngine();
	EE.electricngine();
	
	
	
	
	return 0;
}