#include <stdio.h>
#include <string.h>

struct Planet {
    char name[20];
    int speed;
    int diameter;
};

void init_planet(struct Planet *somePlanet) {
    strcpy(somePlanet->name, "Earth");
    somePlanet->speed = 30;
    somePlanet->diameter = 100;
}

void print_planet(struct Planet *somePlanet) {
    printf("name: %s\n", somePlanet->name);
    printf("speed: %i\n", somePlanet->speed);
    printf("diameter: %i\n", somePlanet->diameter);
}

int main () {

    struct Planet p;
    memset( &p, 0, sizeof(p) );

    printf("struct Planet p before...\n");

    print_planet(&p);

    init_planet(&p);

    printf("\nstruct Planet p after...\n");

    print_planet(&p);
}
