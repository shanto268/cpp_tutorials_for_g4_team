/**
*author: Sadman Ahmed Shanto
*date: 2020-08-26
*purpose: data structure
*/
#include <iostream>
#include <string>
using namespace std;

//data structure definition
struct Forces{
    string type;
    bool isWeak;
};


typedef struct {
    string name;
    int charge;
    double mass;
} Particle;

//functional prototypes
void gainMass(Particle *e);
void canInteract(struct Forces *f1, struct Forces *f2);

//main function
int main() {
    Particle electron; 
    
    electron.name = "e-";
    electron.charge = -1;
    electron.mass = 1.0/2000.0;

    gainMass(&electron);

    struct Forces weight;
    struct Forces radiation;

    weight.type = "gravitational";
    weight.isWeak = false;

    radiation.type = "weak force";
    radiation.isWeak = true;
    
    canInteract(&weight, &radiation);
}


void gainMass(Particle *e){
    double new_mass = e->mass * 10;
    cout << "The new mass of " << e->name << " is " << new_mass << endl;
}


void canInteract(struct Forces *f1, struct Forces *f2){
    if (f1->type == f2->type){
        cout << "The forces can interact due to their mutual bosons." << endl;
    }
    else{
        cout << "These are two different fundamental forces and hence don\'t interact!" << endl;
    }

}
