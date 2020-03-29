#ifndef MP_CONSTANTS_H
#define MP_CONSTANTS_H

// mathematical constants in high machine accuracy
extern const double pi ;
extern const double sqrtpi ;
extern const double ipi ;
extern const double isqrtpi ;
extern const double twopi ;
extern const double sqrttwopi ;
extern const double itwopi ;
extern const double isqrttwopi ;
extern const double pisq ;
extern const double ipisq ;

extern const double euler ;
extern const double sqrteuler ;
extern const double ieuler ;
extern const double isqrteuler ;
extern const double twoeuler ;
extern const double sqrttwoeuler ;
extern const double itwoeuler ;
extern const double isqrttwoeuler ;
extern const double eulersq ;
extern const double ieulersq ;

extern const double sqrt2 ;
extern const double isqrt2 ;
extern const double sqrt3 ;
extern const double isqrt3 ;
extern const double sqrt4 ;
extern const double isqrt4 ;
extern const double sqrt5 ;
extern const double isqrt5 ;
extern const double sqrt6 ;
extern const double isqrt6 ;
extern const double sqrt7 ;
extern const double isqrt7 ;
extern const double sqrt8 ;
extern const double isqrt8 ;
extern const double sqrt9 ;
extern const double isqrt9 ;
extern const double sqrt10 ;
extern const double isqrt10 ;

extern const double phi ;
extern const double sqrtphi ;
extern const double iphi ;
extern const double isqrtphi ;
extern const double twophi ;
extern const double sqrttwophi ;
extern const double itwophi ;
extern const double isqrttwophi ;
extern const double phisq ;
extern const double iphisq ;

extern const double ln05 ;
extern const double iln05 ;
extern const double ln2 ;
extern const double iln2 ;
extern const double ln3 ;
extern const double iln3 ;
extern const double ln4 ;
extern const double iln4 ;
extern const double ln5 ;
extern const double iln5 ;
extern const double ln6 ;
extern const double iln6 ;
extern const double ln7 ;
extern const double iln7 ;
extern const double ln8 ;
extern const double iln8 ;
extern const double ln9 ;
extern const double iln9 ;
extern const double ln10 ;
extern const double iln10 ;

//////////////////////////////////////////////////////////////////////////////
//                                 SI units                                 //
//////////////////////////////////////////////////////////////////////////////

///////////////////
// defined units //
///////////////////

// speed of light in vacuum [m/s] 
// (defined)
extern const double lightspeed_si ;

// planck's constant [kg*m^2/s]
// (defined)
extern const double h_planck_si ;

// elementary charge [c]
// (defined)
extern const double elementary_charge_si ;

// boltzmann constant [kg*m^2/s^2/k]
// (defined)
extern const double boltzmann_si ;

// avogadro's constant [1/mol]
// (defined)
extern const double n_avogadro_si ;

////////////////////////////////
// derived and measured units //
////////////////////////////////

// reduced planck's constant [kg*m^2/s]
extern const double h_bar_si ;

// magnetic constant or permeability of vacuum [n/a^2]
extern const double mu_perm_si ;

// electric constant or permittivity of vacuum [f/m]
extern const double permittivity_si ;

// electron charge [c] 
extern const double electron_charge_si ;

// proton charge [c]
extern const double proton_charge_si ;

// gravitational constant [m^3/(kg*s^2]
extern const double g_gravity_si ;

// electron mass [kg]
extern const double electron_mass_si ;

// proton mass [kg]
extern const double proton_mass_si ;

// electron g factor [ ]
extern const double electron_gfactor_si ;

// coulomb's constant [kg*m^4/s^2/c^2]
extern const double coulombs_const_si ;

// rydberg constant [1/m]
extern const double rydberg_si ;

//////////////////////////////////////////////////////////////////////////////
//                     dimensionless physical constants                     //
//////////////////////////////////////////////////////////////////////////////

// finestructure constant
extern const double finestructure ;

extern const double em_coupling ;

extern const double grav_coupling ;

extern const double str_coupling ;

//////////////////////////////////////////////////////////////////////////////
//                            conversion factors                            //
//////////////////////////////////////////////////////////////////////////////

/////////////////////////
// si -> au & au -> si //
/////////////////////////

// bohr to metre
extern const double length_au2si ;
// metre to bohr
extern const double length_si2au ;

// hartree to joule
extern const double energy_au2si ;
// joule to hartree
extern const double energy_si2au ;

extern const double time_au2si ;
extern const double time_si2au ;

extern const double momentum_au2si ;
extern const double momentum_si2au ;

extern const double velocity_au2si ;
extern const double velocity_si2au ;

extern const double mass_au2si ;
extern const double mass_si2au ;

extern const double charge_au2si ;
extern const double charge_si2au ;

extern const double force_au2si ;
extern const double force_si2au ;

extern const double temperature_au2si ;
extern const double temperature_si2au ;

extern const double pressure_au2si ;
extern const double pressure_si2au ;

extern const double efield_au2si ;
extern const double efield_si2au ;

extern const double epot_au2si ;
extern const double epot_si2au ;

extern const double edipole_au2si ;
extern const double edipole_si2au ;

//////////////////////////////////////////////////////////////////////////////
//                               atomic units                               //
//////////////////////////////////////////////////////////////////////////////

//////////////////////////
// defined atomic units //
//////////////////////////

// mass of an electron
// (defined)
extern const double electron_mass_au ;

// absolute charge of an electron 
// (defined)
extern const double elementary_charge_au ;

// action quantum
// (defined)
extern const double h_bar_au ;

// coulomb force constant
// (defined) 
extern const double coulombs_const_au ;

// boltzmann constant
// (defined)
extern const double boltzmann_au ;

//////////////////////////
// derived atomic units //
//////////////////////////

// speed of light in a vacuum
extern const double lightspeed_au ;

extern const double h_planck_au ;

// magnetic constant or permeability of vacuum 
extern const double mu_perm_au ;

// electric constant or permittivity of vacuum 
extern const double permittivity_au ;

// electron charge
extern const double electron_charge_au ;

// proton charge
extern const double proton_charge_au ;

// proton mass
extern const double proton_mass_au ;

//////////////////////////////
// other conversion factors //
//////////////////////////////

extern const double mass_u2si ;
extern const double mass_si2u ;
extern const double mass_u2au ;
extern const double mass_au2u ;

extern const double length_angstrom2si ;
extern const double length_si2angstrom ;
extern const double length_angstrom2au ;
extern const double length_au2angstrom ;
#endif
