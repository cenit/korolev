#ifndef ORBITAL_FUNCTIONS
#define ORBITAL_FUNCTIONS

#define GravConstG 6.67408e-11

double CalculateSystemEnergy(struct List *list);

double CalculateOrbitalSpeed(double distance, double aphelion, double perihelion, double u);
//vis viva equation


#endif
