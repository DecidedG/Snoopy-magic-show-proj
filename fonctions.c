#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "fonctions.h"
#include <conio.h>


//adPLATEAU & SNOOPY


void menu(char plateau[LIG][COL]){
    int choix;
    char mdp[100];
    int niv;
    SnoopyJoueur whts;
    SnoopyJoueur *pS;
    Initialisation_Snoopy(&whts);


    printf("\nBienvenue! Entrez un mot de passe pour commencer (seulement des lettres) : \n");
    fgets(mdp, sizeof(mdp), stdin);
    while (1) {
        printf("\n1. Regles\n2. Lancer\n3. Niveaux\n4. Scores\n5. Mot de passe\n6. Quitter\n");
        scanf(" %d", &choix);


        if (choix == 1) {
            int ret;
            printf("- Vous incarnez Snoopy %c ,vous devez recuperer les 4 oiseaux %c%c%c%c situes aux quatres coins du niveau.\n- Vous avez 3 vies. Si vous touchez la balle %c, vous perdez une vie.\n"
                   "- D'autres obstacles comme des teleporteurs, des blocs a pousser ou a casser seront presents sur votre chemin:"
                   "\nBloc cassable %c, Bloc poussable %c, Bloc piege %c, Bloc invincible %c, Bloc disparition/apparition, Bloc de tapis roulant"
                   "\n- Pour gagner, collectez tous les oiseaux du niveau.\n- Gerez vos deplacements avec les touches directionnelles (Haut, Bas, Gauche, Droite)."
                   "\n- Un mot de passe vous permettra d'acceder a chaque niveau.\n- Mettez le jeu en pause a tout moment en appuyant sur la touche ...\n",
                   SNOOP, oiseau, oiseau, oiseau, oiseau, 3, cassable, poussable, piege, nonpoussable);
            printf("\n 1 pour retourner au menu, 0 pour quitter le jeu.");
            scanf("%d", &ret);
            if (ret == 0) {
                printf("%c plus tard!", 133);
                exit(0);
            } else if (ret == 1) {
                continue;
            }
        }

        else if (choix == 2){
            niveau1(plateau);
            deplacementsnoopyLanc1(plateau, &whts);
        }

        else if (choix == 3) {
            printf("\nCharger Niveau 1 (1)\nCharger Niveau 2 (2)\nCharger Niveau (3) \nRetourner au menu (4)");
            scanf("%d", &niv);
            if (niv == 1) {
                niveau1(plateau);
                deplacementsnoopy(plateau, &whts);
            } else if (niv == 2) {
                niveau2(plateau);
                deplacementsnoopy(plateau, &whts);
            } else if (niv == 3) {
                niveau3(plateau);
                deplacementsnoopy(plateau, &whts);
            }
            else if (niv == 4){
                continue;
            }
        }
        else if(choix == 4){
            int sco;
            printf("\nVotre scores: %d\n",pS->score);
            printf("Entrez 1 pour retourner au menu: \n");
            scanf("%d",&sco);
            if(sco == 1){
                continue;
            }
        }
        else if (choix == 5){
            int rett;
            printf("Votre mot de passe actuel: %s",mdp);
            printf("Entrez 1 pour retourner au menu: \n");
            scanf("%d",&rett);

            if(rett == 1){
                continue;
            }
        }

        else if (choix == 6) {
            printf("%c plus tard!", 133);
            exit(0);
        }
    }
}
void menu2(char plateau[LIG][COL]){
    int choix;
    char mdp[100];
    int niv;
    SnoopyJoueur whts;
    SnoopyJoueur *pS;
    Initialisation_Snoopy(&whts);


    printf("\nBienvenue! Entrez un mot de passe pour commencer : \n");
    fgets(mdp, sizeof(mdp), stdin);
    while (1) {
        printf("\n1. Regles\n2. Relancer\n3. Niveaux\n4. Scores \n5. Mot de passe\n6. Quitter\n");
        scanf(" %d", &choix);


        if (choix == 1) {
            int ret;
            printf("- Vous incarnez Snoopy %c ,vous devez recuperer les 4 oiseaux %c%c%c%c situes aux quatres coins du niveau.\n- Vous avez 3 vies. Si vous touchez la balle %c, vous perdez une vie.\n"
                   "- D'autres obstacles comme des teleporteurs, des blocs a pousser ou a casser seront presents sur votre chemin:"
                   "\nBloc cassable %c, Bloc poussable %c, Bloc piege %c, Bloc invincible %c, Bloc disparition/apparition, Bloc de tapis roulant"
                   "\n- Pour gagner, collectez tous les oiseaux du niveau.\n- Gerez vos deplacements avec les touches directionnelles (Haut, Bas, Gauche, Droite)."
                   "\n- Un mot de passe vous permettra d'acceder a chaque niveau.\n- Mettez le jeu en pause a tout moment en appuyant sur la touche ...\n",
                   SNOOP, oiseau, oiseau, oiseau, oiseau, 3, cassable, poussable, piege, nonpoussable);
            printf("\n 1 pour retourner au menu, 0 pour quitter le jeu.");
            scanf("%d", &ret);
            if (ret == 0) {
                printf("%c plus tard!", 133);
                exit(0);
            } else if (ret == 1) {
                continue;
            }
        }

        else if (choix == 2){
            niveau1(plateau);
            deplacementsnoopyLanc1(plateau, &whts);
        }

        else if (choix == 3) {
            printf("\nCharger Niveau 1 (1)\nCharger Niveau 2 (2)\nCharger Niveau (3) \nRetourner au menu (4)");
            scanf("%d", &niv);
            if (niv == 1) {
                niveau1(plateau);
                deplacementsnoopy(plateau, &whts);
            } else if (niv == 2) {
                niveau2(plateau);
                deplacementsnoopy(plateau, &whts);
            } else if (niv == 3) {
                niveau3(plateau);
                deplacementsnoopy(plateau, &whts);
            }
            else if (niv == 4){
                continue;
            }
        }
        else if(choix == 4){
            int sco;
            printf("\nVotre scores: %d\n",pS->score);
            printf("Entrez 1 pour retourner au menu: \n");
            scanf("%d",&sco);
            if(sco == 1) {
                continue;
            }
        }
        else if (choix == 5){
            int rett;
            printf("Votre mot de passe actuel: %s",mdp);
            printf("Entrez 1 pour retourner au menu: \n");
            scanf("%d",&rett);

            if(rett == 1){
                continue;
            }
            else{
                printf("Entrez seulement 1");
            }
        }

        else if (choix == 6) {
            printf("%c plus tard!", 133);
            exit(0);
        }
    }
}

