#include <stdio.h>
#include <math.h>

long double ldsqrt(long double x);

int main() {
	printf("// mathematical constants in high machine accuracy\n");

	// print pi related values
   long double pi                     = 3.14159265358979323846264338327950L;
	long double sqrtpi                 = ldsqrt(pi);
	long double ipi                    = 1.0L/pi;
	long double isqrtpi                = ldsqrt(ipi);
	long double twopi                  = 2.0L*pi;
	long double sqrttwopi              = ldsqrt(twopi);
	long double itwopi                 = 1.0L/twopi;
	long double isqrttwopi             = ldsqrt(itwopi);
	long double pisq                   = pi*pi;
	long double ipisq                  = 1.0L/pisq;
	printf("const double pi            = %.21Lg;\n", pi);
	printf("const double sqrtpi        = %.21Lg;\n", sqrtpi);
	printf("const double ipi           = %.21Lg;\n", ipi);
	printf("const double isqrtpi       = %.21Lg;\n", isqrtpi);
	printf("const double twopi         = %.21Lg;\n", twopi);
	printf("const double sqrttwopi     = %.21Lg;\n", sqrttwopi);
	printf("const double itwopi        = %.21Lg;\n", itwopi);
	printf("const double isqrttwopi    = %.21Lg;\n", isqrttwopi);
	printf("const double pisq          = %.21Lg;\n", pisq);
	printf("const double ipisq         = %.21Lg;\n", ipisq);
	printf("\n");

	// print e related values
	long double euler                  = 2.71828182845904523536028747135266L;
	long double sqrteuler              = ldsqrt(euler);
	long double ieuler                 = 1.0L/euler;
	long double isqrteuler             = ldsqrt(ieuler);
	long double twoeuler               = 2.0L*euler;
	long double sqrttwoeuler           = ldsqrt(twoeuler);
	long double itwoeuler              = 1.0L/twoeuler;
	long double isqrttwoeuler          = ldsqrt(itwoeuler);
	long double eulersq                = euler*euler;
	long double ieulersq               = 1.0L/eulersq;
   printf("const double euler         =  %.21Lg;\n", euler);
	printf("const double sqrteuler     =  %.21Lg;\n", sqrteuler);
	printf("const double ieuler        =  %.21Lg;\n", ieuler);
	printf("const double isqrteuler    =  %.21Lg;\n", isqrteuler);
	printf("const double twoeuler      =  %.21Lg;\n", twoeuler);
	printf("const double sqrttwoeuler  =  %.21Lg;\n", sqrttwoeuler);
	printf("const double itwoeuler     =  %.21Lg;\n", itwoeuler);
	printf("const double isqrttwoeuler =  %.21Lg;\n", isqrttwoeuler);
	printf("const double eulersq       =  %.21Lg;\n", eulersq);
	printf("const double ieulersq      =  %.21Lg;\n", ieulersq);
	printf("\n");

	// print some squareroots
	printf("const double sqrt2         = %.21Lg;\n", ldsqrt( 2.0L));
	printf("const double isqrt2        = %.21Lg;\n", ldsqrt(1.0L/2.0L));
	printf("const double sqrt3         = %.21Lg;\n", ldsqrt( 3.0L));
	printf("const double isqrt3        = %.21Lg;\n", ldsqrt(1.0L/3.0L));
	printf("const double sqrt4         = %.21Lg;\n", ldsqrt( 4.0L));
	printf("const double isqrt4        = %.21Lg;\n", ldsqrt(1.0L/4.0L));
	printf("const double sqrt5         = %.21Lg;\n", ldsqrt( 5.0L));
	printf("const double isqrt5        = %.21Lg;\n", ldsqrt(1.0L/5.0L));
	printf("const double sqrt6         = %.21Lg;\n", ldsqrt( 6.0L));
	printf("const double isqrt6        = %.21Lg;\n", ldsqrt(1.0L/6.0L));
	printf("const double sqrt7         = %.21Lg;\n", ldsqrt( 7.0L));
	printf("const double isqrt7        = %.21Lg;\n", ldsqrt(1.0L/7.0L));
	printf("const double sqrt8         = %.21Lg;\n", ldsqrt( 8.0L));
	printf("const double isqrt8        = %.21Lg;\n", ldsqrt(1.0L/8.0L));
	printf("const double sqrt9         = %.21Lg;\n", ldsqrt( 9.0L));
	printf("const double isqrt9        = %.21Lg;\n", ldsqrt(1.0L/9.0L));
	printf("const double sqrt10        = %.21Lg;\n", ldsqrt(10.0L));
	printf("const double isqrt10       = %.21Lg;\n", ldsqrt(1.0L/10.0L));
	printf("\n");

	// print golden ratio related values
	long double phi                    = 1.6180339887498948482045868343656L;
	long double sqrtphi                = ldsqrt(phi);
	long double iphi                   = 1.0L/phi;
	long double isqrtphi               = ldsqrt(iphi);
	long double twophi                 = 2.0L*phi;
	long double sqrttwophi             = ldsqrt(twophi);
	long double itwophi                = 1.0L/twophi;
	long double isqrttwophi            = ldsqrt(itwophi);
	long double phisq                  = phi*phi;
	long double iphisq                 = 1.0L/phisq;
	printf("const double phi           = %.21Lg;\n", phi);
	printf("const double sqrtphi       = %.21Lg;\n", sqrtphi);
	printf("const double iphi          = %.21Lg;\n", iphi);
	printf("const double isqrtphi      = %.21Lg;\n", isqrtphi);
	printf("const double twophi        = %.21Lg;\n", twophi);
	printf("const double sqrttwophi    = %.21Lg;\n", sqrttwophi);
	printf("const double itwophi       = %.21Lg;\n", itwophi);
	printf("const double isqrttwophi   = %.21Lg;\n", isqrttwophi);
	printf("const double phisq         = %.21Lg;\n", phisq);
	printf("const double iphisq        = %.21Lg;\n", iphisq);
	printf("\n");

	// print physical constants
   //////////////////////////////////////////////////////////////////////////////
	//                                 SI units                                 //
	//////////////////////////////////////////////////////////////////////////////
	
	///////////////////
	// defined units //
	///////////////////
   // speed of light in vacuum [m/s] 
	// (defined)
	long double lightspeed_si = 299792458.0L ;
	// planck's constant [kg*m^2/s]
	// (defined)
	long double h_planck_si = 6.62607015e-34L ;
	// elementary charge [c]
	// (defined)
	long double elementary_charge_si = 1.602176634e-19L ;
	// boltzmann constant [kg*m^2/s^2/k]
	// (defined)
	long double boltzmann_si = 1.380649e-23L ;
	// avogadro's constant [1/mol]
	// (defined)
	long double n_avogadro_si = 6.02214076e23L ;
	printf("// speed of light in vacuum [m/s] \n");
	printf("// (defined)\n");
	printf("const double lightspeed_si = %.21Lg;\n", lightspeed_si);
	printf("\n");
	printf("// planck's constant [kg*m^2/s]\n");
	printf("// (defined)\n");
	printf("const double h_planck_si = %.21Lg;\n", h_planck_si);
	printf("\n");
	printf("// elementary charge [c]\n");
	printf("// (defined)\n");
	printf("const double elementary_charge_si = %.21Lg;\n", elementary_charge_si);
	printf("\n");
	printf("// boltzmann constant [kg*m^2/s^2/k]\n");
	printf("// (defined)\n");
	printf("const double boltzmann_si = %.21Lg;\n", boltzmann_si);
	printf("\n");
	printf("// avogadro's constant [1/mol]\n");
	printf("// (defined)\n");
	printf("const double n_avogadro_si = %.21Lg;\n", n_avogadro_si);
	printf("\n");

	////////////////////////////////
	// derived and measured units //
	////////////////////////////////
	// reduced planck's constant [kg*m^2/s]
	long double h_bar_si = h_planck_si*itwopi ;
	// magnetic constant or permeability of vacuum [n/a^2]
	long double mu_perm_si = 4.0e-7L*pi ;
	// electric constant or permittivity of vacuum [f/m]
	long double permittivity_si = 8.85418781762039e-12L ;
	// electron charge [c] 
	long double electron_charge_si = -1.0L * elementary_charge_si ;
	// proton charge [c]
	long double proton_charge_si = elementary_charge_si ;
	// gravitational constant [m^3/(kg*s^2]
	long double g_gravity_si = 6.67408e-11L ;
	// electron mass [kg]
	long double electron_mass_si = 9.10938291e-31L ;
	// proton mass [kg]
	long double proton_mass_si = 1.672621777e-27L ;
	// electron g factor [ ]
	long double electron_gfactor_si = -2.00231930436182L ;
	// coulomb's constant [kg*m^4/s^2/c^2]
	long double coulombs_const_si = 8987551787.3681764L ;
	// rydberg constant [1/m]
	long double rydberg_si = 10973731.56850865L ;
	printf("// reduced planck's constant [kg*m^2/s]\n");
	printf("const double h_bar_si = %.21Lg;\n", h_bar_si);
	printf("\n");
	printf("// magnetic constant or permeability of vacuum [n/a^2]\n");
	printf("const double mu_perm_si = %.21Lg;\n", mu_perm_si);
	printf("\n");
	printf("// electric constant or permittivity of vacuum [f/m]\n");
	printf("const double permittivity_si = %.21Lg;\n", permittivity_si);
	printf("\n");
	printf("// electron charge [c] \n");
	printf("const double electron_charge_si = %.21Lg;\n", electron_charge_si);
	printf("\n");
	printf("// proton charge [c]\n");
	printf("const double proton_charge_si = %.21Lg;\n", proton_charge_si);
	printf("\n");
	printf("// gravitational constant [m^3/(kg*s^2]\n");
	printf("const double g_gravity_si = %.21Lg;\n", g_gravity_si);
	printf("\n");
	printf("// electron mass [kg]\n");
	printf("const double electron_mass_si = %.21Lg;\n", electron_mass_si);
	printf("\n");
	printf("// proton mass [kg]\n");
	printf("const double proton_mass_si = %.21Lg;\n", proton_mass_si);
	printf("\n");
	printf("// electron g factor [ ]\n");
	printf("const double electron_gfactor_si = %.21Lg;\n", electron_gfactor_si);
	printf("\n");
	printf("// coulomb's constant [kg*m^4/s^2/c^2]\n");
	printf("const double coulombs_const_si = %.21Lg;\n", coulombs_const_si);
	printf("\n");
	printf("// rydberg constant [1/m]\n");
	printf("const double rydberg_si = %.21Lg;\n", rydberg_si);
	printf("\n");

	//////////////////////////////////////////////////////////////////////////////
	//                     dimensionless physical constants                     //
	//////////////////////////////////////////////////////////////////////////////
	long double finestructure = 0.007297352566417L ;
	long double em_coupling = finestructure ;
	long double grav_coupling = 1.7518e-45L ;
	long double str_coupling = 1.0L ;
	printf("// finestructure constant\n");
	printf("const double finestructure = %.21Lg;\n", finestructure);
	printf("\n");
	printf("const double em_coupling = %.21Lg;\n", em_coupling);
	printf("\n");
	printf("const double grav_coupling = %.21Lg;\n", grav_coupling);
	printf("\n");
	printf("const double str_coupling = %.21Lg;\n", str_coupling);
	printf("\n");

	//////////////////////////////////////////////////////////////////////////////
	//                            conversion factors                            //
	//////////////////////////////////////////////////////////////////////////////
	
	/////////////////////////
	// si -> au & au -> si //
	/////////////////////////
	// bohr to metre
	long double length_au2si = 5.291772106712e-11L ;
	// metre to bohr
	long double length_si2au = 1.0L / length_au2si ;
	// hartree to joule
	long double energy_au2si = 4.35974465054e18L ;
	// joule to hartree
	long double energy_si2au = 1.0 / energy_au2si ;
	long double time_au2si = h_bar_si / energy_au2si ;
	long double time_si2au = 1.0 / time_au2si ;
	long double momentum_au2si = h_bar_si / length_au2si ;
	long double momentum_si2au = 1.0 / momentum_au2si ;
	long double velocity_au2si = length_au2si * energy_au2si / h_bar_si ;
	long double velocity_si2au = 1.0 / velocity_au2si ;
	long double mass_au2si = electron_mass_si ;
	long double mass_si2au = 1.0 / mass_au2si ;
	long double charge_au2si = elementary_charge_si ;
	long double charge_si2au = 1.0 / charge_au2si ;
	long double force_au2si = energy_au2si / length_au2si ;
	long double force_si2au = 1.0 / force_au2si ;
	long double temperature_au2si = energy_au2si / boltzmann_si ;
	long double temperature_si2au = 1.0 / temperature_au2si ;
	long double pressure_au2si = energy_au2si / (length_au2si*length_au2si*length_au2si) ;
	long double pressure_si2au = 1.0 / pressure_au2si ;
	long double efield_au2si = energy_au2si / (elementary_charge_si * length_au2si) ;
	long double efield_si2au = 1.0 / length_au2si ;
	long double epot_au2si = energy_au2si / elementary_charge_si ;
	long double epot_si2au = 1.0 / epot_au2si ;
	long double edipole_au2si = elementary_charge_si / length_au2si ;
	long double edipole_si2au = 1.0 / edipole_au2si ;
	printf("// bohr to metre\n");
	printf("const double length_au2si = %.21Lg;\n", length_au2si);
	printf("// metre to bohr\n");
	printf("const double length_si2au = %.21Lg;\n", length_si2au);
	printf("\n");
	printf("// hartree to joule\n");
	printf("const double energy_au2si = %.21Lg;\n", energy_au2si);
	printf("// joule to hartree\n");
	printf("const double energy_si2au = %.21Lg;\n", energy_si2au);
	printf("\n");
	printf("const double time_au2si = %.21Lg;\n", time_au2si);
	printf("const double time_si2au = %.21Lg;\n", time_si2au);
	printf("\n");
	printf("const double momentum_au2si = %.21Lg;\n", momentum_au2si);
	printf("const double momentum_si2au = %.21Lg;\n", momentum_si2au);
	printf("\n");
	printf("const double velocity_au2si = %.21Lg;\n", velocity_au2si);
	printf("const double velocity_si2au = %.21Lg;\n", velocity_si2au);
	printf("\n");
	printf("const double mass_au2si = %.21Lg;\n", mass_au2si);
	printf("const double mass_si2au = %.21Lg;\n", mass_si2au);
	printf("\n");
	printf("const double charge_au2si = %.21Lg;\n", charge_au2si);
	printf("const double charge_si2au = %.21Lg;\n", charge_si2au);
	printf("\n");
	printf("const double force_au2si = %.21Lg;\n", force_au2si);
	printf("const double force_si2au = %.21Lg;\n", force_si2au);
	printf("\n");
	printf("const double temperature_au2si = %.21Lg;\n", temperature_au2si);
	printf("const double temperature_si2au = %.21Lg;\n", temperature_si2au);
	printf("\n");
	printf("const double pressure_au2si = %.21Lg;\n", pressure_au2si);
	printf("const double pressure_si2au = %.21Lg;\n", pressure_si2au);
	printf("\n");
	printf("const double efield_au2si = %.21Lg;\n", efield_au2si);
	printf("const double efield_si2au = %.21Lg;\n", efield_si2au);
	printf("\n");
	printf("const double epot_au2si = %.21Lg;\n", epot_au2si);
	printf("const double epot_si2au = %.21Lg;\n", epot_si2au);
	printf("\n");
	printf("const double edipole_au2si = %.21Lg;\n", edipole_au2si);
	printf("const double edipole_si2au = %.21Lg;\n", edipole_si2au);
	printf("\n");

	//////////////////////////////////////////////////////////////////////////////
	//                               atomic units                               //
	//////////////////////////////////////////////////////////////////////////////
	
	//////////////////////////
	// defined atomic units //
	//////////////////////////
	// mass of an electron
	// (defined)
	long double electron_mass_au = 1.0 ;
	// absolute charge of an electron 
	// (defined)
	long double elementary_charge_au = 1.0 ;
	// action quantum
	// (defined)
	long double h_bar_au = 1.0 ;
	// coulomb force constant
	// (defined) 
	long double coulombs_const_au = 1.0 ;
	// boltzmann constant
	// (defined)
	long double boltzmann_au = 1.0 ;
	printf("// mass of an electron\n");
	printf("// (defined)\n");
	printf("const double electron_mass_au = %.21Lg;\n", electron_mass_au);
	printf("\n");
	printf("// absolute charge of an electron \n");
	printf("// (defined)\n");
	printf("const double elementary_charge_au = %.21Lg;\n", elementary_charge_au);
	printf("\n");
	printf("// action quantum\n");
	printf("// (defined)\n");
	printf("const double h_bar_au = %.21Lg;\n", h_bar_au);
	printf("\n");
	printf("// coulomb force constant\n");
	printf("// (defined) \n");
	printf("const double coulombs_const_au = %.21Lg;\n", coulombs_const_au);
	printf("\n");
	printf("// boltzmann constant\n");
	printf("// (defined)\n");
	printf("const double boltzmann_au = %.21Lg;\n", boltzmann_au);
	printf("\n");

	//////////////////////////
	// derived atomic units //
	//////////////////////////
	// speed of light in a vacuum
	long double lightspeed_au = 1.0 / finestructure ;
	long double h_planck_au = 2.0 * pi ;
	// magnetic constant or permeability of vacuum 
	long double mu_perm_au = 4.0 * pi * finestructure*finestructure ;
	// electric constant or permittivity of vacuum 
	long double permittivity_au = 0.25 * ipi ;
	// electron charge
	long double electron_charge_au = -1.0 * elementary_charge_au ;
	// proton charge
	long double proton_charge_au = elementary_charge_au ;
	// proton mass
	long double proton_mass_au = proton_mass_si / electron_mass_si ;
	printf("// speed of light in a vacuum\n");
	printf("const double lightspeed_au = %.21Lg;\n", lightspeed_au);
	printf("\n");
	printf("const double h_planck_au = %.21Lg;\n", h_planck_au);
	printf("\n");
	printf("// magnetic constant or permeability of vacuum \n");
	printf("const double mu_perm_au = %.21Lg;\n", mu_perm_au);
	printf("\n");
	printf("// electric constant or permittivity of vacuum \n");
	printf("const double permittivity_au = %.21Lg;\n", permittivity_au);
	printf("\n");
	printf("// electron charge\n");
	printf("const double electron_charge_au = %.21Lg;\n", electron_charge_au);
	printf("\n");
	printf("// proton charge\n");
	printf("const double proton_charge_au = %.21Lg;\n", proton_charge_au);
	printf("\n");
	printf("// proton mass\n");
	printf("const double proton_mass_au = %.21Lg;\n", proton_mass_au);
	printf("\n");

	//////////////////////////////
	// other conversion factors //
	//////////////////////////////
	long double mass_u2si = electron_mass_si ;
	long double mass_si2u = 1.0 / mass_u2si ;
	long double mass_u2au = proton_mass_au ;
	long double mass_au2u = 1.0 / mass_u2au ;
	long double length_angstrom2si = 10.0e-10 ;
	long double length_si2angstrom = 1.0 / length_angstrom2si ;
	long double length_angstrom2au = length_angstrom2si * length_si2au ;
	long double length_au2angstrom = 1.0 / length_angstrom2au ;
	printf("const double mass_u2si = %.21Lg;\n", mass_u2si);
	printf("const double mass_si2u = %.21Lg;\n", mass_si2u);
	printf("const double mass_u2au = %.21Lg;\n", mass_u2au);
	printf("const double mass_au2u = %.21Lg;\n", mass_au2u);
	printf("\n");
	printf("const double length_angstrom2si = %.21Lg;\n", length_angstrom2si);
	printf("const double length_si2angstrom = %.21Lg;\n", length_si2angstrom);
	printf("const double length_angstrom2au = %.21Lg;\n", length_angstrom2au);
	printf("const double length_au2angstrom = %.21Lg;\n", length_au2angstrom);

	return 0;
}

long double ldsqrt(long double x) {
	long double a = 0.5L*x + 0.5L;
	long double delta = 1.0L;
	long double sqrtx = 0.0L;
	while (delta > 0.0L) {
		sqrtx = 0.5L*(x/a + a);
		delta = a -sqrtx;
		a = sqrtx;
	}
	return sqrtx;
}
