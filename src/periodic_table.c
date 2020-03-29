
typedef struct element_type_t {
	char   symbol[4];
   char   name[15];
   int    number;
   double mass;
} element_type;

#define N_ELEMENTS 119
const int n_elements = N_ELEMENTS;

element_type periodic_table[N_ELEMENTS] = {
      {// dummy element
      .symbol = "X ",
      .name = "Dummy",
      .number = 0,
      .mass = 0.0},
      {// Hydrogen
      .symbol = "H ",
      .name = "Hydrogen",
      .number = 1,
      .mass = 1.00794},
      {// Helium
      .symbol = "He",
      .name = "Helium",
      .number = 2,
      .mass = 4.002602},
      {// Lithium
      .symbol = "Li",
      .name = "Lithium",
      .number = 3,
      .mass = 6.941},
      {// Beryllium
      .symbol = "Be",
      .name = "Beryllium",
      .number = 4,
      .mass = 9.012182},
      {// Boron
      .symbol = "B ",
      .name = "Boron",
      .number = 5,
      .mass = 10.811},
      {// Carbon
      .symbol = "C ",
      .name = "Carbon",
      .number = 6,
      .mass = 12.0107},
      {// Nitrogen
      .symbol = "N ",
      .name = "Nitrogen",
      .number = 7,
      .mass = 14.0067},
      {// Oxygen
      .symbol = "O ",
      .name = "Oxygen",
      .number = 8,
      .mass = 15.9994},
      {// Fluorine
      .symbol = "F ",
      .name = "Fluorine",
      .number = 9,
      .mass = 18.9984032},
      {// Neon
      .symbol = "Ne",
      .name = "Neon",
      .number = 10,
      .mass = 20.1797},
      {// Sodium
      .symbol = "Na",
      .name = "Sodium",
      .number = 11,
      .mass = 22.98976928},
      {// Magnesium
      .symbol = "Mg",
      .name = "Magnesium",
      .number = 12,
      .mass = 24.305},
      {// Aluminium
      .symbol = "Al",
      .name = "Aluminium",
      .number = 13,
      .mass = 26.9815386},
      {// Silicon
      .symbol = "Si",
      .name = "Silicon",
      .number = 14,
      .mass = 28.0855},
      {// Phosphorus
      .symbol = "P ",
      .name = "Phosphorus",
      .number = 15,
      .mass = 30.973762},
      {// Sulfur
      .symbol = "S ",
      .name = "Sulfur",
      .number = 16,
      .mass = 32.065},
      {// Chlorine
      .symbol = "Cl",
      .name = "Chlorine",
      .number = 17,
      .mass = 35.453},
      {// Argon
      .symbol = "Ar",
      .name = "Argon",
      .number = 18,
      .mass = 39.948},
      {// Potassium
      .symbol = "K ",
      .name = "Potassium",
      .number = 19,
      .mass = 39.0983},
      {// Calcium
      .symbol = "Ca",
      .name = "Calcium",
      .number = 20,
      .mass = 40.078},
      {// Scandium
      .symbol = "Sc",
      .name = "Scandium",
      .number = 21,
      .mass = 44.955912},
      {// Titanium
      .symbol = "Ti",
      .name = "Titanium",
      .number = 22,
      .mass = 47.867},
      {// Vanadium
      .symbol = "V ",
      .name = "Vanadium",
      .number = 23,
      .mass = 50.9415},
      {// Chromium
      .symbol = "Cr",
      .name = "Chromium",
      .number = 24,
      .mass = 51.9961},
      {// Manganese
      .symbol = "Mn",
      .name = "Manganese",
      .number = 25,
      .mass = 54.938045},
      {// Iron
      .symbol = "Fe",
      .name = "Iron",
      .number = 26,
      .mass = 55.845},
      {// Cobalt
      .symbol = "Co",
      .name = "Cobalt",
      .number = 27,
      .mass = 58.933195},
      {// Nickel
      .symbol = "Ni",
      .name = "Nickel",
      .number = 28,
      .mass = 58.6934},
      {// Copper
      .symbol = "Cu",
      .name = "Copper",
      .number = 29,
      .mass = 63.546},
      {// Zinc
      .symbol = "Zn",
      .name = "Zinc",
      .number = 30,
      .mass = 65.38},
      {// Gallium
      .symbol = "Ga",
      .name = "Gallium",
      .number = 31,
      .mass = 69.723},
      {// Germanium
      .symbol = "Ge",
      .name = "Germanium",
      .number = 32,
      .mass = 72.64},
      {// Arsenic
      .symbol = "As",
      .name = "Arsenic",
      .number = 33,
      .mass = 74.9216},
      {// Selenium
      .symbol = "Se",
      .name = "Selenium",
      .number = 34,
      .mass = 78.96},
      {// Bromine
      .symbol = "Br",
      .name = "Bromine",
      .number = 35,
      .mass = 79.904},
      {// Krypton
      .symbol = "Kr",
      .name = "Krypton",
      .number = 36,
      .mass = 83.798},
      {// Rubidium
      .symbol = "Rb",
      .name = "Rubidium",
      .number = 37,
      .mass = 85.4678},
      {// Strontium
      .symbol = "Sr",
      .name = "Strontium",
      .number = 38,
      .mass = 87.62},
      {// Yttrium
      .symbol = "Y ",
      .name = "Yttrium",
      .number = 39,
      .mass = 88.90585},
      {// Zirconium
      .symbol = "Zr",
      .name = "Zirconium",
      .number = 40,
      .mass = 91.224},
      {// Niobium
      .symbol = "Nb",
      .name = "Niobium",
      .number = 41,
      .mass = 92.90638},
      {// Molybdenum
      .symbol = "Mo",
      .name = "Molybdenum",
      .number = 42,
      .mass = 95.96},
      {// Technetium
      .symbol = "Tc",
      .name = "Technetium",
      .number = 43,
      .mass = 97.9072},
      {// Ruthenium
      .symbol = "Ru",
      .name = "Ruthenium",
      .number = 44,
      .mass = 101.07},
      {// Rhodium
      .symbol = "Rh",
      .name = "Rhodium",
      .number = 45,
      .mass = 102.9055},
      {// Palladium
      .symbol = "Pd",
      .name = "Palladium",
      .number = 46,
      .mass = 106.42},
      {// Silver
      .symbol = "Ag",
      .name = "Silver",
      .number = 47,
      .mass = 107.8682},
      {// Cadmium
      .symbol = "Cd",
      .name = "Cadmium",
      .number = 48,
      .mass = 112.411},
      {// Indium
      .symbol = "In",
      .name = "Indium",
      .number = 49,
      .mass = 114.818},
      {// Tin
      .symbol = "Sn",
      .name = "Tin",
      .number = 50,
      .mass = 118.71},
      {// Antimony
      .symbol = "Sb",
      .name = "Antimony",
      .number = 51,
      .mass = 121.76},
      {// Tellurium
      .symbol = "Te",
      .name = "Tellurium",
      .number = 52,
      .mass = 127.6},
      {// Iodine
      .symbol = "I ",
      .name = "Iodine",
      .number = 53,
      .mass = 126.90447},
      {// Xenon
      .symbol = "Xe",
      .name = "Xenon",
      .number = 54,
      .mass = 131.293},
      {// Cesium
      .symbol = "Cs",
      .name = "Cesium",
      .number = 55,
      .mass = 132.9054519},
      {// Barium
      .symbol = "Ba",
      .name = "Barium",
      .number = 56,
      .mass = 137.327},
      {// Lanthanum
      .symbol = "La",
      .name = "Lanthanum",
      .number = 57,
      .mass = 138.90547},
      {// Cerium
      .symbol = "Ce",
      .name = "Cerium",
      .number = 58,
      .mass = 140.116},
      {// Praseodymium
      .symbol = "Pr",
      .name = "Praseodymium",
      .number = 59,
      .mass = 140.90765},
      {// Neodymium
      .symbol = "Nd",
      .name = "Neodymium",
      .number = 60,
      .mass = 144.242},
      {// Promethium
      .symbol = "Pm",
      .name = "Promethium",
      .number = 61,
      .mass = 144.9127}, 
      {// Samarium
      .symbol = "Sm",
      .name = "Samarium",
      .number = 62,
      .mass = 150.36},
      {// Europium
      .symbol = "Eu",
      .name = "Europium",
      .number = 63,
      .mass = 151.964},
      {// Gadolinium
      .symbol = "Gd",
      .name = "Gadolinium",
      .number = 64,
      .mass = 157.25},
      {// Terbium
      .symbol = "Tb",
      .name = "Terbium",
      .number = 65,
      .mass = 158.92535},
      {// Dysprosium
      .symbol = "Dy",
      .name = "Dysprosium",
      .number = 66,
      .mass = 162.5},
      {// Holmium
      .symbol = "Ho",
      .name = "Holmium",
      .number = 67,
      .mass = 164.93032},
      {// Erbium
      .symbol = "Er",
      .name = "Erbium",
      .number = 68,
      .mass = 167.259},
      {// Thulium
      .symbol = "Tm",
      .name = "Thulium",
      .number = 69,
      .mass = 168.93421},
      {// Ytterbium
      .symbol = "Yb",
      .name = "Ytterbium",
      .number = 70,
      .mass = 173.054},
      {// Lutetium
      .symbol = "Lu",
      .name = "Lutetium",
      .number = 71,
      .mass = 174.9668},
      {// Hafnium
      .symbol = "Hf",
      .name = "Hafnium",
      .number = 72,
      .mass = 178.49},
      {// Tantalum
      .symbol = "Ta",
      .name = "Tantalum",
      .number = 73,
      .mass = 180.94788},
      {// Tungsten
      .symbol = "W ",
      .name = "Tungsten",
      .number = 74,
      .mass = 183.84},
      {// Rhenium
      .symbol = "Re",
      .name = "Rhenium",
      .number = 75,
      .mass = 186.207},
      {// Osmium
      .symbol = "Os",
      .name = "Osmium",
      .number = 76,
      .mass = 190.23},
      {// Iridium
      .symbol = "Ir",
      .name = "Iridium",
      .number = 77,
      .mass = 192.217},
      {// Platinum
      .symbol = "Pt",
      .name = "Platinum",
      .number = 78,
      .mass = 195.084},
      {// Gold
      .symbol = "Au",
      .name = "Gold",
      .number = 79,
      .mass = 196.966569},
      {// Mercury
      .symbol = "Hg",
      .name = "Mercury",
      .number = 80,
      .mass = 200.59},
      {// Thallium
      .symbol = "Tl",
      .name = "Thallium",
      .number = 81,
      .mass = 204.3833},
      {// Lead
      .symbol = "Pb",
      .name = "Lead",
      .number = 82,
      .mass = 207.2},
      {// Bismuth
      .symbol = "Bi",
      .name = "Bismuth",
      .number = 83,
      .mass = 208.9804},
      {// Polonium
      .symbol = "Po",
      .name = "Polonium",
      .number = 84,
      .mass = 208.9824},
      {// Astatine
      .symbol = "At",
      .name = "Astatine",
      .number = 85,
      .mass = 209.9871},
      {// Radon
      .symbol = "Rn",
      .name = "Radon",
      .number = 86,
      .mass = 222.0176},
      {// Francium
      .symbol = "Fr",
      .name = "Francium",
      .number = 87,
      .mass = 223.0197},
      {// Radium
      .symbol = "Ra",
      .name = "Radium",
      .number = 88,
      .mass = 226.0254},
      {// Actinium
      .symbol = "Ac",
      .name = "Actinium",
      .number = 89,
      .mass = 227.0278},
      {// Thorium
      .symbol = "Th",
      .name = "Thorium",
      .number = 90,
      .mass = 232.03806},
      {// Proctactinium
      .symbol = "Pa",
      .name = "Proctactinium",
      .number = 91,
      .mass = 231.03588},
      {// Uranium
      .symbol = "U ",
      .name = "Uranium",
      .number = 92,
      .mass = 238.02891},
      {// Neptunium
      .symbol = "Np",
      .name = "Neptunium",
      .number = 93,
      .mass = 237.0482},
      {// Plutonium
      .symbol = "Pu",
      .name = "Plutonium",
      .number = 94,
      .mass = 244.0642},
      {// Americum
      .symbol = "Am",
      .name = "Americum",
      .number = 95,
      .mass = 243.0614},
      {// Curium
      .symbol = "Cm",
      .name = "Curium",
      .number = 96,
      .mass = 247.0704},
      {// Berkelium
      .symbol = "Bk",
      .name = "Berkelium",
      .number = 97,
      .mass = 247.0703},
      {// Californium
      .symbol = "Cf",
      .name = "Californium",
      .number = 98,
      .mass = 251.0796},
      {// Einsteinium
      .symbol = "Es",
      .name = "Einsteinium",
      .number = 99,
      .mass = 252.083},
      {// Fermium
      .symbol = "Fm",
      .name = "Fermium",
      .number = 100,
      .mass = 257.0951},
      {// Mendelevium
      .symbol = "Md",
      .name = "Mendelevium",
      .number = 101,
      .mass = 258.0984},
      {// Nobelium
      .symbol = "No",
      .name = "Nobelium",
      .number = 102,
      .mass = 259.101},
      {// Lawrencium
      .symbol = "Lr",
      .name = "Lawrencium",
      .number = 103,
      .mass = 262.1096},
      {// Rutherfordium
      .symbol = "Rf",
      .name = "Rutherfordium",
      .number = 104,
      .mass = 267.122},
      {// Dubnium
      .symbol = "Db",
      .name = "Dubnium",
      .number = 105,
      .mass = 268.125},
      {// Seaborgium
      .symbol = "Sg",
      .name = "Seaborgium",
      .number = 106,
      .mass = 271.133},
      {// Bohrium
      .symbol = "Bh",
      .name = "Bohrium",
      .number = 107,
      .mass = 272.0},
      {// Hassium
      .symbol = "Hs",
      .name = "Hassium",
      .number = 108,
      .mass = 277.15},
      {// Meitnerium
      .symbol = "Mt",
      .name = "Meitnerium",
      .number = 109,
      .mass = 276.151},
      {// Darmstadtium
      .symbol = "Ds",
      .name = "Darmstadtium",
      .number = 110,
      .mass = 281.162},
      {// Roentgenium
      .symbol = "Rg",
      .name = "Roentgenium",
      .number = 111,
      .mass = 280.164},
      {// Copernicium
      .symbol = "Cn",
      .name = "Copernicium",
      .number = 112,
      .mass = 285.174},
      {// Nihonium
      .symbol = "Nh",
      .name = "Nihonium",
      .number = 113,
      .mass = 284.178},      
      {// Flerovium
      .symbol = "Fl",
      .name = "Flerovium",
      .number = 114,
      .mass = 289.189},      
      {// Moscovium
      .symbol = "Mc",
      .name = "Moscovium",
      .number = 115,
      .mass = 288.192},      
      {// Livermorium
      .symbol = "Lv",
      .name = "Livermorium",
      .number = 116,
      .mass = 293.0},      
      {// Tennessine
      .symbol = "Ts",
      .name = "Tennessine",
      .number = 117,
      .mass = 294.0},      
      {// Organesson
      .symbol = "Og",
      .name = "Organesson",
      .number = 118,
      .mass = 294.0}
};

