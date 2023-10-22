#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int max_animals=50;

class Animal {
    public:
        string name, blood, kingdom, food, sounds, reg;

        Animal(string name, string blood, string kingdom, string food, string sounds, string reg)
            : name(name), blood(blood), kingdom(kingdom), food(food), sounds(sounds), reg(reg) {
        }

        virtual void sound_made() {
            cout.setf(ios::left, ios::adjustfield); cout.width(20);
            cout<<"Sound: "<<sounds<<endl;
        }

        void put_data() {
            cout.setf(ios::left, ios::adjustfield); cout.width(20);
            cout<<endl<<"Animal Name "<<name<<endl;
            cout.setf(ios::left, ios::adjustfield); cout.width(20);
            cout<<"Blood Temperature "<<blood<<endl;
            cout.setf(ios::left, ios::adjustfield); cout.width(20);
            cout<<"Kingdom "<<kingdom<<endl;
            cout.setf(ios::left, ios::adjustfield); cout.width(20);
            cout<<"Diet "<<food<<endl;
            sound_made();
            cout.setf(ios::left, ios::adjustfield); cout.width(20);
            cout<<"Commonly Found In "<<reg<<endl;
            
        }
};

Animal* animals[max_animals];

class WarmBlood : public Animal {
    public:
        WarmBlood(string name, string kingdom, string food, string reg, string sounds) 
        : Animal(name, "Warm Blooded", kingdom, food, reg, sounds){        
        }
};

class ColdBlood : public Animal {
    public: 
        ColdBlood(string name, string kingdom, string food, string reg, string sounds) 
        : Animal(name, "Cold Blooded", kingdom, food, reg, sounds){        
        }
};

class Mammal : public WarmBlood {
    public: 
        Mammal(string name, string food, string reg, string sounds)
        : WarmBlood(name, "Mammal", food, reg, sounds){
        }
        
};

class Bird : public WarmBlood {
    public:
        Bird(string name, string food, string reg, string sounds)
        : WarmBlood(name, "Bird", food, reg, sounds){
        }
};

class Fish : public WarmBlood {
    public:
        Fish(string name, string food, string reg, string sounds)
        : WarmBlood(name, "Fish", food, reg, sounds){
        }
};

class Reptiles : public ColdBlood {
    public:
        Reptiles(string name, string food, string reg, string sounds)
        : ColdBlood(name, "Reptiles", food, reg, sounds){
        }
};

class Amphibians : public ColdBlood {
    public:
        Amphibians(string name, string food, string reg, string sounds)
        : ColdBlood(name, "Amphibians", food, reg, sounds){
        }
};

void data_mammal(){
    animals[0]=new Mammal("Giraffe", "Herbivorous, feeding on leaves from tall trees", "Low-frequency mooing or bleating sounds", "Sub-Saharan Africa, savannas, and grasslands");
    animals[1]=new Mammal("Elephant", "Herbivorous, consuming a variety of vegetation, including leaves, grasses, and bark", "Trumpeting, rumbling, and low-frequency calls", "Found in Africa (African Elephant) and South Asia (Asian Elephant)");
    animals[2]=new Mammal("Humpback Whale", "Predominantly krill, small fish, and plankton", "Complex songs and vocalizations", "Oceans worldwide, often migrating long distances");
    animals[3]=new Mammal("Kangaroo", "Herbivorous, grazing on grass and plants", "Soft clicking noises and occasional growls", "Native to Australia, found in various habitats");
    animals[4]=new Mammal("Killer Whale", "Predatory, feeding on fish, seals, and other marine mammals", "Whistles, clicks, and calls", "Found in oceans worldwide, but more commonly in colder soundss");
    animals[5]=new Mammal("Lion", "Carnivorous, primarily preying on herbivores", "Roars and grunts", "Sub-Saharan Africa, with a small population in the Gir Forest of India");
    animals[6]=new Mammal("Orangutan", "Primarily herbivorous, eating fruits and leaves", "High-pitched calls and grunts", "Sumatra and Borneo in Southeast Asia");
    animals[7]=new Mammal("Panda", "Mainly herbivorous, primarily eating bamboo", "High-pitched bleats and growls", "Native to China, mainly in mountainous soundss");
    animals[8]=new Mammal("Polar Bear", "Predominantly seals and other marine mammals", "Growls and roars", "Arctic soundss, including the Arctic Circle");
    animals[9]=new Mammal("Red Fox", "Omnivorous, feeding on small mammals, birds, fruits, and insects", "Barks, screams, and howls", "Found in Europe, Asia, and North America");
}

