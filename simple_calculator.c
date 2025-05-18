#include <stdio.h>

int main() {
    float nombre1, nombre2;
    char operateur;
    float resultat;
    
    // Demande des valeurs à l'utilisateur
    printf("Entrez un calcul (exemple: 5 + 3): ");
    scanf("%f %c %f", &nombre1, &operateur, &nombre2);
    
    // Calcul selon l'opérateur
    switch(operateur) {
        case '+':
            resultat = nombre1 + nombre2;
            break;
        case '-':
            resultat = nombre1 - nombre2;
            break;
        case '*':
            resultat = nombre1 * nombre2;
            break;
        case '/':
            if(nombre2 != 0) {
                resultat = nombre1 / nombre2;
            } else {
                printf("Erreur: Division par zero impossible\n");
                return 1;
            }
            break;
        default:
            printf("Operateur non reconnu. Utilisez +, -, * ou /\n");
            return 1;
    }
    
    // Affichage du résultat
    printf("%.2f %c %.2f = %.2f\n", nombre1, operateur, nombre2, resultat);
    
    return 0;
}