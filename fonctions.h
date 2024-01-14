#include <unistd.h>
#define LIG 10
#define COL 20
#define VIDE 32
#define SNOOP 0x02
#define oiseau 0x14
#define dpoiseau 2
#define BOR 175
#define BORD 0xBA
#define snoopyPOS -17
#define nonpoussable -27
#define bnonpoussable 0x05
#define bpoussable 0x12
#define poussable 18
#define bpiege 0x17
#define bsurprise 0x15
#define surprise -31
#define bcassable 0x06
#define cassable -29
#define piege 0x01
#define Bballess 3
#define balless 8
#define ballss 0x03
#define ballssz -30


typedef struct {
    int x;
    int y;
} PSnoppy;

//ad
typedef struct SnoopyJoueur SnoopyJoueur;
struct Balle {
    int x;
    int y;
};

struct SnoopyJoueur {
    char TSnoopy;
    char TBalle;
    int vies;
    int score;
    int ois;
    struct Balle balle;
    PSnoppy position;
};

void menu(char plateau[LIG][COL]);
void menu2(char plateau[LIG][COL]);
void Initialisation_Snoopy(SnoopyJoueur *pS);
void int_plateau(char plateau[LIG][COL],SnoopyJoueur *pS);
void aff_plateau(char plateau[LIG][COL]);
void deplacementsnoopy(char plateau[LIG][COL],SnoopyJoueur *pS);
void deplacementsnoopyLanc1(char plateau[LIG][COL], SnoopyJoueur *pS);
int blocstype(char plateau[LIG][COL],int lig, int col);
void int_plateau_niveau1(char plateau[LIG][COL],SnoopyJoueur *pS);
void aff_plateau_niveau1(char plateau[LIG][COL]);
void niveau1(char plateau[LIG][COL]);
void int_plateau_niveau2(char plateau[LIG][COL],SnoopyJoueur *pS);
void aff_plateau_niveau2(char plateau[LIG][COL]);
void niveau2(char plateau[LIG][COL]);
void int_plateau_niveau3(char plateau[LIG][COL],SnoopyJoueur *pS);
void aff_plateau_niveau3(char plateau[LIG][COL]);
void niveau3(char plateau[LIG][COL]);
//adFin

#ifndef PROJET_FONCTIONS_H
#define PROJET_FONCTIONS_H
#endif //PROJET_FONCTIONS_H