void Initialisation_Snoopy(SnoopyJoueur *pS){
    pS->TSnoopy = SNOOP;
    pS->vies = 3;
    pS->position.x = 10;
    pS->position.y = 4;
    pS->score = 0;
}



void int_plateau(char plateau[LIG][COL],SnoopyJoueur *pS) {
    int lig = 0;
    int col = 0;

    for (lig = 0; lig < LIG; lig++) {
        for (col = 0; col < COL; col++) {
            plateau[lig][col] = VIDE;

            if (lig==0 ||lig==LIG-1 ) {
                plateau[lig][col] = BOR;
            }
            else if(col==0 || col==COL-1  ){
                plateau[lig][col] = BORD;
            }
                //

            else if(lig == pS->position.y && col == pS->position.x){
                plateau[lig][col] = pS->TSnoopy;
            }
            else if(lig==1 && col == 1){
                plateau[lig][col] = oiseau;
            }
            else if(lig==1 && col == 18){
                plateau[lig][col] = oiseau;
            }
            else if(lig==8 && col == 1){
                plateau[lig][col] = oiseau;
            }
            else if(lig==8 && col == 18){
                plateau[lig][col] = oiseau;
            }
            else if(lig==3 && col == 15){
                plateau[lig][col] = bpiege;
            }
            else if(lig==3 && col == 16){
                plateau[lig][col] = bpiege;
            }
            else if(lig==3 && col == 17){
                plateau[lig][col] = bpiege;
            }
            else if(lig==3 && col == 18){
                plateau[lig][col] = bpiege;
            }
            else if(lig==3 && col == 14){
                plateau[lig][col] = bpiege;
            }
            else if((lig==6 && col==1) || (lig== 6 && col==2) || (lig== 6 && col == 3) ||
                    (lig == 6 && col == 4) || (lig==6 && col == 5) || ( lig == 6 && col == 6)){
                plateau[lig][col] = bcassable;
            }


        }
    }
}

