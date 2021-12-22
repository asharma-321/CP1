//A.Sharma
//sharma.aayus@northeastern.edu
//CP1 Part 1

#include <iomanip>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
        cout << "Atomic Weight Calculator" << endl;
      //Atoms of Oxygen
        int oxygenAtoms = 0;
        //ask user for to enter the number of atoms of each of the elements for an amino acid.
        cout << "Input the number of Oxygen atoms." << endl;
        cin >> oxygenAtoms;
      //Atoms of Carbon
        int carbonAtoms = 0;
        cout << "Input the number of Carbon atoms" << endl;
        cin >> carbonAtoms;
        //Nitrogen Input
        int nitrogenAtoms = 0;
        cout << "Input the number of Nitrogen atoms." << endl;
        cin >> nitrogenAtoms;
        //Sulfur atoms
        int sulfurAtoms = 0;
        cout <<"Input the number of sulfur atoms." << endl;
        cin >> sulfurAtoms;
        //hydrogen
        int hydrogenAtoms = 0;
        cout<<"Input the number of hydrogen atoms" << endl;
        cin >> hydrogenAtoms;

//The program should then compute the molecular weight for this amino acid 
      double oxygenWeight = oxygenAtoms * 15.999;
      double carbonWeight  = carbonAtoms * 12.011;
      double nitrogenWeight = nitrogenAtoms * 14.007;
      double sulfurWeight = sulfurAtoms * 32.066;
      double hydrogenWeight = hydrogenAtoms * 1.008;
      double molecularWeight = oxygenWeight + carbonWeight + nitrogenWeight + sulfurWeight+ hydrogenWeight;
      //and the average weight per atom 
    double AvgWeight = molecularWeight/(oxygenAtoms + carbonAtoms + nitrogenAtoms + sulfurAtoms+ hydrogenAtoms);
    //The printout values should be in fixed format, using 3 decimal precision.   
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(3);

    // print out these values (use data type ‘double’)
    cout<< "Molecular Weight of Amino Acid: \n"; cout<<molecularWeight <<" u \n" ;
    
    cout<< "Average Weight of Each Atom \n";
    cout<<AvgWeight <<" u \n";

}




