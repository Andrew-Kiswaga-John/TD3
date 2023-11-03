#include <iostream>
using namespace std ;
class A
{ int n ;
float x ;
public :
A (int p = 2)
{ n = p ; x = 1 ;
cout << "** construction objet A : " << n << " " << x << "\n" ;
}
} ;
class B
{ 
	int n ;
    float y ;

   public :

  B (float v = 0.0)
 
{ 
	n = 1 ; y = v ;
   cout << "** construction objet B : " << n << " " << y << "\n" ;
}
} ;

  class C : public B, public A{ 
	   int n ;
       int p ;
       public :
        C (int n1=1, int n2=2, int n3=3, float v=0.0) : B(v), A(n1)
            {
			 n = n3 ; p = n1+n2 ;
             cout << "** construction objet C : " << n << " " << p <<"\n" ;
            }
} ;
int main()
{ 
  C c1 ;
  C c2 (10, 11, 12, 5.0) ;
}
// LA REPONSE EST LA SUIVANTE;
/*
1. Lorsque c1 est construit, les constructeurs de B et A sont appelés en premier, suivis du constructeur de C. 
 Les valeurs par défaut sont utilisées pour les arguments du constructeur.
 
** construction objet B : 1 0
** construction objet A : 1 1
** construction objet C : 3 3

2. Lorsque c2 est construit avec des valeurs spécifiques, les constructeurs de B et A sont appelés avec ces valeurs spécifiques, 
puis le constructeur de C est appelé. Les valeurs dans les messages des constructeurs reflètent les valeurs spécifiques fournies lors de la construction.

** construction objet B : 1 5
** construction objet A : 10 1
** construction objet C : 12 21
*/