void aff_plateau(char plateau[LIG][COL]){

    int lig = 0;
    int col = 0;


    printf("\n");
    for(lig=0;lig<LIG;lig++){
        for(col=0;col<COL;col++){
            printf("%c",plateau[lig][col]);
        }
        printf("\n");

    }

}




//TYPE DES BLOCS
int blocstype(char plateau[LIG][COL],int lig, int col){
    int bloctype;

    if(plateau[lig][col]!=VIDE){

        if(plateau[lig][col] == oiseau){
            bloctype = dpoiseau;
        }
        else if(plateau[lig][col]==bpiege){
            bloctype = piege;
        }
        else if(plateau[lig][col]==bpoussable){
            bloctype = poussable;
        }
        else if(plateau[lig][col]==bsurprise){
            bloctype=surprise;
        }
        else if(plateau[lig][col]==bcassable){
            bloctype=cassable;
        }
        else if(plateau[lig][col]==SNOOP){
            bloctype=snoopyPOS;
        }
        else if(plateau[lig][col]==bnonpoussable){
            bloctype = nonpoussable;
        }
        return bloctype;
    }
}



void deplacementsnoopy(char plateau[LIG][COL], SnoopyJoueur *pS) {
    char mouv;
    int type;
    char rep;


    printf("W pour aller en haut\n");
    printf("S pour aller en bas\n");
    printf("A pour aller %c gauche\n",133);
    printf("D pour aller %c droite\n",133);
    printf("\n Saisir une lettre pour vous deplacer :\n");


    while (1) {
        scanf("\n%c", &mouv);

        int nouvX = pS->position.x;
        int nouvY = pS->position.y;

        if(mouv != 'w' && mouv != 'a' && mouv != 's' && mouv != 'd'){
            printf("Utiliser seulement W/A/S/D");
        }

        if(mouv=='w') {
            nouvY = pS->position.y - 1;

        }
        else if(mouv=='s') {
            nouvY = pS->position.y + 1;

        }
        else if(mouv=='a') {
            nouvX = pS->position.x - 1;

        }
        else if(mouv=='d') {
            nouvX = pS->position.x + 1;

        }


        if (nouvX > 0 && nouvX < 19 && nouvY > 0 && nouvY < 9) {

            type = blocstype(plateau, nouvY, nouvX);

            if (type == nonpoussable){
                nouvX = pS->position.x;
                nouvY = pS->position.y;
                printf("Bloc non poussable. D%cplacement impossible.",130);
            }
            else if(type == cassable){
                printf("Y pour casser. N pour ne pas casser.\n");
                scanf("\n%c", &rep);

                if(rep != 'y' && rep!= 'Y'){
                    printf("Action Annul%ce",130);
                    continue;
                }
            }
            else if(type == piege){
                pS->vies--;
                nouvY = 4;
                nouvX = 10;
                plateau[nouvY][nouvX] = pS->TSnoopy;
                printf("Attention! Vous avez perdu une vie");

            }
            else if(type == dpoiseau){
                pS->score++;
                printf("Vous avez capture un oiseau");
            }
            else if(type == poussable){

                int nouvvX = nouvX + (nouvX - pS->position.x);
                int nouvvY = nouvY + (nouvY - pS->position.y);
                if (nouvvX > 0 && nouvvX < 19 && nouvvY > 0 && nouvvY < 9 &&
                    plateau[nouvvY][nouvvX] == VIDE) {
                    plateau[nouvvY][nouvvX] = poussable;
                    plateau[nouvY][nouvX] = pS->TSnoopy;
                    plateau[pS->position.y][pS->position.x] = VIDE;
                    pS->position.x = nouvX;
                    pS->position.y = nouvY;
                    aff_plateau(plateau);
                } else if (nouvvX == pS->position.x && nouvvY == pS->position.y) {
                    plateau[pS->position.y][pS->position.x] = VIDE;
                    plateau[nouvY][nouvX] = SNOOP;
                    plateau[nouvvY][nouvvX] = poussable;
                    pS->position.x = nouvX;
                    pS->position.y = nouvY;
                    aff_plateau(plateau);
                } else {
                    printf("Impossible de pousser le bloc.\n");
                    nouvY = pS->position.y;
                    nouvX = pS->position.x;
                    plateau[nouvY][nouvX] = pS->TSnoopy;
                }
            }


            printf("\nScore: %d\n",pS->score);
            printf("\nVies: %d\n",pS->vies);


            plateau[pS->position.y][pS->position.x] = VIDE;
            plateau[nouvY][nouvX] = pS->TSnoopy;
            pS->position.x = nouvX;
            pS->position.y = nouvY;
            aff_plateau(plateau);
            printf("\n");

            if(pS->vies == 0){
                printf("Game Over\n");
                menu(plateau);
                break;
            }
            if(pS->score == 4){
                printf("Vous avez gagn%c",130);
                menu(plateau);
                break;
            }

        } else {
            printf("Deplacement impossible. Restez %c l'interieur.\n",133);
        }

    }
}
void deplacementsnoopyLanc1(char plateau[LIG][COL], SnoopyJoueur *pS) {
    char mouv;
    int type;
    char rep;
    SnoopyJoueur whts;




    printf("W pour aller en haut\n");
    printf("S pour aller en bas\n");
    printf("A pour aller %c gauche\n",133);
    printf("D pour aller %c droite\n",133);
    printf("\n Saisir une lettre pour vous deplacer :\n");


    while (1) {
        scanf("\n%c", &mouv);

        int nouvX = pS->position.x;
        int nouvY = pS->position.y;

        if(mouv=='w') {
            nouvY = pS->position.y - 1;
        }
        else if(mouv=='s') {
            nouvY = pS->position.y + 1;
        }
        else if(mouv=='a') {
            nouvX = pS->position.x - 1;
        }
        else if(mouv=='d') {
            nouvX = pS->position.x + 1;
        }

        if (nouvX > 0 && nouvX < 19 && nouvY > 0 && nouvY < 9) {

            type = blocstype(plateau, nouvY, nouvX);

            if (type == nonpoussable){
                nouvX = pS->position.x;
                nouvY = pS->position.y;
                printf("Bloc non poussable. D%cplacement impossible.",130);
            }
            else if(type == cassable){
                printf("Y pour casser. N pour ne pas casser.\n");
                scanf("\n%c", &rep);

                if(rep != 'y' && rep!= 'Y'){
                    printf("Action Annul%ce",130);
                    continue;
                }
            }
            else if(type == piege){
                pS->vies--;
                nouvY = 4;
                nouvX = 10;
                plateau[nouvY][nouvX] = pS->TSnoopy;
                printf("Attention! Vous avez perdu une vie");
            }
            else if(type == dpoiseau){
                pS->score++;
                pS->ois++;
                printf("Vous avez capture un oiseau");
            }
            else if(type == poussable){

                int nouvvX = nouvX + (nouvX - pS->position.x);
                int nouvvY = nouvY + (nouvY - pS->position.y);

                if (nouvvX > 0 && nouvvX < 19 && nouvvY > 0 && nouvvY < 9 &&
                    plateau[nouvvY][nouvvX] == VIDE) {
                    plateau[nouvvY][nouvvX] = poussable;
                    plateau[nouvY][nouvX] = pS->TSnoopy;
                    plateau[pS->position.y][pS->position.x] = VIDE;
                    pS->position.x = nouvX;
                    pS->position.y = nouvY;
                    aff_plateau(plateau);
                } else if (nouvvX == pS->position.x && nouvvY == pS->position.y) {
                    plateau[pS->position.y][pS->position.x] = VIDE;
                    plateau[nouvY][nouvX] = SNOOP;
                    plateau[nouvvY][nouvvX] = poussable;
                    pS->position.x = nouvX;
                    pS->position.y = nouvY;
                    aff_plateau(plateau);
                } else {
                    printf("Impossible de pousser le bloc.\n");
                    nouvY = pS->position.y;
                    nouvX = pS->position.x;
                    plateau[nouvY][nouvX] = pS->TSnoopy;
                }
            }


            printf("\nScore: %d\n",pS->score);
            printf("\nVies: %d\n",pS->vies);


            plateau[pS->position.y][pS->position.x] = VIDE;
            plateau[nouvY][nouvX] = pS->TSnoopy;
            pS->position.x = nouvX;
            pS->position.y = nouvY;
            aff_plateau(plateau);
            printf("\n");

            if(pS->vies == 0){
                printf("Game Over\n");
                menu2(plateau);
                break;

            }
            if(pS->ois == 4) {
                pS->ois = 0;
                pS->vies = 3;


                printf("Niveau 2: \n");
                pS->position.x = 10;
                pS->position.y = 4;
                Initialisation_Snoopy(&whts);
                int_plateau_niveau2(plateau, &whts);
                aff_plateau_niveau2(plateau);
                if (pS->score == 8) {
                    printf("\nNiveau 3: \n");
                    Initialisation_Snoopy(&whts);
                    int_plateau_niveau3(plateau, &whts);
                    aff_plateau_niveau3(plateau);
                }
                else if(pS->score == 12){
                    printf("\nFeliciations! Vous avez gagne tous les niveaux.\n");
                    menu2(plateau);
                    break;
                }
            }

        } else {
            printf("Deplacement impossible. Restez %c l'interieur.\n",133);
        }
    }
}



