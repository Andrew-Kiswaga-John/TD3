#include <iostream>
using namespace std ;


class erreur
{ public :
int num ;
} ;
class A
{ public :
A(int n)
{ if (n==1) { erreur er ; er.num = 999 ; throw er ; }
}
} ;

int main()
{ void f();
try
{ f() ;
}
catch (erreur er)
{ cout << "dans main : " << er.num << "\n" ;
}
cout << "suite main\n" ;
} 

void f()
{ try
{ A a(1) ;
}
catch (erreur er)
{ cout << "dans f : " << er.num << "\n" ;
}
}
/*
Lors de l'exécution, le code suit ces étapes :

Le constructeur A est appelé avec l'argument 1 dans la fonction f, ce qui lève l'exception d'erreur.

L'exception est interceptée dans le bloc catch de la fonction principale, qui imprime le message approprié et la valeur de er.num.

  dans f : 999
  suite main
  */
