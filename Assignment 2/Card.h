
//MacroGuards
#ifndef NEW_CARD
#define NEW_CARD

//Libraries
#include <sstream>

//Namespace
using namespace std;

//Class Decleration
class Card
{
	public:
		//Constructor
		Card();
		//De-Constructor
		~Card();

		//Setters
		void setFace(string newFace);
		void setFaceUp(bool newFaceUp);
		void setValue(int newValue);

		//Getters
		string getFace();
		int getValue();
		bool getFaceUp();

	private:
		string face;
		int value;
		bool faceUp;

};
//Operator overloading (grab ostream from std namespace)
std::ostream &operator<<(std::ostream &os, Card card);
#endif