void int_plateau_niveau1(char plateau[LIG][COL],SnoopyJoueur *pS) {
    int lig = 0;
    int col = 0;

    for (lig = 0; lig < LIG; lig++) {
        for (col = 0; col < COL; col++) {
            plateau[lig][col] = VIDE;

            if (lig==0 ||lig==LIG-1 ) {
                plateau[lig][col] = BOR;
            }

            else if(col==0 || col==COL-1  ){
                plateau[lig][col] = BORD;
            }
            else if(lig == pS->position.y && col == pS->position.x){
                plateau[lig][col] = pS->TSnoopy;
            }
            else if(lig==1 && col == 1){
                plateau[lig][col] = oiseau;
            }
            else if(lig==1 && col == 18){
                plateau[lig][col] = oiseau;
            }
            else if(lig==8 && col == 1){
                plateau[lig][col] = oiseau;
            }
            else if(lig==8 && col == 18){
                plateau[lig][col] = oiseau;
            }
                //
            else if((lig == 3 && col == 9) || (lig == 4 && col == 9) || (lig == 5 && col == 9)){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig == 3 && col == 1) || (lig == 3 && col == 2) || ( lig == 3 && col == 3) || (lig == 3 && col == 4) ||
                    (lig == 1 && col == 4) || (lig == 2 && col == 4)){
                plateau[lig][col] = bpoussable;
            }
            else if((lig == 3 && col == 15) || (lig == 3 && col == 16) || (lig == 3 && col == 17) || (lig == 3 && col == 18) ||
                    (lig == 1 && col == 15) || (lig == 2 && col == 15)){
                plateau[lig][col] = bpoussable;
            }
            else if((lig == 6 && col == 1) || (lig == 6 && col == 2) || ( lig == 6 && col == 3) || (lig == 6 && col == 4) ||
                    (lig == 8 && col == 4) || (lig == 7 && col == 4)){
                plateau[lig][col] = bpoussable;
            }
            else if((lig == 6 && col == 15) || (lig == 6 && col == 16) || (lig == 6 && col == 17) || (lig == 6 && col == 18) ||
                    (lig == 7 && col == 15) || (lig == 8 && col == 15)){
                plateau[lig][col] = bpoussable;
            }
            else if((lig == 1 && col == 9) || lig == 8 && col == 9){
                plateau[lig][col] = bpiege;
            }
        }
    }
}
void aff_plateau_niveau1(char plateau[LIG][COL]){
    int lig = 0;
    int col = 0;
    printf("\n");
    for(lig=0;lig<LIG;lig++){
        for(col=0;col<COL;col++){
            printf("%c",plateau[lig][col]);
        }
        printf("\n");
    }

}

