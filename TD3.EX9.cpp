#include <iostream>
using namespace std;

template<class T> class point
{
  T x, y; //coordonnees
  
  public:
  point ( T abs, T ord ){
  x = abs;
  y = ord;
  
  }
  
  void affiche () ;
};

template <class T> void point<T>::affiche ()
{
	cout << "Coordonnees : " << x << " " << y << "\n" ;
}

int main(){
	
point <int> p (60, 65) ;
p.affiche () ;

return 0;
}
	
/* 
  ça va afficher
 
  1. Coordonnees : < A. Parce que les valeurs 60 et 65 sont pas de type char et puisqu'on a utiliser un template, ça va afficher un valeur
   
  2. Pour resoudre ce probleme, on doit utiliser le type int qui correspond à 60 et 65  
   
*/
  