void data_bird(){
    animals[10]=new Bird("American Robin", "Omnivorous, feeding on insects, fruits, and worms", "Melodic song with chirps and whistles", "North America, from Canada to Mexico");
    animals[11]=new Bird("Australian Kookaburra", "Carnivorous, preying on insects, reptiles, and small birds.", "Distinctive \"laughing\" calls", "Australia and New Guinea, found in woodlands and open forests");
    animals[12]=new Bird("Bald Eagle", "Carnivorous, primarily fish but also waterfowl and carrion", "High-pitched, whistling calls", "North America, especially near large bodies of water");
    animals[13]=new Bird("Common Loon", "Carnivorous, preying on insects, reptiles, and small birds", "Haunting, eerie calls", "Northern North America and northern Europe, often on freshwater lakes");
    animals[14]=new Bird("Common Nightingale", "Insectivorous, feeding on insects and larvae", " Melodic and beautiful song", "Europe, Asia, and North Africa, especially in woodlands");
    animals[15]=new Bird("European Swallow", "Insectivorous, capturing insects in flight", "Rapid, chattering calls", "Europe, Asia, Africa, and the Americas, migrating long distances");
    animals[16]=new Bird("Indian Peafowl", "Omnivorous, eating seeds, insects, and small mammals", "High-pitched calls and the iconic \"peacock\" display", "");
    animals[17]=new Bird("Ostrich", "Herbivorous, feeding on plants, fruits, and small invertebrates", "Loud, booming calls", "Africa, particularly the savannas and deserts");    
    animals[18]=new Bird("Peregrine Falcon", "Carnivorous, primarily other birds captured in mid-air", "High-pitched \"kek-kek-kek\" calls", "Worldwide, often near cliffs and tall buildings");
    animals[19]=new Bird("Toucan", "Omnivorous, eating fruits, insects, and small animals", "Croaks and yelps", "Central and South America, primarily in tropical forests");

}

void data_fish(){
    animals[20]=new Fish("Angelfish", "Omnivorous, eating algae and small invertebrates", "Angelfish are generally silent", "Indo-Pacific and Atlantic Ocean, particularly around coral reefs.");
    animals[21]=new Fish("Barracuda", "Carnivorous, feeding on smaller fish and squid", "Barracuda are usually silent", "Tropical and subtropical oceans worldwide.");
    animals[22]=new Fish("Catfish", "Omnivorous, consuming a variety of aquatic creatures", "Catfish communicate using vocalizations or body vibrations", "Found in freshwater habitats worldwide");
    animals[23]=new Fish("Clownfish", "Omnivorous, feeding on algae and small invertebrates", "Grunts and popping sounds.", "Indo-Pacific, mainly in coral reefs.");
    animals[24]=new Fish("Mackerel", "Carnivorous, preying on smaller fish and plankton", "Mackerel are generally silent", "ceans worldwide, often in cooler waters");
    animals[25]=new Fish("Piranha", "Carnivorous, preying on fish and scavenging carrion", "Typically silent, but they create vibrations as a form of communication", "Amazon Basin and other South American rivers");
    animals[26]=new Fish("Salmon", "Carnivorous, feeding on smaller fish and aquatic insects", "Generally silent during their life cycle", "North Atlantic and Pacific Oceans, depending on the species");
    animals[27]=new Fish("Swordfish", "Carnivorous, preying on smaller fish and squid", "Swordfish are generally silent", "Oceans worldwide, especially in warmer waters.");
    animals[28]=new Fish("Tuna", "Carnivorous, primarily preying on smaller fish", "Tuna are generally silent", "Oceans worldwide, often in warm waters");
    animals[29]=new Fish("Trout", "Carnivorous, consuming insects, small fish, and crustaceans", "Typically silent, but they may produce vibrations as a form of communication", "North America, Europe, and Asia, in freshwater rivers and lakes");
}

