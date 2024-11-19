# include <iostream>
# include <cmath>
# include <string>

float somme (float a, float b) {
    return a + b ;
}

float produit (float a, float b) {
    return a * b ;
}

float soustraction (float a, float b) {
    return a - b ;
}

float division (float a, float b) {
    if (b != 0) {
        float q = a/b ; 
    } else {
        std::cout << "erreur, division par zero" << std:: endl ; 
    } 
    return a / b ;
}

float cosinus (float a) {
    return cos(a) ;
}

float sinus (float a) {
    return sin (a) ;
}

float logarithme (float a) {
    return log (a) ;
}

float exponensiel (float a) {
    return exp (a) ;
}

float racineCarree(float a) {
    return sqrt(a);
}

float puissance(float a, float b) {
    return pow(a, b);
}

void operationexecuter (float (*operation)(float, float), float a, float b) {
    float resultat = operation (a, b) ;
    std::cout << resultat << std:: endl ;
}

void fonctionexercuter (float (*fonction)(float), float a) {
    float resultat = fonction (a) ;
    std::cout << resultat << std:: endl ;
}

int main () {

   char operateur ;
   float a = 0 ;
   float b = 0 ;
   float c = 0 ;

   float (*operationutiliser)(float a, float b) ;
   float (*fonctionutiliser)(float c) ;
   
   std::cout << "operation simple choisir entre (+, -, *, /)" << std:: endl ;
   std::cin >> a >> operateur >> b ;
    

   switch (operateur) 
   {
   case '+' :
    operationutiliser = somme ;
    break;
   case '*' :
   operationutiliser = produit ;
   break;
   case '-' :
   operationutiliser = soustraction ;
   break;
   case '/' :
   operationutiliser = division ;
   break;
   default :
   std::cout << "operateur non reconnu" << std:: endl ;
   return 0 ;

   }
    operationexecuter (operationutiliser, a, b) ;

   std::string fonct ;
   std::cout << "calcul avance choisir parmi les operation (cos, sin, log, exp, sqrt, pow)" << std:: endl ;
    std::cin >> fonct >> c;
   
   if (fonct == "cos") {
    fonctionutiliser = cosinus ;
   } else if (fonct == "sin") {
    fonctionutiliser = sinus ;
   } else if (fonct == "log") {
    fonctionutiliser = logarithme ;
   } else if (fonct == "exp") {
    fonctionutiliser = exponensiel ;
   } else if (fonct == "sqrt") {
    fonctionutiliser = racineCarree ;
   }else if (fonct == "pow") {
        float exposant;
        float a ;
        std::cout << "entre un nombre " << std:: endl ;
        std:: cin >> a ;
        std::cout << "Entrez l'exposant : ";
        std::cin >> exposant;
       float resultat = puissance(a, exposant);
        std::cout << a << " ^ " << exposant << " : " << resultat << std::endl;
    } else {
        std::cout << "Opération avancée non reconnue." << std::endl;

    }fonctionexercuter (fonctionutiliser,c) ;

    return 0;
}