void niveau1(char plateau[LIG][COL]){
    SnoopyJoueur whts;
    Initialisation_Snoopy(&whts);
    int_plateau_niveau1(plateau,&whts);
    aff_plateau_niveau1(plateau);
}

void int_plateau_niveau2(char plateau[LIG][COL],SnoopyJoueur *pS) {
    int lig = 0;
    int col = 0;

    for (lig = 0; lig < LIG; lig++) {
        for (col = 0; col < COL; col++) {
            plateau[lig][col] = VIDE;

            if (lig==0 ||lig==LIG-1 ) {
                plateau[lig][col] = BOR;
            }
            else if(col==0 || col==COL-1  ){
                plateau[lig][col] = BORD;
            }
            else if(lig == pS->position.y && col == pS->position.x){
                plateau[lig][col] = pS->TSnoopy;
            }
            else if(lig==1 && col == 1){
                plateau[lig][col] = oiseau;
            }
            else if(lig==1 && col == 18){
                plateau[lig][col] = oiseau;
            }
            else if(lig==8 && col == 1){
                plateau[lig][col] = oiseau;
            }
            else if(lig==8 && col == 18){
                plateau[lig][col] = oiseau;
            }
                //
            else if (lig == 2 && col == 9){
                plateau[lig][col] = bnonpoussable;
            }
            else if ((lig ==3 && col == 8) || (lig == 3 && col == 10)){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig == 4 && col == 7) || (lig == 5 && col == 7) || (lig == 4 && col == 11) || (lig == 5 && col == 11)){
                plateau[lig][col] = bpoussable;
            }
            else if((lig == 6 && col == 8) || (lig == 6 && col == 10)){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig == 7 && col ==9)){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig == 1 && col == 2)){
                plateau[lig][col] = bcassable;
            }
            else if((lig == 2 && col == 2) || lig == 2 && col == 1){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig == 1 && col == 12)){
                plateau[lig][col] = bpiege;
            }
            else if((lig == 2 && col == 12)){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig == 2 && col == 13)){
                plateau[lig][col] = bpoussable;
            }
            else if(lig == 2 && col == 14){
                plateau[lig][col] = bcassable;
            }
            else if((lig == 2 && col == 15) || (lig == 2 && col == 16) || (lig == 2 && col == 17) || (lig == 2 && col == 18)){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig == 7 && col == 2) || (lig == 7 && col == 17)){
                plateau[lig][col] = bpiege;
            }
            else if(lig == 3 && col == 3){
                plateau[lig][col] = bpiege;
            }

        }
    }
}

