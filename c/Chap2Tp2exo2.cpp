  
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float t[3][4];
float m[3];
int main()
{

    int compteur=0;
    float tot=0;
    float note;


    do
    {
        printf("mettre une note:\n");
        scanf("%f",&note);
        tot = tot+note;
        compteur = compteur+1;
    }
    while(note>0);
 // mettre 0 pour pass� � la partie suivante du code et afficher le r�sultat.
    if(note==0)
    {
        tot = tot-note;
        tot = tot / (compteur-1);
        printf("note moyenne :%.2f\n", tot);
    }
    else
    {
        printf("note non  valide !\n");
    }

    getch();
    return 0;
}