void data_reptile(){
    animals[30]=new Reptiles("American Alligator", "Carnivorous, feeding on fish, birds, and mammals", "Deep, low-frequency bellows", "Southeastern United States");
    animals[31]=new Reptiles("Anole Lizard", "Insects and small invertebrates", "Some species make chirping or clicking sounds", "Various species found in the Americas, especially the Caribbean and southeastern United States");
    animals[32]=new Reptiles("Boa Constrictor", "Carnivorous, primarily consuming small mammals and birds", "Hissing and occasional vocalizations", "Central and South America");
    animals[33]=new Reptiles("Chameleon", "Insects and other small invertebrates", "Some species make clicking and hissing sounds", "Africa, Madagascar, Southern Europe, and parts of Asia");
    animals[34]=new Reptiles("Galapagos Tortoise", "Herbivorous, grazing on grasses, cacti, and other plants", "Grunts and hisses", "Galapagos Islands");
    animals[35]=new Reptiles("Gila Monster", "Omnivorous, eating small mammals, birds, and eggs, as well as plant matter", "Hissing and grunting", "Southwestern United States and northwestern Mexico");
    animals[36]=new Reptiles("Green Iguana", "Herbivorous, primarily eating leaves and fruits", "Hissing and throaty vocalizations", "Central and South America");
    animals[37]=new Reptiles("King Cobra", "Carnivorous, preying on other snakes and small mammals", "Hissing and growling", "Southeast Asia and the Indian subcontinent");
    animals[38]=new Reptiles("Komodo Dragon", "Carnivorous, preying on mammals and carrion", "Hissing and growling", "Komodo Island and nearby Indonesian islands");
    animals[39]=new Reptiles("Nile Crocodile", "Carnivorous, hunting fish, birds, and mammals", "Growls, grunts, and hisses", "Various parts of Africa");
    
}

void data_amphibians(){
    animals[40]=new Amphibians("African Clawed Frog", "Aquatic invertebrates and small fish", "Clicking sounds", "Native to sub-Saharan Africa");
    animals[41]=new Amphibians("American Bullfrog", "Insects, small mammals, and other amphibians", "Distinctive deep, resonant croaks", "North America, including the United States and Canada");
    animals[42]=new Amphibians("European Common", "Insects, worms, and other small invertebrates", "Loud trills or croaks", "Europe and parts of Asia");
    animals[43]=new Amphibians("Fire-bellied Toad", "Insects, small invertebrates, and sometimes small fish", "A high-pitched chirping or buzzing noise", "Various species found in Europe and Asia");
    animals[44]=new Amphibians("Green Tree Frog", "Insects and other arthropods", "Trilling or whistling calls", "Southeastern United States");
    animals[45]=new Amphibians("Japanese Giant Salamander", "Fish, crustaceans, and other aquatic animals", "They produce barking or growling sounds", "Japan, primarily in cool, fast-flowing rivers");
    animals[46]=new Amphibians("Moor Frog", "Insects and small invertebrates", "Mating calls that reg like a low growl", "Northern and Eastern Europe and Asia");
    animals[47]=new Amphibians("Red-eyed Tree Frog", "Insects, especially crickets and moths", "Chirping or croaking sounds", "Rainforests of Central America, particularly Costa Rica and Panama");
    animals[48]=new Amphibians("Spotted Salamander", "Insects, worms, and other small invertebrates", "They are not known for vocalization", "Eastern North America");
    animals[49]=new Amphibians("Yellow-eyed Tree Frog", "Insects and other small invertebrates", "Short, musical trills", "Madagascar, in tropical rainforests");
    
}

int main(){  
    data_mammal();
    data_bird();
    data_fish();
    data_reptile();
    data_amphibians();

    int choice;
    do{
        for(int i=0;i<max_animals;i++){
            cout<<i+1<<". ";
            cout.setf(ios::left, ios::adjustfield);
            cout.width(28);
            cout<<animals[i]->name;
            if((i+1)%4==0){
                cout<<endl;
            }
        }

        cout<<endl<<"\nEnter Choice (1-50 for Animals Mentioned 0 to Exit): ";
        cin>>choice;
        if(choice>=1 && choice<=max_animals){
            animals[choice-1]->put_data();
            cout<<endl;  
        }
        else if(choice!=0){
            cout<<"Invalid Option, Choose again"<<endl;
        }
    }while(choice!=0);
}