void aff_plateau_niveau2(char plateau[LIG][COL]){
    int lig = 0;
    int col = 0;
    printf("\n");
    for(lig=0;lig<LIG;lig++){
        for(col=0;col<COL;col++){
            printf("%c",plateau[lig][col]);

        }
        printf("\n");
    }

}

void niveau2(char plateau[LIG][COL]){
    SnoopyJoueur whts;
    Initialisation_Snoopy(&whts);
    int_plateau_niveau2(plateau,&whts);
    aff_plateau_niveau2(plateau);
}
void int_plateau_niveau3(char plateau[LIG][COL],SnoopyJoueur *pS) {
    int lig = 0;
    int col = 0;

    for (lig = 0; lig < LIG; lig++) {
        for (col = 0; col < COL; col++) {
            plateau[lig][col] = VIDE;

            if (lig==0 ||lig==LIG-1 ) {
                plateau[lig][col] = BOR;
            }
            else if(col==0 || col==COL-1  ){
                plateau[lig][col] = BORD;
            }
                //

            else if(lig == pS->position.y && col == pS->position.x){
                plateau[lig][col] = pS->TSnoopy;
            }
            else if(lig==1 && col == 1){
                plateau[lig][col] = oiseau;
            }
            else if(lig==1 && col == 18){
                plateau[lig][col] = oiseau;
            }
            else if(lig==8 && col == 1){
                plateau[lig][col] = oiseau;
            }
            else if(lig==8 && col == 18){
                plateau[lig][col] = oiseau;
            }
            else if(lig==3 && col == 15){
                plateau[lig][col] = bpoussable;
            }
            else if(lig==3 && col == 16){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig==2 && col == 13) || (lig == 1 && col == 13)){
                plateau[lig][col] =bnonpoussable;
            }
            else if(lig==3 && col == 17){
                plateau[lig][col] = bnonpoussable;
            }
            else if(lig==3 && col == 18){
                plateau[lig][col] = bpiege;
            }
            else if(lig==3 && col == 14){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig == 3 && col == 1) || (lig == 3 && col == 2) || ( lig == 3 && col == 3 ) || (lig == 3 && col == 4) || (lig == 3 && col == 5)){
                plateau[lig][col] = bnonpoussable;
            }
            else if(lig == 2 && col == 7){
                plateau[lig][col] = bcassable;
            }
            else if((lig == 1 && col == 7) || (lig == 3 && col == 7) || (lig == 4 && col == 7)){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig == 6 && col == 8) || (lig == 6 && col == 9)){
                plateau[lig][col] = bcassable;
            }
            else if((lig == 7 && col == 8) || (lig == 7 && col == 9)){
                plateau[lig][col] = bpoussable;
            }
            else if((lig == 7 && col == 13) || (lig == 8 && col == 15)){
                plateau[lig][col] = bpiege;
            }
            else if((lig == 2 && col == 3) || (lig == 1 && col == 5)){
                plateau[lig][col] = bpiege;
            }

            else if((lig==6 && col==1) || (lig== 6 && col==2) || (lig== 6 && col == 3) ||
                    (lig == 6 && col == 4) || (lig==6 && col == 5) || ( lig == 6 && col == 6) || (lig == 6 && col == 7) ||
                    (lig == 6 && col == 10) || (lig == 6 && col == 11 ) || (lig == 6 && col == 12) || (lig == 6 && col == 13)||
                    (lig == 6 && col == 14) || (lig == 6 && col == 15) || (lig == 6 && col == 16) || (lig == 6 && col == 17)|| (lig == 6 && col == 18)){
                plateau[lig][col] = bnonpoussable;
            }
            else if((lig == 8 && col == 2)   || (lig == 8 && col == 17)){
                plateau[lig][col] = bpiege;
            }



        }
    }
}

void aff_plateau_niveau3(char plateau[LIG][COL]){
    int lig = 0;
    int col = 0;
    printf("\n");
    for(lig=0;lig<LIG;lig++){
        for(col=0;col<COL;col++){
            printf("%c",plateau[lig][col]);
        }
        printf("\n");

    }

}

void niveau3(char plateau[LIG][COL]) {
    SnoopyJoueur whts;
    Initialisation_Snoopy(&whts);
    int_plateau_niveau3(plateau,&whts);
    aff_plateau_niveau3(plateau);
}

//adfin